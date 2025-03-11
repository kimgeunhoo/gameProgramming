#include "Clear.h"
#include "coordinate.h"
#include "GameOver.h"


void Clear() {
	system("cls");
	setCursorVisible(true);
	ClearBorder();
	setCursorPos(32, 18);
	printf("1_ 메인 화면\n");
	setCursorPos(32, 19);
	printf("2_ 게임 종료\n");
	int playerX = 44;
	int playerY = 18;
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
			GameVal = 1;
			return;
		}
		if (playerY == 19 && GetAsyncKeyState(VK_SPACE) & 0x8000) {
			GameVal = 0;
			return;
		}

	}
}
