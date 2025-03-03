#include "EnforceWeapon.h"


void ShowMenu() {
	printf("1_ 강화한다\n");
	printf("2_ 현재 상태를 확인한다\n");
	
	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	while (getchar() != '\n');

	if (inputNumber == 1) 
	{
		// 강화한다.
		// printf("강화한다\n");
		Upgrade();
	}
	else if (inputNumber == 2) 
	{
		// 상태를 확인한다.
		printf("현재 상태를 확인한다\n");
	}
	else 
	{
		// 잘못된 값
		printf("해당값은 할당되지 않앗습니다.\n");		
	}
	if (IsGameClear()) {
		printf("게임을 클리어햇습니다.\n");
		isClear = true;
	}
	else {
		printf("목표 레벨에 도달하지 않았습니다.\n");
		isFail = true;
	}
	

	printf("계속 진행하려면 아무 버튼을 입력해주세요.\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	// CurrentLevel = CurrentLevel + 1;
	// CurrentLevel += 1;
	CurrentLevel++;
}

void ShowStatus()
{

}

// 현재 무기 레벨 == 최대 레벨
bool IsGameClear()
{
	// 삼항 연산자
	// A ? B : C;
	// A 조건식이 True이면 B를 반환 False 면 C 반환
	return CurrentLevel == TargetLevel ? true : false;
}
