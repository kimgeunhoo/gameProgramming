#define _CRT_SECURE_NO_WARNINGS
/*
	�ۼ��� : 2025-02-19
	�ۼ��� : ���ȣ
	���� : �������� �ǽ�
*/

/*
	��Ģ ���� : +, -, *, /, %

	���� ������
	 ��ȣ : +, -	���� ���	-10, +10

	 10 + (-8)

	���� ������
	num1 + num2
	a + b 

	���� ������
	? 1�� = 2�� : 3��
*/

/*
	�������� ���ӻ�
	> , <, == ��
	��� ������ +, -, *, /
	�� ������ >, <, ==
	��Ʈ ������ ( data type )
	���� ������ ( or, and ||, &&)

*/

/*
	�� ������ ��� : ��(true) 1. ����(false) 0
	1, 0 : 1 + 0 == 1;
*/

/*
	"" Ŀ���� ���� ����
	<> �ý��� ����(�⺻ ���� ǥ�� ���̺귯��)
	#include <>
	#include ""
*/

#include <stdio.h>
#include <stdbool.h>
#include "Test.h"

int main() 
{
	// ��Ģ ���� + ������

	printf("������ �ǽ� 1\n");

	int num1 = 10;
	int num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);

	printf("������ �ǽ� 2\n");

	printf("�� ��� %d > %d = %d\n", num1, num2, num1 > num2); // �� 1
	printf("�� ��� %d < %d = %d\n", num1, num2, num1 < num2); // ���� 0
	printf("�� ��� %d == %d = %d\n\n", num1, num2, num1 == num2); // ���� 0

	
	printf("������ �ǽ� 3\n");

	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;
	printf("���� ������ %d > %d ��� ��� : %s\n", num1, num2, result1 ? "true" : "false");
	printf("���� ������ %d > %d ��� ��� : %d\n", num1, num2, result1 ? 1 : 0);

	printf("���� ������ %d > %d ��� ��� : %s\n", num1, num2, (num1 > num2) ? "true" : "false");
	printf("���� ������ %d < %d ��� ��� : %s\n", num1, num2, (num1 < num2) ? "true" : "false");
	printf("���� ������ %d == %d ��� ��� : %s\n\n", num1, num2, (num1 == num2) ? "true" : "false");

	printf("������ �ǽ� 4\n");

	//!num2 : num2�� �ƴ� fasle -> true // true -> false  
	//							 0 -> 1 // 1 -> 0

	printf("���� ������ : %d\n", (num1 != num2) || (num1 <  num2)); // != �� ���� �ٸ� ��
	printf("���� ������ : %d\n\n", (num1 != num2) && (num1 < num2)); // != �� ���� �ٸ� ��

	printf("������ �ǽ� 5 : ���� ������\n");

	int num3 = 2;
	int num4 = 5;
	num3 = num3 + num4;
	printf("%d + %d�� ��: %d\n", 2, num4, num3);

	// ���� ������ : ������ ���� ó���� �Ŀ� ������ �Ѵ�.
	// num3�� �� : 2 ��� -> num3++ : num3 += 1;
	// ���� ������ : ����� ����� ���忡 �����Ѵ�.
	// num4 += 1; -> printf ������ ó���Ѵ�.

	printf("�ǽ� 6: ���� ������, ���� ������\n");
	printf("num3�� �� : %d\n", num3++);
	printf("num3�� �� : %d\n", num3);
	printf("num4�� �� : %d\n", ++num4);
	printf("num4�� �� : %d\n", num4);

	// |, &, <<, >> ��Ʈ ������

	// ���� ���丮
	// n���� ���� ����, n+1 ������ ������ ȭ�鿡 ����ϴ� ���丮

	char sword[20] = "�ռҵ�";
	int basicPower = 10;
	int weaponLevel;
	int growthPower = 3;

	printf("���� �̸�: %s, ���� ��ȭ ���� Ȯ��: %.1f\n", sword, 100.0);
	printf("���� ������ �󸶳� �ø��� �Է��ϼ��� :");
	scanf("%d", &weaponLevel);

	int valPower = basicPower + weaponLevel * growthPower;

	printf("������ ������: %d\n\n", valPower);

	// ���丮2
	// ������ �κ��丮, Slot ��Ÿ ������ ����, Stack x ����,
	
	// Slot �ִ� ���� : ����
	// Stack �ִ� ���� : ����
	int itemSlot = 10;
	int itemStack = 5;

	// A �������� N�� ȹ��
	itemStack = itemStack + 1;
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����
	printf("������ �κ��丮�� �뷮 : %d\n", itemSlot);
	printf("������ A�� ���� : %d\n", itemStack);
	printf("������ �κ��丮 ���� : %s\n", (itemSlot <= itemStack) ? "�뷮�� �� á���ϴ�" : "�뷮�� �����ӽ��ϴ�.");

	itemStack = itemStack + 2;
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����

	// 3�� �����ڷ�

	// ���� ���丮3 �ۼ�


}