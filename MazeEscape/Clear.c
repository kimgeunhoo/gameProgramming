#include "Clear.h"
#include "coordinate.h"
#include "GameOver.h"


void Clear() {
	system("cls");
	setCursorVisible(true);
	ClearBorder();
	setCursorPos(32, 18);
	printf("1_ ���� ��������\n");
	setCursorPos(32, 19);
	printf("2_ ���� ȭ��\n");
	setCursorPos(32, 20);
	printf("3_ ���� ����");
	int playerX = 48;
	int playerY = 18;
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
				if (playerY >= 21) {
					playerY = 20;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // ����
			{

				if (playerX <= 42) {
					playerX = 48;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // ������
			{
				if (playerX >= 49) {
					playerX = 48;
				}
			}
			Sleep(50);

		}
		if (playerY == 18 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			GameVal = 2;
			return;
		}
		if (playerY == 19 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			GameVal = 1;
			return;
		}
		if (playerY == 20 && GetAsyncKeyState(VK_RETURN) & 0x8000) {
			GameVal = 0;
			return;
		}

	}
}

