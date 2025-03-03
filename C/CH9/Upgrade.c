#include "Upgrade.h"


int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;

int baseAP = 10;
int currentAP = 0;

/*
	���׷��̵� �ý����� �����
	������ ������ ������ ���� ���ݷ��� ������Ų��
	������ ���ݷ� ������ ����Ǿ�� �Ѵ�. 
	����, ���ݷ� ������ ���� ������ ����, (C++���� �ٸ� ���, C��� �ٸ� ��ĵ� ����)
	���������� �����ߴٸ� ���輺�� �ִ�.
*/

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int highCost = 500;

	while (true)
	{
		printf("���׷��̵� �޴�\n");
		printf("1_��ȭ�Ѵ�. \n");
		printf("2_��� ����\n");
		printf("3_��ȭ�� ����Ѵ�. \n");
		int inputnumber = 0;
		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			// ���� �������?
			if (UseMoney(normalCost))
			{
				WeaponUpgrade();
			}
			
		}
		else if (inputnumber == 2)
		{
			// ���� ����Ѱ�?
			if (UseMoney(highCost))
			{
				AdvancedWeaponUpgrade();
			}		
		}
		else if (inputnumber == 3)
		{
			printf("��ȭ�� ��� \n");
			break;
		}
		else
		{
			printf("�߸��� �Է°� \n");
		}

	}
}

void WeaponUpgrade()
{
	
	int weight = 5;

	normalLV = normalLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;
	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}

void AdvancedWeaponUpgrade() 
{
	printf("��� ���ü� �̿�");
	int weight = 50;
	srand(time(NULL));
	int num = rand() % 100;
	printf("��ȭ�� �����ϰڽ��ϱ�?(Y/N) ��ȭ ���� Ȯ�� : 90%\n");
	char check = ' ';
	scanf_s("%c", &check, 1);
	while (getchar() != '\n'); // ���ڿ� ���� �� �ش� ���� �缳��

	if (check == 'Y') {
		// ��ȭ�� �����Ѵ�.
		printf("��ȭ�� �����մϴ�.\n");
		printf("���̽��� = %d\n", num);
		if (num % 100 >= 10) {
			printf("��ȭ�� �����Ͽ����ϴ�.\n");

			advancedLV = advancedLV + 1;
			currentAP = currentAP + baseAP + weight * weaponLV;

			weaponLV = normalLV + advancedLV;

			printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
		}
		else {
			printf("��ȭ�� �����Ͽ����ϴ�. ����� �����˴ϴ�.\n");
			printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
		}
	}
	else if (check == 'N') {
		// ��ȭ�� �׸��д�.
		printf("��ȭ�� �׸��Ӵϴ�..\n");
	}
}
