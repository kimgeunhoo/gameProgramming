#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	// 0 ~ 40

	// ������ + ¦���� ��ȯ�ؾ� �Ѵ�
	// ������ ���ڸ� �̴´� - rand() A���� B����
	// X��ǥ�� Y��ǥ�� �ι� �̴� 20 * 2�� �ص� �ȴ�
	// �� ��� �� ���� ȿ������ �ڵ带 ����Ѵ�. ( ���⿡ ���ų�, �޸𸮸� ���� �Դ� ��[����ȭ] )
	int randValue = rand() % 35 + 1; // 1 ~ 40

	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	int randValue = rand() % 17 + 1;
	return randValue;
}
