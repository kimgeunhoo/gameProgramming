/*
	�ۼ��� : 2025-02-27
	�ۼ��� : ���ȣ
	���� : ���� ����, ���� ����
*/

/*
	���׷��̵� �ý���
	- menu // 1�� , 2��, ��ȭ ����
*/

#include "lecture.h"
#include "Upgrade.h"
#include "main.h"
#include "Currency.h"

int number = 1; // ���� ����

int CurrentMoney = 1000;

// ���� ���� ���� ������ ������

void ShowInfo() 
{
	printf("ĳ������ Ŭ���� : %s\n", "���");
	printf("���� ���� �� : %d\n", CurrentMoney);

	WaitInputAnyKey();
}

int main() 
{
	ShowInfo();
	system("cls");

	//ShowExample();
	ShowUpgradeMenu();
}