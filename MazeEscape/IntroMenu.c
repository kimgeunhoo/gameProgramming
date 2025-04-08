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
	setCursorPos(32, 20);
	printf("3_ Ŭ���� ���\n");
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
			Sleep(50);
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
				if (playerY >= 21) {
					playerY = 20;
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
		if (playerY == 18 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
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
		if (playerY == 19 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			break;
		}
		if (playerY == 20 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			break;
		}
	}


	// ����
	// �Է����� �����ϴ� ��� 
	// ������ ���� ���ؼ� ����



}

void StageMenu() {
	system("cls");
	setCursorVisible(true);
	MenuBorder();
	int playerX = 20;
	int playerY = 3;
	setCursorPos(playerX, playerY);
	while (true)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			// ȭ��ǥ�� �Է��� �νĽ��Ѿ� ��

			if (GetAsyncKeyState(VK_UP) & 0x8000) // ��
			{
				playerY -= 2;
				if (playerY <= 3) {
					playerY = 3;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // �Ʒ�
			{
				playerY += 2;
				if (playerY >= 9) {
					playerY = 9;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // ����
			{

				if (playerX <= 19) {
					playerX = 20;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // ������
			{
				if (playerX >= 21) {
					playerX = 20;
				}
			}

		}
		if (playerY == 3 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			stage1();
		}
		if (playerY == 5 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			stage2();
		}
		if (playerY == 7 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			stage3();
		}
	}
}
