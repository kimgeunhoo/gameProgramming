#include "Currency.h"

bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
}

bool UseMoney(int price)
{
	// if(����)
	if (IsEnoughMoney(price)) 
	{
		CurrentMoney = CurrentMoney - price;
		ShowInfo();
		return true;
	}
	else 
	{
		printf("���� �����մϴ�.\n");
		return false;
	}
}
