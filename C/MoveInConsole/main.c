#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>



// Ŀ�� : output ����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ.

// (x, y)��ǥ�� Ŀ���� �ű��.
void setCursorPos(int x, int y) 
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*
	���� ����
	�÷��̾��� ���� ��ġ ����
	��ǥ ���� ������
	setCoursorPos << �̿��ؼ� ���ϴ� ��ġ�� �÷��̾� ��ġ
	int posx posy << �÷��̾� ���� ��ġ
*/
		
bool GameOver = false;

int main() 
{

	// 1��° �̽� : ��� " " �� ������ ũ�Ⱑ �ٸ���. " " x2

	ShowBorder();

	srand(time(NULL));
	
	// �÷��̾��� ���� ��ǥ �������ִ� ���� ����
	//int playerX = rand() % 16 + 2; 
	//int	playerY = rand() % 16 + 2;

	int playerX = 10; // x�� + 2
	int	playerY = 5; // y�� + 1


	setCursorPos(playerX, playerY);
	// �÷��̾ ������ �� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׷��� ��
	printf("��"); // ���� Ŀ����ġ�� "" ���ڸ� ����Ѵ�.

	// ������ ������� �ʵ��� ���� ����
	// �ݺ������� ����Ǵ� �κ�
	while (1) 
	{
		if (_kbhit()) 
		{
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
				if (playerY >= 19) {
					playerY = 18;
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
				if (playerX >= 38) {
					playerX = 36;
				}
			}
			else
			{
				// �� �ڸ� �״��
			}
			


		}
		// ��ǥ �׽�Ʈ�� 
		//printf("���� ��ǥ : (%d, %d)", playerX, playerY);

		system("cls");
		ShowBorder(); // �� �κ��� ������ �ʿ�
		setCursorPos(playerX, playerY);
		printf("��");


		Sleep(50);

		// 1. wait inputkey (Ư�� Ű�� ������ ��)

		// 2. playerX, playerY ���� ��ȭ��Ų��.

		// 3. �ش� ��ǥ�� Ŀ���� ��ġ�� �ٲٰ� printf

		// 4.
			
		// if (���� ����) 
		// break;
		//break;

		// ĳ���Ͱ� Ư�� ��ġ�� ���ԵǸ� ���� ����
		if (playerX == 36 && playerY == 18) {
			GameOver = true;
		}
		if (GameOver == true) {
			break;
		}
	}
}