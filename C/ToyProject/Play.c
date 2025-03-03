#include "Play.h"

// ��ȭ ���ӿ� �ʿ��� ���� ������
// ���� ��ǥ

int CurrentLevel = 8;
int TargetLevel = 10;

bool isClear = false;
bool isFail = false;

void ShowTitle()
{
	printf("������ �������Դϴ�...\n");
	printf("======================================================\n");
	printf("======================================================\n");
	printf("======================================================\n");

	printf("                   ���� ��ȭ�ϱ�                      \n");
}

void ShowManual()
{
	// 1. ���� ���
	printf("���� ���\n");
	printf("Ű���� �Է� �� ����Ű�� ������ �����Ѵ�.\n");
	printf("�Է� ���� ���� Ű�� �Է� �� �缱���� �ؾ��Ѵ�.\n\n");
	// 2. ���� ��ǥ
	printf("���� ��ǥ\n");
	printf("���� 10�� �����\n\n");
	// 3. ���� ���
	printf("���� �÷��� ���\n");
	printf("1. ���ѵ� ���������� ��ǥ �޼�\n");						// ������ ���
	printf("2. Ư�� ���ⷹ������ ��ȭ �ϰ�, �ı��� �����Ѵ�.\n\n");   // ������ ���
}

void GameLogic() // EnforceWeapon.h
{	
	while (true) 
	{
		// �޴� ���� ȭ��
		ShowMenu(); // EnforceWeapon.h

		// ���� Ŭ���� �߰ų� ���ӿ����� �Ǿ��� ��
		if (isClear) 
		{
			printf("Game Clear!\n");
			break;
		}
		else if (isFail) {
			printf("Game Over!\n");
			break;
		}
	}
}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}
