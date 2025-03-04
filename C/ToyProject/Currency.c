#include "Currency.h"


bool CanUpgrade(int cost) 
{
	if (cost < CurrentMoney) { // 현재 금액이 비용보다 많다면 업그레이드 가능
		CurrentMoney -= cost;
		printf("현재 소지금 : %d\n", CurrentMoney);
		return true;
	}
	else {
		// isFail 전역변수를 True로
		printf("Game Over!");
		isFail = true;
	}
}