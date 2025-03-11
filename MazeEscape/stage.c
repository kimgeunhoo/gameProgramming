#include "stage.h"
#include "borderMenu.h"
#include "coordinate.h"
#include "GameOver.h"

bool GameVal = -1;

#define WIDTH 42  // 맵 가로 크기
#define HEIGHT 20 // 맵 세로 크기

int stageMap[48][23] =//[세로][가로] [cy][cx] 
{
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,1,
	1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,6,1,0,0,0,0,6,1,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,6,1,0,1,0,0,6,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,6,1,0,1,0,0,6,1,0,0,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,
	1,0,0,0,4,4,4,4,4,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

int isWall(int x, int y) {
	return stageMap[y][x] == 1;  // 벽이면 1 반환
}

void movePlayer(int* x, int* y, int dx, int dy) {
	int prevX = *x, prevY = *y;  // 이전 위치 저장

	*x += dx;
	*y += dy;

	if (isWall(*x, *y)) {  // 벽이면 이전 위치로 되돌림
		*x = prevX;
		*y = prevY;
	}
}

// 맵 출력 함수
void printStage() {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			switch (stageMap[i][j]) {
			case 1: printf("■"); break; // 벽
			case 2: printf("▼"); break; // 플레이어 시작 위치
			case 3: printf("★"); break; // 목표
			case 4: printf("▲"); break; // 장애물
			case 5: printf("▶"); break; // 문
			case 6: printf("◀"); break; // 함정
			default: printf(" "); break; // 빈 공간
			}
		}
		printf("\n");
	}
}

void stage1()
{
	system("cls");
	setCursorVisible(false);
	StageBorder1();
	int playerX = 2;
	int playerY = 21;
	int storeX = 0;
	int storeY = 0;
	
	
	// UI 텍스트
	setCursorPos(playerX, playerY);
	printf("♥");
	
	while (true)
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
				if (playerY >= 22) {
					playerY = 21;
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
				if (playerX >= 78) {
					playerX = 76;
				}
			}
	
			else
			{
				// 그 자리 그대로
			}
		

		}
		setCursorPos(playerX, playerY);
		printf("♥");
		Sleep(50);


		// GameOver 함수
		if (playerX >= 20 && playerX <= 30 && playerY == 19) {
			GameOver();
			if (GameVal == 1) {
				playerX = 2;
				playerY = 21;
				system("cls");
				StageBorder1();
				setCursorVisible(false);
				setCursorPos(playerX, playerY);
			}
			else if (GameVal == 0) {
				system("cls");
				Sleep(50);
				break;
			}
		}
		if (playerX == 74 && playerY == 13) {
			GameVal =  0;
			break;
		}

		// Wall
		
	}
}

void stage2()
{
	
}

void stage3()
{

}
