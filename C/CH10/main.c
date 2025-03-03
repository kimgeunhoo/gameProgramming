/*
	�ۼ��� : 2025-02-28
	�ۼ��� : ���ȣ
	���� : �Լ��� ����
*/

/*
	�Լ� : input���� output ��ȯ(����)�Ѵ�.
			A			B\
	A ������ ��򰡿� �����Ͽ� B��� ��������� ��ȯ�Ѵ�.

	A, B ���� : �����ϱ� ���ؼ� ���� ����, ��ȯ�ϱ� ���ؼ� ����
	���	  :	�Լ��� �̸� �ۼ� 
	����	  :	ȣ��� �Լ� ��ġ

	void Upgrade(){}
	1. void			: ��ȯ ����, B ���� ����� Ÿ���� �����Ѵ�.
	2. Upgrade		: �Լ��� �̸�
	3. ()			: A���� Ÿ���� �����ϴ� ��, �ƹ��͵� ������ voidŸ���̴�.
	4. {}			: �ڵ尡 ���ǵǴ� �κ�, body
*/

/*
	void ���� ��ȯ ���¿����� ������ �ȵǴµ�, �Ű� ������ �ش��ϴ� ������ �� �� �ִ� ����?
	Upgrade(){}
*/

#include <stdio.h>
#include <stdbool.h>

/*
	��ȯ���� ���� -> ������ void, ������ int
*/

int currentMoney = 100;

// �������� ��ġ�� amount ���� �� �� �ִ��� ������
// ���ǹ����� �� �ڵ带 ����� �����Ϸ��� �Ѵ�.
// �� ������ : ���� ���� �� < �������� ��ġ - ���� ������ - false

bool IsMoneyEnough(int amount) 
{
	return currentMoney >= amount ? true : false;
	//	(1) ���� ������ A ? B : C;
	//	A ���� : �� -> B, ���� -> C
	//	return true // false;

	/*if (currentMoney >= amount) 
	{
		true;
	}
	else {
		false;
	}*/
}

void BuyItem(int price) 
{
	if (IsMoneyEnough(price))
	{
		printf("����մϴ�\n");
	}
	else
	{
		printf("�����մϴ�\n");
	}
}

void Example() 
{
	printf("���� ���\n");
}

int MultiplyNumber(int input) 
{
	int a = 10;
	return 10 * input;
}

int main() 
{
	// void ������ �Լ� Example
	Example();
	// int ��ȯ�ϴ� �Լ�
	int result = MultiplyNumber(5);
	printf("����� ���: %d\n", result);
	// true, false ��ȯ�ϴ� �Լ�

	// IsEnoughMoney�Լ��� ����ؼ� ���� ����ϸ� ����մϴ�.
	// �����ϴ�.

	// 100
	// if(���ǹ�)	(�Լ�)
	BuyItem(150);
}