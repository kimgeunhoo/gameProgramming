#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>



// 커서 : output 결과를 출력하는 위치를 안내해주는 안내 기호.

// (x, y)좌표로 커서를 옮긴다.
void setCursorPos(int x, int y) 
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*
	도전 과제
	플레이어의 시작 위치 설정
	좌표 감각 익히기
	setCoursorPos << 이용해서 원하는 위치에 플레이어 배치
	int posx posy << 플레이어 현재 위치
*/
		
bool GameOver = false;

int main() 
{

	// 1번째 이슈 : ■와 " " 의 간격의 크기가 다르다. " " x2

	ShowBorder();

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

		system("cls");
		ShowBorder(); // 이 부분은 개선이 필요
		setCursorPos(playerX, playerY);
		printf("♥");


		Sleep(50);

		// 1. wait inputkey (특정 키를 눌렀을 때)

		// 2. playerX, playerY 값을 변화시킨다.

		// 3. 해당 좌표로 커서를 위치로 바꾸고 printf

		// 4.
			
		// if (종료 조건) 
		// break;
		//break;

		// 캐릭터가 특정 위치에 포함되면 게임 종료
		if (playerX == 36 && playerY == 18) {
			GameOver = true;
		}
		if (GameOver == true) {
			break;
		}
	}
}