#include "Upgrade.h"


int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;

int baseAP = 10;
int currentAP = 0;

/*
	업그레이드 시스템을 만든다
	무기의 레벨과 레벨에 따른 공격력을 증가시킨다
	레벨과 공격력 정보가 저장되어야 한다. 
	레벨, 공격력 정보는 전역 변수로 선언, (C++에선 다른 방식, C언어 다른 방식도 존재)
	전역변수로 설정했다면 위험성이 있다.
*/

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int highCost = 500;

	while (true)
	{
		printf("업그레이드 메뉴\n");
		printf("1_강화한다. \n");
		printf("2_고급 제련\n");
		printf("3_강화를 취소한다. \n");
		int inputnumber = 0;
		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			// 돈이 충분한지?
			if (UseMoney(normalCost))
			{
				WeaponUpgrade();
			}
			
		}
		else if (inputnumber == 2)
		{
			// 돈이 충분한가?
			if (UseMoney(highCost))
			{
				AdvancedWeaponUpgrade();
			}		
		}
		else if (inputnumber == 3)
		{
			printf("강화를 취소 \n");
			break;
		}
		else
		{
			printf("잘못된 입력값 \n");
		}

	}
}

void WeaponUpgrade()
{
	
	int weight = 5;

	normalLV = normalLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;
	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
}

void AdvancedWeaponUpgrade() 
{
	printf("고급 제련소 이용");
	int weight = 50;
	srand(time(NULL));
	int num = rand() % 100;
	printf("강화를 진행하겠습니까?(Y/N) 강화 성공 확률 : 90%\n");
	char check = ' ';
	scanf_s("%c", &check, 1);
	while (getchar() != '\n'); // 문자열 설명 후 해당 내용 재설명

	if (check == 'Y') {
		// 강화를 진행한다.
		printf("강화를 진행합니다.\n");
		printf("다이스값 = %d\n", num);
		if (num % 100 >= 10) {
			printf("강화에 성공하였습니다.\n");

			advancedLV = advancedLV + 1;
			currentAP = currentAP + baseAP + weight * weaponLV;

			weaponLV = normalLV + advancedLV;

			printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
		}
		else {
			printf("강화에 실패하였습니다. 등급이 유지됩니다.\n");
			printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
		}
	}
	else if (check == 'N') {
		// 강화를 그만둔다.
		printf("강화를 그만둡니다..\n");
	}
}
