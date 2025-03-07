#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	// 0 ~ 40

	// 랜덤값 + 짝수를 반환해야 한다
	// 랜덤한 숫자를 뽑는다 - rand() A범위 B범위
	// X좌표는 Y좌표의 두배 이니 20 * 2를 해도 된다
	// 두 경우 중 가장 효율적인 코드를 사용한다. ( 보기에 좋거나, 메모리를 적게 먹는 것[최적화] )
	int randValue = rand() % 35 + 1; // 1 ~ 40

	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	int randValue = rand() % 17 + 1;
	return randValue;
}
