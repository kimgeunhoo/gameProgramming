#include "GameOver.h"


void GameOver() {
	
	system("cls");
	setCursorVisible(true);
	GameOverBorder();
	setCursorPos(32, 18);
	printf("1_ 다시 시작\n");

	setCursorPos(32, 20);
	printf("2_ 메인 화면\n");

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
				if (playerY >= 21) {
					playerY = 20;
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
			GameVal = 1;
			return;
		} else if (playerY == 20 && GetAsyncKeyState(VK_SPACE) & 0x8000) {
			GameVal = 0;
			return;
		}

	}

}