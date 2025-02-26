#include "menu.h"
#include "WeaponUpgrade.h"

int weaponLv = 1;
int baseATP = 10;
int weight = 5;
int currentAttackPower = 0;

void Updrade() {
	printf("강화를 진행합니다.\n");

	// 무기의 레벨
	char weapon[20] = "롱소드";
	// 무기의 기본 공격력
	// 가중치
	// 현재 공격력
	// 강화를 무조건 성공하는 케이스
	weaponLv = weaponLv + 1;
	// 무기의 레벨을 1 상승 시킨다.
	// 현재 공격력 = 기본 공격력 + 레벨 * 가중치
	currentAttackPower = baseATP + (weaponLv * weight);
	// printf(현재 공격력, 레벨)
	printf("현재 공격력: %d, 무기 레벨: %d\n", currentAttackPower, weaponLv);
}