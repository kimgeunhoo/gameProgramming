#pragma once

/*
	#include <stdlib.h>
	#include <time.h>
	srand(time(NULL)		// rand seed를 지정하는 함수
	rand()
*/

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 ~ 100 랜덤하게 출력 (정수) : A
// 30% 성공 (1 ~ 100) 70 크거나 같으면 Success [ 1 ~ 100 ]

// A	이름(B)
// A :	반환값
// B :	매개변수

int ReturnRandomValue();
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max);