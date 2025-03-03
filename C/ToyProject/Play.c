#include "Play.h"

// 강화 게임에 필요한 전역 변수들
// 게임 목표

int CurrentLevel = 8;
int TargetLevel = 10;

bool isClear = false;
bool isFail = false;

void ShowTitle()
{
	printf("게임이 실행중입니다...\n");
	printf("======================================================\n");
	printf("======================================================\n");
	printf("======================================================\n");

	printf("                   무기 강화하기                      \n");
}

void ShowManual()
{
	// 1. 조작 방법
	printf("조작 방법\n");
	printf("키보드 입력 및 엔터키를 눌러서 선택한다.\n");
	printf("입력 조건 외의 키를 입력 시 재선택을 해야한다.\n\n");
	// 2. 게임 목표
	printf("게임 목표\n");
	printf("무기 10강 만들기\n\n");
	// 3. 방해 요소
	printf("게임 플레이 요소\n");
	printf("1. 제한된 소지금으로 목표 달성\n");						// 임의의 요소
	printf("2. 특정 무기레벨에서 강화 하강, 파괴가 존재한다.\n\n");   // 임의의 요소
}

void GameLogic() // EnforceWeapon.h
{	
	while (true) 
	{
		// 메뉴 선택 화면
		ShowMenu(); // EnforceWeapon.h

		// 게임 클리어 했거나 게임오버가 되었을 때
		if (isClear) 
		{
			printf("Game Clear!\n");
			break;
		}
		else if (isFail) {
			printf("Game Over!\n");
			break;
		}
	}
}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}
