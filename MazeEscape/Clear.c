#include "Clear.h"
#include "coordinate.h"
#include "GameOver.h"


void Clear() {
	system("cls");
	setCursorVisible(true);
	ClearBorder();
	setCursorPos(32, 18);
	printf("1_ 다음 스테이지\n");
	setCursorPos(32, 19);
	printf("2_ 메인 화면\n");
	setCursorPos(32, 20);
	printf("3_ 게임 종료");
	int playerX = 48;
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
				if (playerY >= 21) {
					playerY = 20;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
			{

				if (playerX <= 42) {
					playerX = 48;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
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

void FileSave(const char* fileName, CLEAR clear[],int count)
{
	FILE* fptr = fopen(fileName, "w");

	for (int i = 0; i < count; i++)
	{
		fprintf(fptr, "%d %d\n", clear[i].stageNum, clear[i].clearNum);
	}

	fclose(fptr);
}

int LoadFile(const char* fileName, CLEAR clear[])
{
	int count = 0;

	FILE* fptr = fopen(fileName, "r");

	while (1) // 파일이 끝날 때 까지 읽어오기
	{
		if (fscanf(fptr, "%d %d\n", &clear[count].stageNum, &clear[count].stageNum) == EOF)
		{
			break;
		}
		count++;
	}

	fclose(fptr);

	return count;
}

void PrintClearValue(CLEAR clear[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d %d\n", clear[count].stageNum, clear[count].stageNum);
	}
}




