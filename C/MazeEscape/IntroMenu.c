#include "IntroMenu.h"

void IntroMenu()
{
	while (true)
	{
		// UI 텍스트
		printf("1_ 게임 시작\n");
		printf("2_ 게임 종료\n");

		// 로직
		// 입력으로 실행하는 방식 
		// 변수에 갑을 비교해서 실행
		int inputNumber = -1;		 // 입력받을 변수 이름
		scanf_s("%d", &inputNumber); // 입력받는 상수 <stdio.h> 필요
		while (getchar() != '\n'); // 입력 버퍼를 비우기 위한 코드

		// 비교 연산자 '==' - 조건문을 함께 사용
		if (inputNumber == 1)
		{
			// 업그레이드 비용 지불
			// 게임 시작
			GameLoop();
		}
		else if (inputNumber == 2)
		{
			// 게임 종료
			printf("게임을 종료합니다\n");
			break;
		}
		else
		{
			// 잘못된 값 입력

		}


	}

}