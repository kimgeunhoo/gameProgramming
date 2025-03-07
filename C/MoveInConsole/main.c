#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"



// 커서 : output 결과를 출력하는 위치를 안내해주는 안내 기호.

// (x, y)좌표로 커서를 옮긴다.
void setCursorPos(int x, int y) 
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 커서 유무 제어. true = 보이는 상태, false = 안 보이는 상태
void setCursorVisible(bool enable) 
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

/*
	도전 과제
	플레이어의 시작 위치 설정
	좌표 감각 익히기
	setCoursorPos << 이용해서 원하는 위치에 플레이어 배치
	int posx posy << 플레이어 현재 위치
*/
		
// 전역 변수
bool GameOver = false;
int CurrentScore = 0;
int randomX = 16;
int randomY = 1;
int playTime = 0;

int questItemPosX = 34;
int questItemPosY = 5;
bool isQuest = false;

int main() 
{

	// 1번째 이슈 : ■와 " " 의 간격의 크기가 다르다. " " x2

	ShowBorder();
	CreateRandomSeed();
	setCursorPos(randomX, randomY);
	printf("★");
	setCursorPos(questItemPosX, questItemPosY);
	printf("◎");

	setCursorVisible(false);

	srand(time(NULL));
	
	// 플레이어의 현재 좌표 설명해주는 변수 선언
	//int playerX = rand() % 16 + 2; 
	//int	playerY = rand() % 16 + 2;

	int playerX = 10; // x값 + 2
	int	playerY = 5; // y값 + 1


	setCursorPos(playerX, playerY);
	// 플레이어가 시작할 때 등장한다.
	// 플레이어를 경계선 안에 그려야 함
	printf("♥"); // 현재 커서위치에 "" 문자를 출력한다.

	// 게임이 종료되지 않도록 루프 생성
	// 반복적으로 실행되는 부분
	while (1) 
	{
		if (_kbhit()) 
		{
			setCursorPos(playerX, playerY);
			printf("  ");
			// 화살표의 입력을 인식시켜야 함
			
			if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
			{
				playerY -= 1;
				if (playerY <= 0) {
					playerY = 1;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
			{
				playerY += 1;
				if (playerY >= 19) {
					playerY = 18;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
			{
				playerX -= 2;
				if (playerX <= 0) {
					playerX = 2;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
			{
				playerX += 2;
				if (playerX >= 38) {
					playerX = 36;
				}
			}
			else
			{
				// 그 자리 그대로
			}
			


		}
		// 좌표 테스트용 
		//printf("현재 좌표 : (%d, %d)", playerX, playerY);
		//system("cls");	모든값이 지워진다
		setCursorPos(playerX, playerY);
		printf("♥");

		setCursorPos(60, 0);
		printf("Score: \n");
		setCursorPos(60, 1);
		printf("현재 점수: %d", CurrentScore);

		// 시간 제어 코드
		playTime++;

		int hour = playTime / 360;
		int minute = playTime / 60;
		int second = playTime % 60;
		setCursorPos(60, 2);
		printf("플레이 시간: %02d: %02d", minute, second);

		if (isQuest == true) {
			setCursorPos(60, 3);
			printf("퀘스트가 활성화되었습니다.");
		}

		Sleep(50);

		// UI 코드
		

		// 1. wait inputkey (특정 키를 눌렀을 때)
		// 2. playerX, playerY 값을 변화시킨다.
		// 3. 해당 좌표로 커서를 위치로 바꾸고 printf

		// 캐릭터가 특정 위치에 포함되면 게임 종료

		if (playerX == randomX && playerY == randomY) {

			CurrentScore++;	// 1. 점수가 오른다
							// 2. 좌표를 바꾼다
			randomX = ReturnPosX();
			randomY = ReturnPosY();
			setCursorPos(randomX, randomY);
			printf("★");
			//GameOver = true;
		}

		if (playerX == questItemPosX && playerY == questItemPosY) {

			isQuest = true;
			//GameOver = true;
		}


		if (CurrentScore == 10) {
			break;
		}
	}
}