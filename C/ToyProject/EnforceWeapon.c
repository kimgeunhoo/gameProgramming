#include "EnforceWeapon.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;

int baseAP = 10;
int currentAP = 0;

void ShowMenu() {
	printf("1_ ��ȭ�Ѵ�\n");
	printf("2_ ���� ���¸� Ȯ���Ѵ�\n");
	
	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	while (getchar() != '\n');

	if (inputNumber == 1) 
	{
		// ��ȭ�Ѵ�.
		// printf("��ȭ�Ѵ�\n");
		Upgrade();
	}
	else if (inputNumber == 2) 
	{
		// ���¸� Ȯ���Ѵ�.
		printf("���� ���¸� Ȯ���Ѵ�\n");
	}
	else 
	{
		// �߸��� ��
		printf("�ش簪�� �Ҵ���� �ʾѽ��ϴ�.\n");		
	}
	if (IsGameClear()) {
		printf("������ Ŭ�����޽��ϴ�.\n");
		isClear = true;
	}
	else {
		printf("��ǥ ������ �������� �ʾҽ��ϴ�.\n");
		isFail = true;
	}
	

	printf("��� �����Ϸ��� �ƹ� ��ư�� �Է����ּ���.\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	// CurrentLevel = CurrentLevel + 1;
	// CurrentLevel += 1;
	int weight = 5;

	normalLV = normalLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;
	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);

	CurrentLevel++;

}

void ShowStatus()
{
	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}

// ���� ���� ���� == �ִ� ����
bool IsGameClear()
{
	// ���� ������
	// A ? B : C;
	// A ���ǽ��� True�̸� B�� ��ȯ False �� C ��ȯ
	return CurrentLevel == TargetLevel ? true : false;
}
