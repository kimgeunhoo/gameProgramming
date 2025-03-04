#include "EnforceWeapon.h"


int normalLV = 1;
int advancedLV = 0;

int currentAP = 10;


void ShowMenu() {

	printf("1_ 강화한다\n");
	printf("2_ 현재 상태를 확인한다\n");
	printf("3_ 연속 강화한다.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		if (CanUpgrade(Upgradecost)) {
			if (CheckRandomFunc(50)) // 90% 성공
			{
				Upgrade();
			}
			else {
				printf("실패하였습니다. 강화 등급이 유지됩니다.\n");
				
			}
		}
		ShowStatus();
	}
	else if (inputNumber == 2)
	{
		// 상태를 확인한다.
		ShowStatus();
	}
	else if (inputNumber == 3)
	{
		printf("연속 강화를 몇번 실행 할지 입력해 주세요: \n");
		int UpNumber = -1;
		scanf_s("%d", &UpNumber);

		while (getchar() != '\n');
		
		for (int i = 0; i < UpNumber; i++) {
			printf("연속 강화 진행중....\n");
			Sleep(1000);
			if (CanUpgrade(Upgradecost)) {
				if (CheckRandomFunc(50)) // 90% 성공
				{
					Upgrade();
				}
				else {
					printf("실패하였습니다. 강화 등급이 유지됩니다.\n");

				}
			}
			ShowStatus();
		}
	}
	else
	{
		// 잘못된 값
		printf("해당값은 할당되지 않앗습니다.\n");
	}
	if (CurrentLevel == 10) {
		if (IsGameClear()) {
			printf("게임을 클리어햇습니다.\n");
			isClear = true;
		}
		else {
			printf("목표 레벨에 도달하지 않았습니다.\n");
			isFail = true;
		}
	}

	printf("계속 진행하려면 아무 버튼을 입력해주세요.\n");
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

	printf("강화에 성공하엿습니다. 증가 배율 : %d + %d * %d = %d\n", beforeCurrent, weight, CurrentLevel, currentAP);
}

void ShowStatus()
{
	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", CurrentLevel, currentAP);
	// 현재 보유한 소지금액
	printf("현재 소지 금액 : %d\n", CurrentMoney);
}

// 현재 무기 레벨 == 최대 레벨
bool IsGameClear()
{
	// 삼항 연산자
	// A ? B : C;
	// A 조건식이 True이면 B를 반환 False 면 C 반환
	return CurrentLevel == TargetLevel ? true : false;
}
