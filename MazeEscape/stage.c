#include "stage.h"
#include "borderMenu.h"
#include "coordinate.h"
#include "GameOver.h"

int GameVal = -1;

void stage1()
{
	system("cls");
	setCursorVisible(false);
	//StageBorder1();
	int startX = 2;
	int startY = 21;
	int storeX = 0;
	int storeY = 0;
	int mapX = 0;

	printStage();
	// UI 텍스트
	setCursorPos(startX, startY);
	printf("♥");
	
	while (true)
	{
		if (_kbhit())
		{
			if (startY >= 0 && startY < HEIGHT && mapX >= 0 && mapX < WIDTH - 2) {

				setCursorPos(startX, startY);
				printf("  ");
				if (GetAsyncKeyState(VK_UP) & 0x8000 ||
					GetAsyncKeyState(VK_DOWN) & 0x8000 ||
					GetAsyncKeyState(VK_LEFT) & 0x8000 ||
					GetAsyncKeyState(VK_RIGHT) & 0x8000) 
				{
					storeX = startX;
					storeY = startY;

					if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
					{
						startY -= 1;
						if (startY < 1) {
							startY = 1;
						}
					}
					if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
					{
						startY += 1;
						if (startY > 21) {
							startY = 21;
						}
					}
					if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
					{
						startX -= 2;
						if (startX < 2) {
							startX = 2;
						}
					}
					if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
					{
						startX += 2;
						if (startX > 82) {
							startX = 80;
						}
					}
				}
				if (stageMap[startY][startX / 2] == 1) {
					startX = storeX;
					startY = storeY;
				}
				if (stageMap[startY][startX / 2] >= 2 && stageMap[startY][startX / 2] <= 5) {
					GameOver();
					if (GameVal == 1) {
						startX = 2;
						startY = 21;
						system("cls");
						printStage();
						setCursorVisible(false);
						setCursorPos(startX, startY);
					}
					else if (GameVal == 0) {
						system("cls");
						Sleep(200);
						break;
					}
					GameVal = -1;
				}
				if (stageMap[startY][startX / 2] == 6) {
					Clear();
					if (GameVal == 2) {
						GameVal = -1;
						stage2();
						return;
					} else if (GameVal == 1) {
						system("cls");
						Sleep(300);
						// 왜 안되는지 몰라서 응급처치
						setCursorVisible(true);
						ShowBorder();
						setCursorPos(32, 18);
						printf("1_ 게임 시작\n");
						setCursorPos(32, 19);
						printf("2_ 게임 종료\n");

						// UI 텍스트
						int playerX = 44;
						int playerY = 18;

						setCursorPos(playerX, playerY);
						break;
					}
					else if (GameVal == 0) {
						exit(0);
					}
					
				}
			}

		}
		setCursorPos(startX, startY);
		printf("♥");
		Sleep(75);
		
	}

}

void stage2()
{
	system("cls");
	setCursorVisible(false);
	//StageBorder1();
	int startX = 2;
	int startY = 1;
	int storeX = 0;
	int storeY = 0;
	int mapX = 0;

	printStage2();
	// UI 텍스트
	setCursorPos(startX, startY);
	printf("♥");

	while (true)
	{
		if (_kbhit())
		{
			if (startY >= 0 && startY < HEIGHT && mapX >= 0 && mapX < WIDTH - 2) {

				setCursorPos(startX, startY);
				printf("  ");
				if (GetAsyncKeyState(VK_UP) & 0x8000 ||
					GetAsyncKeyState(VK_DOWN) & 0x8000 ||
					GetAsyncKeyState(VK_LEFT) & 0x8000 ||
					GetAsyncKeyState(VK_RIGHT) & 0x8000)
				{
					storeX = startX;
					storeY = startY;

					if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
					{
						startY -= 1;
						if (startY < 1) {
							startY = 1;
						}
					}
					if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
					{
						startY += 1;
						if (startY > 21) {
							startY = 21;
						}
					}
					if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
					{
						startX -= 2;
						if (startX < 2) {
							startX = 2;
						}
					}
					if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
					{
						startX += 2;
						if (startX > 82) {
							startX = 80;
						}
					}
				}
				if (stageMap2[startY][startX / 2] == 1) {
					startX = storeX;
					startY = storeY;
				}
				if (stageMap2[startY][startX / 2] >= 2 && stageMap2[startY][startX / 2] <= 5) {
					GameOver();
					if (GameVal == 1) {
						startX = 2;
						startY = 1;
						system("cls");
						printStage2();
						setCursorVisible(false);
						setCursorPos(startX, startY);
					}
					else if (GameVal == 0) {
						system("cls");
						Sleep(200);
						break;
					}
					GameVal = -1;
				}
				if (stageMap2[startY][startX / 2] == 6) {
					Clear();
					if (GameVal == 2) {
						system("cls");
						Sleep(50);
						GameVal = -1;
						stage3();
						return;
					}
					else if (GameVal == 1) {
						system("cls");
						Sleep(300);
						// 왜 안되는지 몰라서 응급처치
						setCursorVisible(true);
						ShowBorder();
						setCursorPos(32, 18);
						printf("1_ 게임 시작\n");
						setCursorPos(32, 19);
						printf("2_ 게임 종료\n");

						// UI 텍스트
						int playerX = 44;
						int playerY = 18;

						setCursorPos(playerX, playerY);
						break;
					}
					else if (GameVal == 0) {
						exit(0);
					}

				}
			}

		}
		setCursorPos(startX, startY);
		printf("♥");
		Sleep(75);

	}

}

void stage3()
{
	system("cls");
	setCursorVisible(false);
	//StageBorder1();
	int startX = 40;
	int startY = 5;
	int storeX = 0;
	int storeY = 0;
	int mapX = 0;

	printStage3();
	// UI 텍스트
	setCursorPos(startX, startY);
	printf("♥");

	while (true)
	{
		if (_kbhit())
		{
			if (startY >= 0 && startY < HEIGHT && mapX >= 0 && mapX < WIDTH - 2) {

				setCursorPos(startX, startY);
				printf("  ");
				if (GetAsyncKeyState(VK_UP) & 0x8000 ||
					GetAsyncKeyState(VK_DOWN) & 0x8000 ||
					GetAsyncKeyState(VK_LEFT) & 0x8000 ||
					GetAsyncKeyState(VK_RIGHT) & 0x8000)
				{
					storeX = startX;
					storeY = startY;

					if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
					{
						startY -= 1;
						if (startY < 1) {
							startY = 1;
						}
					}
					if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
					{
						startY += 1;
						if (startY > 21) {
							startY = 21;
						}
					}
					if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
					{
						startX -= 2;
						if (startX < 2) {
							startX = 2;
						}
					}
					if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
					{
						startX += 2;
						if (startX > 82) {
							startX = 80;
						}
					}
				}
				if (stageMap3[startY][startX / 2] == 1) {
					startX = storeX;
					startY = storeY;
				}
				if (stageMap3[startY][startX / 2] >= 2 && stageMap3[startY][startX / 2] <= 5) {
					GameOver();
					if (GameVal == 1) {
						startX = 40;
						startY = 5;
						system("cls");
						printStage3();
						setCursorVisible(false);
						setCursorPos(startX, startY);
					}
					else if (GameVal == 0) {
						system("cls");
						Sleep(200);
						break;
					}
					GameVal = -1;
				}
				if (stageMap3[startY][startX / 2] == 6) {
					Clear();
					if (GameVal == 2) {
						system("cls");
						Sleep(50);
						GameVal = 1;
					}
					else if (GameVal == 1) {
						system("cls");
						Sleep(300);
						// 왜 안되는지 몰라서 응급처치
						setCursorVisible(true);
						ShowBorder();
						setCursorPos(32, 18);
						printf("1_ 게임 시작\n");
						setCursorPos(32, 19);
						printf("2_ 게임 종료\n");

						// UI 텍스트
						int playerX = 44;
						int playerY = 18;

						setCursorPos(playerX, playerY);
						break;
					}
					else if (GameVal == 0) {
						exit(0);
					}

				}
			}

		}
		setCursorPos(startX, startY);
		printf("♥");
		Sleep(75);

	}
}
