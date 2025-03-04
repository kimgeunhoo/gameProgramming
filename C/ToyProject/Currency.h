#pragma once

#include <stdio.h>
#include <stdbool.h>

extern int CurrentMoney;
extern int Upgradecost;
extern bool isFail;			// Play.c 전역 변수를 참조하겠다.

bool CanUpgrade(int cost);	// cost CurrentMoney
