#include "Currency.h"


bool CanUpgrade(int cost) 
{
	if (cost < CurrentMoney) { // ���� �ݾ��� ��뺸�� ���ٸ� ���׷��̵� ����
		CurrentMoney -= cost;
		printf("���� ������ : %d\n", CurrentMoney);
		return true;
	}
	else {
		// isFail ���������� True��
		printf("Game Over!");
		isFail = true;
	}
}