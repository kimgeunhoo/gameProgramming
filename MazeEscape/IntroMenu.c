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
	printf("1_ ���� ����\n");
	setCursorPos(32, 19);
	printf("2_ ���� ����\n");

	// UI �ؽ�Ʈ
	int playerX = 44;
	int playerY = 18;

	setCursorPos(playerX, playerY);
	while (true)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			// ȭ��ǥ�� �Է��� �νĽ��Ѿ� ��

			if (GetAsyncKeyState(VK_UP) & 0x8000) // ��
			{
				playerY -= 1;
				if (playerY <= 17) {
					playerY = 18;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // �Ʒ�
			{
				playerY += 1;
				if (playerY >= 20) {
					playerY = 19;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // ����
			{

				if (playerX <= 42) {
					playerX = 44;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // ������
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
				printf("1_ ���� ����\n");
				setCursorPos(32, 19);
				printf("2_ ���� ����\n");

				// UI �ؽ�Ʈ
				int playerX = 44;
				int playerY = 18;

				setCursorPos(playerX, playerY);
			}
		}
		if (playerY == 19 && GetAsyncKeyState(VK_SPACE) & 0x8000) {
			break;
		}
		
	}


	// ����
	// �Է����� �����ϴ� ��� 
	// ������ ���� ���ؼ� ����



}

