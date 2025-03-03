/*
	작성일 : 2025-02-27
	작성자 : 김근호
	주제 : 지역 변수, 전역 변수
*/

/*
	업그레이드 시스템
	- menu // 1번 , 2번, 강화 종료
*/

#include "lecture.h"
#include "Upgrade.h"
#include "main.h"
#include "Currency.h"

int number = 1; // 전역 변수

int CurrentMoney = 1000;

// 내가 가진 돈의 정보를 보여줘

void ShowInfo() 
{
	printf("캐릭터의 클래스 : %s\n", "기사");
	printf("현재 가진 돈 : %d\n", CurrentMoney);

	WaitInputAnyKey();
}

int main() 
{
	ShowInfo();
	system("cls");

	//ShowExample();
	ShowUpgradeMenu();
}