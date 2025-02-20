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
	int itemAStack = 1;
	int itemBStack = 10;

	// A �������� N�� ȹ��, B ������ m�� ȹ��
	itemAStack = itemAStack + 6;
	itemBStack = itemBStack + 6;
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����
	printf("������ �κ��丮�� �뷮 : %d\n", itemSlot);
	printf("������ A�� ���� : %d\n", itemAStack);
	printf("������ B�� ���� : %d\n", itemBStack);
	printf("������ �κ��丮 ���� : %s\n", (itemSlot <= itemAStack) ? "�뷮�� �� á���ϴ�" : "�뷮�� �����ӽ��ϴ�.");
	printf("������ �κ��丮 ���� : %s\n", (itemSlot <= itemBStack) ? "�뷮�� �� á���ϴ�" : "�뷮�� �����ӽ��ϴ�.");
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����
	
	// 3�� �����ڷ�

	// ������� ����
	int basePower = 10;
	int weaponLv = 1;
	int weight = 2;

	int attackPower = basePower + weaponLv * weight;

	printf("���� ���� : %d, ������ ���ݷ� : %d\n", ++weaponLv, attackPower);
	attackPower = basePower + weaponLv * weight;
	printf("���� ���� : %d, ������ ���ݷ� : %d\n", weaponLv++, attackPower);

	// �κ��丮 ����
	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 666;

	printf("1�ð� ���� ����� �ؼ� ������ ȹ��\n");
	printf("A : %d, B : %d ȹ��.\n",ADrop, BDrop);

	// 400, 

	int AInventoryCount = (ADrop % AStackCount == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1);
	int BInventoryCount = (BDrop % BStackCount == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1);


	printf(" A�� ���� : %d , B�� ���� : %d\n", AInventoryCount, BInventoryCount);

	printf(" %s", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "���� ��" : "�γ���");


	// ���� ���丮3 �ۼ�
	// ��� �Ĺ��� ��� ������ 10���� �Ѿ�� �� ������ ĭ�� �������� ��ϵȴ�. Array ���°� ������

	

}