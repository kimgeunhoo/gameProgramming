#include "IntroMenu.h"

void IntroMenu()
{
	while (true)
	{
		// UI �ؽ�Ʈ
		printf("1_ ���� ����\n");
		printf("2_ ���� ����\n");

		// ����
		// �Է����� �����ϴ� ��� 
		// ������ ���� ���ؼ� ����
		int inputNumber = -1;		 // �Է¹��� ���� �̸�
		scanf_s("%d", &inputNumber); // �Է¹޴� ��� <stdio.h> �ʿ�
		while (getchar() != '\n'); // �Է� ���۸� ���� ���� �ڵ�

		// �� ������ '==' - ���ǹ��� �Բ� ���
		if (inputNumber == 1)
		{
			// ���׷��̵� ��� ����
			// ���� ����
			GameLoop();
		}
		else if (inputNumber == 2)
		{
			// ���� ����
			printf("������ �����մϴ�\n");
			break;
		}
		else
		{
			// �߸��� �� �Է�

		}


	}

}