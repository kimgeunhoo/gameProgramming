#include "IntroMenu.h"
#include "coordinate.h"
#include "borderMenu.h"
#include "stage.h"
#include "GameOver.h"

void IntroMenu()
{
	system("cls");
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
	while (true)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			// 화살표의 입력을 인식시켜야 함

			if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
			{
				playerY -= 1;
				if (playerY <= 17) {
					playerY = 18;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
			{
				playerY += 1;
				if (playerY >= 20) {
					playerY = 19;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
			{

				if (playerX <= 42) {
					playerX = 44;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
			{
				if (playerX >= 46) {
					playerX = 44;
				}
			}


		}
		if (playerY == 18 && GetAsyncKeyState(VK_SPACE) & 0x8000) {
			stage1();
			if (GameVal == 0) {
				system("cls");
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
			}
		}
		if (playerY == 19 && GetAsyncKeyState(VK_SPACE) & 0x8000) {
			break;
		}
		
	}


	// 로직
	// 입력으로 실행하는 방식 
	// 변수에 갑을 비교해서 실행



}

