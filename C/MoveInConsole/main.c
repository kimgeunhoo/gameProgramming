#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"



// Ŀ�� : output ����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ.

// (x, y)��ǥ�� Ŀ���� �ű��.
void setCursorPos(int x, int y) 
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// Ŀ�� ���� ����. true = ���̴� ����, false = �� ���̴� ����
void setCursorVisible(bool enable) 
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

/*
	���� ����
	�÷��̾��� ���� ��ġ ����
	��ǥ ���� ������
	setCoursorPos << �̿��ؼ� ���ϴ� ��ġ�� �÷��̾� ��ġ
	int posx posy << �÷��̾� ���� ��ġ
*/
		
// ���� ����
bool GameOver = false;
int CurrentScore = 0;
int randomX = 16;
int randomY = 1;
int playTime = 0;

int questItemPosX = 34;
int questItemPosY = 5;
bool isQuest = false;

int main() 
{

	// 1��° �̽� : ��� " " �� ������ ũ�Ⱑ �ٸ���. " " x2

	ShowBorder();
	CreateRandomSeed();
	setCursorPos(randomX, randomY);
	printf("��");
	setCursorPos(questItemPosX, questItemPosY);
	printf("��");

	setCursorVisible(false);

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
		//system("cls");	��簪�� ��������
		setCursorPos(playerX, playerY);
		printf("��");

		setCursorPos(60, 0);
		printf("Score: \n");
		setCursorPos(60, 1);
		printf("���� ����: %d", CurrentScore);

		// �ð� ���� �ڵ�
		playTime++;

		int hour = playTime / 360;
		int minute = playTime / 60;
		int second = playTime % 60;
		setCursorPos(60, 2);
		printf("�÷��� �ð�: %02d: %02d", minute, second);

		if (isQuest == true) {
			setCursorPos(60, 3);
			printf("����Ʈ�� Ȱ��ȭ�Ǿ����ϴ�.");
		}

		Sleep(50);

		// UI �ڵ�
		

		// 1. wait inputkey (Ư�� Ű�� ������ ��)
		// 2. playerX, playerY ���� ��ȭ��Ų��.
		// 3. �ش� ��ǥ�� Ŀ���� ��ġ�� �ٲٰ� printf

		// ĳ���Ͱ� Ư�� ��ġ�� ���ԵǸ� ���� ����

		if (playerX == randomX && playerY == randomY) {

			CurrentScore++;	// 1. ������ ������
							// 2. ��ǥ�� �ٲ۴�
			randomX = ReturnPosX();
			randomY = ReturnPosY();
			setCursorPos(randomX, randomY);
			printf("��");
			//GameOver = true;
		}

		if (playerX == questItemPosX && playerY == questItemPosY) {

			isQuest = true;
			//GameOver = true;
		}


		if (CurrentScore == 10) {
			break;
		}
	}
}