#define _CRT_SECURE_NO_WARNINGS
/*
	�ۼ��� : 2025-02-24
	�ۼ��� : ���ȣ
	���� : �ڵ��� �帧 (����, �ݺ�, ����)
*/

/*
	main �Լ��� ���α׷��� ������
	���������� �ڵ� ����(�� -> �Ʒ���)
	main �Լ��� ������ �߰�ȣ�� ������ ���α׷� ����
*/

/*
	����� : ���α׷��� �ߴܽ��Ѽ� �ڵ带 Ȯ���ϴ� ���
	f9 ������ �ߴ����� ���� �Ǵ� ���� ����
*/

/*
	���ǹ�, �б�, branch

	if ����
	if(){}	// ���ǹ�
	() : ����
	{} : ��ü, body

	������
	if(); {}
	- ���ǹ� ������� �ڵ尡 ����ȴ�. (������ �ڵ�� ����)
*/

/*
	if(���� 1)
	  ¦�� : n % 2 == 0
	  Ȧ�� : n % 2 == 1
	else // if ���ǹ��� ���յ��� �ʴ� ������ ����
	  
*/

/*
	������ �������� ��� å�� "N" ���
	���� >= 100 : S
	���� >= 90 : A
	���� < 90 : F
*/

/*
	����
	�ڵ��� �帧 ���� -> ���ǿ� ���� Ư�� �κи� �����ϴ� ���
	if(true) {} ���� fasle �������� �ʴ´�.

	(false && true)		(true || false) // �÷��̾� ���� ����
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	printf("���ǹ� ���� 1\n");

	// int : ������ �����ϰ� �ʹ� + 4����Ʈ ũ��

	int count = 15;

	// ���� ������, �� ������
	// 5 10
	// if ~ else ��
	if (count < 10) { // true, false
		printf("count���� 10���� �۴�.\n");
	} else {
		printf("count���� 10���� ũ��.\n");
	}

	// if(count < 10); => if(count < 10){} ������ �ڵ�� �����ϰ� �ȴ�.

	printf("���� ����1\n");

	int score = 66;

	// if ~ else if ~ else ��
	if (score >= 100) {
		printf("S! ���� ���� : %d\n", score);
	}
	else if (score >= 90) {
		printf("A! ���� ���� : %d\n", score);
	}
	else {
		printf("F... ���� ���� : %d\n", score);
	}

	// ���� ����
	// ������ ����  56
	// C ���� �Լ� Random

	printf("���� �Լ� ����\n");
	srand(time(NULL));
	int num = rand()%100;
	int ans = 0;
	printf("��� �� : %d\n", num);
	while (ans != num) {
		printf("���ڸ� �Է��غ�����: ");
		scanf("%d", &ans);
		if (ans > num) {
			printf("%d ���� �۽��ϴ�. \n", ans);
		} else if (ans < num) {
			printf("%d ���� Ů�ϴ�. \n", ans);
		}
		else {
			printf("%d�� �����Դϴ�. \n", ans);
		}
	}
	
	// seed ��	
	// ���� �� 19243433432585239 % 99 : 0 ~ 98

	// ����� Ǯ��
	printf("���� ���� ���߱� ����\n");
	printf("���� ���� 1~100\n");
	srand(time(NULL));
	int randomNumber = rand()%101;

	printf("��� �� : %d\n", randomNumber);
	int userValue = 0;
	printf("�Է°� : ");
	scanf("%d", &userValue);

	// printf("������: %d\n", userValue);
	if (userValue > randomNumber) {
		printf("��ǥ ������ Ů�ϴ�.");
	} else if (userValue < randomNumber) {
		printf("��ǥ ������ �۽��ϴ�.");
	}
	else {
		printf("�����Դϴ�.\n");
	}
	// ������ while�� ���� ����


	// ���� ����2
	// ���� ���߱� ���ӿ��� ������ ���� Ƚ���� ���� ��ŷ�� �ο��Ѵ�.

	// if ~ else if ~ else if ~ else if

	int countNumber = 1; // �Է� ���� ���� �� ���� 1�� �����մϴ�.

	if (countNumber == 1) {
		printf("S��ũ �Դϴ�. \n");
	}
	else if (countNumber == 2) {
		printf("A��ũ �Դϴ�. \n");
	}
	else if (countNumber == 3) {
		printf("B��ũ �Դϴ�. \n");
	}
	else if (countNumber == 4) {
		printf("C��ũ �Դϴ�. \n");
	}
	// �ſ� ���� ������, ����ȭ

	// switch��

	switch (countNumber) {
	case 1:
		printf("S��ũ �Դϴ�. \n");
		break;
	case 2:
		printf("A��ũ �Դϴ�. \n");
		break;
	case 3:
		printf("B��ũ �Դϴ�. \n");
		break;
	case 4:
		printf("C��ũ �Դϴ�. \n");
		break;
	}

	// ���丮 �ۼ�
	// ���� ���Ͽ� ��ŷ �ۼ�
	// Ƚ�� ���Ͽ� ��ŷ �ۼ�
	// ��ŷ�� �ο��Ҽ� �ִ� ���丮�� �ۼ��غ���

	// Ÿ�� ���� ����� ����ϱ�
	// ���� �ű���̸� �ű�� �޼�!�� ���

	srand(time(NULL));
	int timeRecordMinute = 40;
	int timeRecordSecond = 10;
	int NewRecordMinute = rand() % 61;
	int NewRecordSecond = rand() % 61;
	printf("���� ���: %d : %d\n", timeRecordMinute, timeRecordSecond);
	printf("�޼� ���: %d : %d\n", NewRecordMinute, NewRecordSecond);
	if (timeRecordMinute > NewRecordMinute) {
		printf("�ű�� �޼�!\n");
	} else if (timeRecordMinute == NewRecordMinute && timeRecordSecond > NewRecordSecond) {
		printf("�ű�� �޼�!\n");	
	} else {
		printf("�ű�� �޼��� �����Ͽ����ϴ�.\n");
	}

}
