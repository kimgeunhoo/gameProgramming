#include "stage.h"
#include "borderMenu.h"
#include "coordinate.h"
#include "GameOver.h"

bool GameVal = -1;

#define WIDTH 42  // �� ���� ũ��
#define HEIGHT 20 // �� ���� ũ��

int stageMap[48][23] =//[����][����] [cy][cx] 
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
	return stageMap[y][x] == 1;  // ���̸� 1 ��ȯ
}

void movePlayer(int* x, int* y, int dx, int dy) {
	int prevX = *x, prevY = *y;  // ���� ��ġ ����

	*x += dx;
	*y += dy;

	if (isWall(*x, *y)) {  // ���̸� ���� ��ġ�� �ǵ���
		*x = prevX;
		*y = prevY;
	}
}

// �� ��� �Լ�
void printStage() {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			switch (stageMap[i][j]) {
			case 1: printf("��"); break; // ��
			case 2: printf("��"); break; // �÷��̾� ���� ��ġ
			case 3: printf("��"); break; // ��ǥ
			case 4: printf("��"); break; // ��ֹ�
			case 5: printf("��"); break; // ��
			case 6: printf("��"); break; // ����
			default: printf(" "); break; // �� ����
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
	
	
	// UI �ؽ�Ʈ
	setCursorPos(playerX, playerY);
	printf("��");
	
	while (true)
	{
		

		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			printf("  ");
			// ȭ��ǥ�� �Է��� �νĽ��Ѿ� ��

			if (GetAsyncKeyState(VK_UP) & 0x8000) // ��
			{
				playerY -= 1;
				if (playerY <= 0) {
					playerY = 1;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // �Ʒ�
			{
				playerY += 1;
				if (playerY >= 22) {
					playerY = 21;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // ����
			{
				playerX -= 2;
				if (playerX <= 0) {
					playerX = 2;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // ������
			{
				playerX += 2;
				if (playerX >= 78) {
					playerX = 76;
				}
			}
	
			else
			{
				// �� �ڸ� �״��
			}
		

		}
		setCursorPos(playerX, playerY);
		printf("��");
		Sleep(50);


		// GameOver �Լ�
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
