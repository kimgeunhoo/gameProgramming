#include "Random.h"

// 1~100 ���� ����
int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());


	return (rand() % 100) + 1;

}

bool CheckRandomFunc(int percent)
{
	int randValue = ReturnRandomValue();	// 1~100 ���� ��ȯ	70

	if (randValue <= percent) {
		printf("�����Ͽ����ϴ�. : %d\n", randValue);
		return true;
	}
	else {
		printf("�����Ͽ����ϴ�. : %d\n", randValue);
		return false;
	}

	
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + clock());


	return (rand() % (max - min + 1) ) + min; //	min	// max
}
