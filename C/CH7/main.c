/*
	작성일 : 2025-02-25
	작성자 : 김근호
	주제 : 코드의 흐름 제어 - 반복(for, while문)
*/

/*
	반복문
	-  1 + 1 + 1 + 1 + 1 => 1 * 5

	for, while

	for (int i = 0; i < 10; i+=2)
	
	// 조건에는 참(True)과 거짓(false)
	// 조건이 참일 때만 반복문 실행, 거짓일 때는 반복문을 벗어난다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	printf("반복문 예제 1\n");
	// A 아이템을 획득 - 갯수 
	int ACount = 0;
	printf("A 아이템의 수 : %d\n", ACount);

	// 아이템을 1개 획득했다.
	for (int i = 0; i < 10; i++) {
		ACount++;
	}
	printf("A 아이템의 수 : %d\n", ACount);

	while (ACount < 20) {
		ACount++;
	}

	printf("A 아이템의 수 : %d\n", ACount);

	printf("for 반복문 예제 2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++) {
		BCount = BCount + i;
	}

	printf("B 아이템의 수 : %d\n", BCount);

	printf("for 반복문 예제 3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--) {
		printf("현재 i의 값 : %d\n", reverseI);
	}

	// 게임 스토리를 입혀 표현
	
	for (;;) {
		srand(time(NULL));
		int num = rand() % 100;
		// 무기 강화 step

		// 무기의 이름
		char weapon[20] = "롱소드";
		// 무기의 레벨
		int weaponLevel = 0;
		// 기본 공격력, 레벨, 가중치
		int AtPoint = 63;
		int upgradeATP = 7;
		// 무기의 공격력 = 기본 공격력 + 레벨 * 가중치
		int weaponATP = AtPoint + weaponLevel * upgradeATP;


		// 강화를 계속 진행할 것인가? 안할 것인가?
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
				int before = weaponATP;
				weaponLevel++;
				weaponATP = AtPoint + weaponLevel * upgradeATP;
				printf("무기 이름 : %s, 무기의 레벨 : %d, 강화 전 무기 공격력 %d, 강화 후 무기 공격력 : %d .\n", weapon, weaponLevel, before, weaponATP);
			}
			else {
				printf("강화에 실패하였습니다. 등급이 유지됩니다.\n");
				int before = weaponATP;
				printf("무기 이름 : %s, 무기의 레벨 : %d, 강화 전 무기 공격력 %d, 강화 후 무기 공격력 : %d .\n", weapon, weaponLevel, before, weaponATP);
			}
		}
		else if (check == 'N') {
			// 강화를 그만둔다.
			printf("강화를 그만둡니다..\n");
			break;
		}
		else {
			printf("잘못된 입력입니다.\n");
			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n'); // 문자열 설명 후 해당 내용 재설명

			if (another == 'Y') {
			
			}
			else if(another == 'N') {

			}
			else {
				printf("프로그램이 종료되었습니다.\n");
				break;
			}
			//continue;
		}
		break;
		
		
	}
	// 반복문을 사용한다.
	// for 반복문 사용하여
	// n 번 반복하는 코드를 쉽게 표현하기 위해서
	// 몇번 반복해야 할지 잘 모르겟는 내용 존재
	// 예시) 잘못된 값을 입력했을 때 정확한 값을 요구하는 코드

	// while 반복문
	// 무한 반복문

	int xi = 0;

	while (xi < 10) // (   ) 조건식 : 조건이 true일 때 {} 실행, 조건이 false 반복문을 종료한다.
	{
		xi++; // while 탈출하기 위한 조건문

		printf("xi의 값: %d\n", xi);
	}

	// for 반복이 좋은가? while 반복문이 좋은가?

	// 몇 번 반복 할지 횟수가 정해져 있다면 for가 작성하기 더 편하다
 
	// 몇번 반복할지 애매 할때는 while 반복문이 유용하다.

	// ??? 번 반복할 코드를 작성하고 싶다.

	// 2만큼 증가하는 정수형 변수 numA
	// 이 numA가 10보다 크거나 같을 때 종료
	// numA 숫자가 10보다 커지기 위해서 몇번 반복했는지 알고 싶다.
	// 반복한 결과 정수형 CountA로 출력
	int numA = 0;
	int CountA = 0;
	printf("numA의 값을 입력해주세요(단 10보다 작아야 한다.)\n");
	scanf_s("%d", &numA);		// numA의 값이 정해진다.

	// 1 표현법
	while (true) {

		numA += 2;
		CountA++;

		if (numA > 10) {
			printf("반복한 횟수 : %d\n", CountA);
			printf("현재 값 : %d\n", numA);
			break;
		}	
	}

	while (numA <= 10) {

		numA += 2;
		CountA++;
	}

	// for 반복문 표현 <-> while 반복문 표현하기

	// 실습예제
	// 1부터 10 사이의 값을  짝수 print 출력 해보기
	// for 반복문, while 반복문

	int numberA = 0;

	while (true) {
		numberA++;
		if (numberA % 2 == 0) {
			printf("1부터 10까지의 값 : %d\n", numberA);
		}
		if (numberA == 10) {
			break;
		}
	}

	// 현재 값 : 1, 2, 3, 4....

	// Y, N  다시 입력하세요 <- Y, N 입력 될 때 까지 무한 루프

	// while 반복문을 사용해서 Y, N 입력할 때 까지 반복되는 코드 작성

	srand(time(NULL));
	int number = rand() % 100;
	for (;;) {

		// 무기 강화 step

		// 무기의 이름
		char weapon[20] = "롱소드";
		// 무기의 레벨
		int weaponLevel = 0;
		// 기본 공격력, 레벨, 가중치
		int AtPoint = 63;
		int upgradeATP = 7;
		// 무기의 공격력 = 기본 공격력 + 레벨 * 가중치
		int weaponATP = AtPoint + weaponLevel * upgradeATP;


		// 강화를 계속 진행할 것인가? 안할 것인가?
		while (true) {
			char checkpoint = ' ';
			printf("강화를 진행하겠습니까?(Y/N) 강화 성공 확률 : 90%\n");
			scanf_s("%c", &checkpoint, 1);

			if (checkpoint == 'Y') {
				// 강화를 진행한다.
				printf("강화를 진행합니다.\n");
				printf("다이스값 = %d\n", number);
				if (number % 100 >= 10) {
					printf("강화에 성공하였습니다.\n");
					int before = weaponATP;
					weaponLevel = weaponLevel + 1;
					weaponATP = AtPoint + weaponLevel * upgradeATP;
					printf("무기 이름 : %s, 무기의 레벨 : %d, 강화 전 무기 공격력 %d, 강화 후 무기 공격력 : %d .\n", weapon, weaponLevel, before, weaponATP);
					srand(time(NULL));
					int number = rand() % 100;
				}
				else {
					printf("강화에 실패하였습니다. 등급이 유지됩니다.\n");
					int before = weaponATP;
					printf("무기 이름 : %s, 무기의 레벨 : %d, 강화 전 무기 공격력 %d, 강화 후 무기 공격력 : %d .\n", weapon, weaponLevel, before, weaponATP);
					srand(time(NULL));
					int number = rand() % 100;
				}
			}
			else if (checkpoint == 'N') {
				// 강화를 그만둔다.
				printf("강화를 그만둡니다..\n");
				break;
			}
			else if (checkpoint != 'Y' && checkpoint != 'N') {
				printf("잘못된 입력입니다. 다시 입력하여 주세요.\n");
			}
		}
		break;
	}

	// scanf_s(); 사용한다면
	// while (getchar != '\n');
}