/*
	menu.h 코드를 ctrl c + v
*/

#include "menu.h"
#include "WeaponUpgrade.h"


void SelectMenu()
{
	// ctrl + k + s 코드 감싸기
	while (true)
	{
		system("cls");
		printf("1_강화한다.\n");
		printf("2_취소한다.\n");
		printf("3_종료한다.\n");

		// printf("현재 공격력: %d, 무기 레벨: %d\n", baseATP + (weaponLv * weight), weaponLv);

		int inputNumber = -1;
		scanf_s("%d", &inputNumber); // '\n'
		while (getchar() != '\n'); // charactor 입력 버퍼

		if (inputNumber == 1)
		{
			Upgrade();
		}
		else if (inputNumber == 2) {
			printf("강화를 취소합니다.\n");

		}
		else if (inputNumber == 3) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("잘못된 값을 입력하엿습니다.\n");
		}
		// Alt 키보드 화살표 위, 아래 할시 코드 자리 옮기기 가능 

		// 플레이어가 특정 키를 입력했을 때 넘어가도록 하고 싶다.

		printf("진행 시 아무 버튼이나 누르세요.\n");

		_getch();	// 입력 값을 받아오는 명령어
	}
}
