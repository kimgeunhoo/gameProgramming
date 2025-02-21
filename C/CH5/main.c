/*
	�ۼ��� : 2025-02-21
	�ۼ��� : ���ȣ
	���� : ���ڸ� ǥ���ϴ� ���, �������� Ÿ�� ��ȯ
*/

/*
	����, �Ǽ�								
	������ ǥ���ϴ� ��� - ��ȣ��Ʈ MSB - 5 - 2�� ���� - unsigned
	�Ǽ��� ǥ���ϴ� ��� - MSB/����/���� - 10 = (0.1)
*/

/*
	���� ���������� ����ؾ� �Ѵ�.
	int char short long
	float, double ��

	�̸� Ÿ���� ����� �� ����
	- ���ϰ� ����ϱ� ���ؼ�

	int : ���� + 4bytes : 
	������ ��Ʈ�� 0,1 �����ϰ� ������ ��Ʈ ��ȣ ���� ��Ʈ�� ������ 8����

*/

/*
	���ڸ� �����ߴ�. ��Ʈ���� �����ߴ�. 00000000 
	charactor ���� �ؼ� -> 'a'
	���� ���� �ؼ� -> 97

	������ �� �ܾ� ���� - 
	97 a, 98 b, 99 c ....
	ASCII ( American Standard Code for Information Insitute )
*/

/*
	������ ������ 4����Ʈ �̸��� 'num' ������ �ϼ���. ���� 10 �ʱ�ȭ�ϼ���
	int num;
	num = 10; 
	num(int)	10 ����
*/

/*
	literal ���
	��ǻ�� ���忡�� ���� ���������� ���� ����ϴ� Ÿ�� ��ȯ
	10 <- int��
	11.5 <- double��

	��� - 10
	int num;
	num = 40;
	num = 10;
	10 = 30;


	symbolic ��� - �̸��� ���� �� �� �� �ִ�.

	int PI = 3.14
*/

/*
	����ȯ
	�ڵ� - ������ ��ȯ
	���� - ����� ��ȯ

	����� ��ȯ�ϴ� ���
	float fnum10 = 0.1f;
	int temp = (int)fnum10;
*/
#include <stdio.h>

int main()
{
	int num1 = 10;
	char num2 = 1;
	short num3 = 5;
	printf("���� �������� ũ�� ��\n");
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(num1));
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(num2));
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(num3));

	float fnum1 = 0.1f;
	double fnum2 = 0.1;

	printf("�Ǽ� �������� ũ�� ��\n");
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(fnum1));
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(fnum2));

	printf("���ڸ� ����Ѵ�.\n");

	char c1 = 'Z'; // c1 ���� char // 'Z' 90
	printf("���� : %c\n", c1);	// 0000 0000
	printf("���� : %d\n", c1);	// 

	// 128 ���� a~z, A~Z
	wchar_t charNum = L'��';

	printf("�����ڵ� �� : %d \n", charNum);

	printf("�ɺ��� ��� ����\n");

	const double PI = 3.14;

	printf("�� ��� : %.4lf\n", PI);

	// ���� ���̸� ���ϴ� ����
	// ���� ���� = PI * ������ * ������;
	// PI �������� ���� ��� �� 3.14�� ����
	// �ٸ� ����� ���� ���� PI ������ ���� ���ϵ��� �ۼ� 

	printf("���� 1\n");
	const double PI1 = 3.14;
	double radius = 3;
	printf("���� ����: %.2lf\n", (PI1 * radius * radius));

	// �÷��̾� ���
	// ü��, ���ݷ�
	// ��� (ü�� <= 0) -> ��Ȱ ��ư -> ���� ü�� ��Ȱ
	// �⺻ ü������ ��Ȱ�޴�.
	// hp = 5;, 5�� ��Ȱ�ϴ� ���� �߻�

	printf("���� 2\n");

	const int maxHp = 5;
	int nowHp = 10;
	nowHp -= 10;

	// printf("%s\n", (hp <= 0) ? "���" : "����");
	if (nowHp <= 0) {
		printf("����Ͽ����ϴ�. �ٽ� ��Ȱ�մϴ�.\n");
	}
	nowHp = maxHp;
	printf("��Ȱ Hp : %d\n", nowHp);
	

	// ����� Ǯ��
	//double radius = 5;
	printf("����� Ǯ��\n");
	double extent = radius * radius * PI;
	printf("���� ���� : %.2lf\n", extent); 
	printf("ȣ�� ���� : %.2lf\n", radius * PI * 2);

	const int REVIVEHP = 10;
	int currentHp = REVIVEHP;

	currentHp <= 0;

	printf("����Ͽ����ϴ�.\n �ٽ� ��Ȱ�մϱ�? (Y/N)\n");
	currentHp = REVIVEHP;
	printf("�÷��̾ ��Ȱ�Ͽ����ϴ�.\n");

	// �� ��ȯ ���
	printf("�� ��ȯ\n");
	float fnum10 = 0.1f;
	int tempInt = (int)fnum10;   // 0000 0000

	printf("��: %d\n", tempInt); // int ��ȯ�Ǹ� �Ҽ������� �����ȴ�.
	printf("��: %f\n", (float)tempInt);

	// ������ ��ȯ
	// case 1. ���� �����ڸ� ����� �� �� ������ Ÿ���� �ٸ��� �߻�.

	float fnum11 = 0.1f;
	int tempInt2 = fnum10; // ������ ���� �� �ʱ�ȭ
	printf("��: %d\n", tempInt2); 
	printf("��: %f\n", (float)tempInt2);

	// case 2. ������ �°ݿ� ���� �ڵ� ����ȯ
	// char, short -> int ��ȯ
	
	short ex1 = 15; // 15 -> int
	short ex2 = 25; // 25 -> int
	short ex3 = ex1 + ex2; // 15 + 25 int -> short

	// case 3. �������� �ڷ� ����ġ

	// ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ

	int baseAttack = 10;
	int level = 1;
	double weight = 0.5;
	double AP = baseAttack + level * weight; // 10 + (1 * 0.5)
	// (double)1 * 0.5 �ڷ��� ��ġ X
	// 0.5
	// ���� * �Ǽ� - �Ǽ�
	// 10 + 0.5
	// 10.5
	// (int)AP = (double) 10.5;


	// case 3-2 �ڷ��� ����ġ (����, �Ǽ�) (����, ����)
	int abc = 129;		// 10000000		//		01111111 += 00000000 = 000
	char ccc = abc; // -127

	// [] x4 <- []x1 : [] [] [] [] x1
	// [] x4 <- []x1 : [1010] [010101] [101010] // []

	// �ڷ����� ��ȯ�� �� �������� �ս��� ���� ���� �������� ��ȯ�� �ȴ�.

	// [char -> short ->] int -> long -> float -> double
	//   case 2�� ����			case 3���� ���� 

	return 0;
}
