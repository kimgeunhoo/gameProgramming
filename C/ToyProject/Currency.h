#pragma once

#include <stdio.h>
#include <stdbool.h>

extern int CurrentMoney;
extern int Upgradecost;
extern bool isFail;			// Play.c ���� ������ �����ϰڴ�.

bool CanUpgrade(int cost);	// cost CurrentMoney
