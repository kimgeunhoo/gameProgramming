#include "stage.h"
#include "borderMenu.h"
#include "coordinate.h"
#include "GameOver.h"

bool GameVal = -1;

void stage1()
{
	system("cls");
	setCursorVisible(false);
	StageBorder1();
	int playerX = 2;
	int playerY = 21;
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
	}
}

void stage2()
{
	system("cls");
	setCursorVisible(false);
	StageBorder1();
	int playerX = 2;
	int playerY = 22;
	// UI 텍스트
	setCursorPos(playerX, playerY);
	printf("♥");
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
				if (playerX >= 84) {
					playerX = 82;
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
	}
}

void stage3()
{

}
