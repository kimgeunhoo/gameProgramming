#pragma once

#include <stdio.h>
#include <stdbool.h>

// extern : �ܺ��� CurrentMney �̸��� ���� ������ ������ �װ��� ���.
extern int CurrentMoney; 

bool IsEnoughMoney(int amount);

bool UseMoney(int price);