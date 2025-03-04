#include "EnforceWeapon.h"


int normalLV = 1;
int advancedLV = 0;

int currentAP = 10;


void ShowMenu() {

	printf("1_ ��ȭ�Ѵ�\n");
	printf("2_ ���� ���¸� Ȯ���Ѵ�\n");
	printf("3_ ���� ��ȭ�Ѵ�.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		if (CanUpgrade(Upgradecost)) {
			if (CheckRandomFunc(50)) // 90% ����
			{
				Upgrade();
			}
			else {
				printf("�����Ͽ����ϴ�. ��ȭ ����� �����˴ϴ�.\n");
				
			}
		}
		ShowStatus();
	}
	else if (inputNumber == 2)
	{
		// ���¸� Ȯ���Ѵ�.
		ShowStatus();
	}
	else if (inputNumber == 3)
	{
		printf("���� ��ȭ�� ��� ���� ���� �Է��� �ּ���: \n");
		int UpNumber = -1;
		scanf_s("%d", &UpNumber);

		while (getchar() != '\n');
		
		for (int i = 0; i < UpNumber; i++) {
			printf("���� ��ȭ ������....\n");
			Sleep(1000);
			if (CanUpgrade(Upgradecost)) {
				if (CheckRandomFunc(50)) // 90% ����
				{
					Upgrade();
				}
				else {
					printf("�����Ͽ����ϴ�. ��ȭ ����� �����˴ϴ�.\n");

				}
			}
			ShowStatus();
		}
	}
	else
	{
		// �߸��� ��
		printf("�ش簪�� �Ҵ���� �ʾѽ��ϴ�.\n");
	}
	if (CurrentLevel == 10) {
		if (IsGameClear()) {
			printf("������ Ŭ�����޽��ϴ�.\n");
			isClear = true;
		}
		else {
			printf("��ǥ ������ �������� �ʾҽ��ϴ�.\n");
			isFail = true;
		}
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
	int beforeCurrent = currentAP;
	CurrentLevel++;
	currentAP = currentAP + weight * CurrentLevel;

	printf("��ȭ�� �����Ͽ����ϴ�. ���� ���� : %d + %d * %d = %d\n", beforeCurrent, weight, CurrentLevel, currentAP);
}

void ShowStatus()
{
	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", CurrentLevel, currentAP);
	// ���� ������ �����ݾ�
	printf("���� ���� �ݾ� : %d\n", CurrentMoney);
}

// ���� ���� ���� == �ִ� ����
bool IsGameClear()
{
	// ���� ������
	// A ? B : C;
	// A ���ǽ��� True�̸� B�� ��ȯ False �� C ��ȯ
	return CurrentLevel == TargetLevel ? true : false;
}
