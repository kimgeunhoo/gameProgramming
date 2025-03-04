#include "Random.h"

// 1~100 정수 추출
int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());


	return (rand() % 100) + 1;

}

bool CheckRandomFunc(int percent)
{
	int randValue = ReturnRandomValue();	// 1~100 랜덤 반환	70

	if (randValue <= percent) {
		printf("성공하였습니다. : %d\n", randValue);
		return true;
	}
	else {
		printf("실패하였습니다. : %d\n", randValue);
		return false;
	}

	
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + clock());


	return (rand() % (max - min + 1) ) + min; //	min	// max
}
