#define _CRT_SECURE_NO_WARNINGS
/*
	작성일 : 2025-02-24
	작성자 : 김근호
	주제 : 코드의 흐름 (조건, 반복, 제어)
*/

/*
	main 함수는 프로그램의 시작점
	순차적으로 코드 실행(위 -> 아래순)
	main 함수의 마지막 중괄호를 만나면 프로그램 종료
*/

/*
	디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능
	f9 눌러서 중단점을 생성 또는 삭제 가능
*/

/*
	조건문, 분기, branch

	if 문법
	if(){}	// 조건문
	() : 조건
	{} : 몸체, body

	주의점
	if(); {}
	- 조건문 상관없이 코드가 실행된다. (별개의 코드로 동작)
*/

/*
	if(조건 1)
	  짝수 : n % 2 == 0
	  홀수 : n % 2 == 1
	else // if 조건문에 부합되지 않는 나머지 조건
	  
*/

/*
	점수를 기준으로 등급 책정 "N" 등급
	점수 >= 100 : S
	점수 >= 90 : A
	점수 < 90 : F
*/

/*
	정리
	코드의 흐름 제어 -> 조건에 따라서 특정 부분만 실행하는 방법
	if(true) {} 실행 fasle 실행하지 않는다.

	(false && true)		(true || false) // 플레이어 조작 예시
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	printf("조건문 예제 1\n");

	// int : 정수를 저장하고 싶다 + 4바이트 크기

	int count = 15;

	// 관계 연산자, 비교 연산자
	// 5 10
	// if ~ else 문
	if (count < 10) { // true, false
		printf("count값이 10보다 작다.\n");
	} else {
		printf("count값이 10보다 크다.\n");
	}

	// if(count < 10); => if(count < 10){} 별개의 코드로 동작하게 된다.

	printf("예제 문제1\n");

	int score = 66;

	// if ~ else if ~ else 문
	if (score >= 100) {
		printf("S! 현재 점수 : %d\n", score);
	}
	else if (score >= 90) {
		printf("A! 현재 점수 : %d\n", score);
	}
	else {
		printf("F... 현재 점수 : %d\n", score);
	}

	// 숫자 게임
	// 랜덤한 숫자  56
	// C 랜덤 함수 Random

	printf("랜덤 함수 문제\n");
	srand(time(NULL));
	int num = rand()%100;
	int ans = 0;
	printf("결과 값 : %d\n", num);
	while (ans != num) {
		printf("숫자를 입력해보세요: ");
		scanf("%d", &ans);
		if (ans > num) {
			printf("%d 보다 작습니다. \n", ans);
		} else if (ans < num) {
			printf("%d 보다 큽니다. \n", ans);
		}
		else {
			printf("%d가 정답입니다. \n", ans);
		}
	}
	
	// seed 값	
	// 랜덤 값 19243433432585239 % 99 : 0 ~ 98

	// 강사님 풀이
	printf("랜덤 숫자 맞추기 게임\n");
	printf("숫자 범위 1~100\n");
	srand(time(NULL));
	int randomNumber = rand()%101;

	printf("결과 값 : %d\n", randomNumber);
	int userValue = 0;
	printf("입력값 : ");
	scanf("%d", &userValue);

	// printf("유저값: %d\n", userValue);
	if (userValue > randomNumber) {
		printf("목표 값보다 큽니다.");
	} else if (userValue < randomNumber) {
		printf("목표 값보다 작습니다.");
	}
	else {
		printf("정답입니다.\n");
	}
	// 오늘은 while을 쓰진 않음


	// 예제 문제2
	// 숫자 맞추기 게임에서 문제를 맞춘 횟수에 따라 랭킹을 부여한다.

	// if ~ else if ~ else if ~ else if

	int countNumber = 1; // 입력 값을 넣을 때 마다 1씩 증가합니다.

	if (countNumber == 1) {
		printf("S랭크 입니다. \n");
	}
	else if (countNumber == 2) {
		printf("A랭크 입니다. \n");
	}
	else if (countNumber == 3) {
		printf("B랭크 입니다. \n");
	}
	else if (countNumber == 4) {
		printf("C랭크 입니다. \n");
	}
	// 매우 구린 가독성, 최적화

	// switch문

	switch (countNumber) {
	case 1:
		printf("S랭크 입니다. \n");
		break;
	case 2:
		printf("A랭크 입니다. \n");
		break;
	case 3:
		printf("B랭크 입니다. \n");
		break;
	case 4:
		printf("C랭크 입니다. \n");
		break;
	}

	// 스토리 작성
	// 점수 비교하여 랭킹 작성
	// 횟수 비교하여 랭킹 작성
	// 랭킹을 부여할수 있는 스토리를 작성해보기

	// 타임 어택 기록을 출력하기
	// 만일 신기록이면 신기록 달성!을 출력

	srand(time(NULL));
	int timeRecordMinute = 40;
	int timeRecordSecond = 10;
	int NewRecordMinute = rand() % 61;
	int NewRecordSecond = rand() % 61;
	printf("기존 기록: %d : %d\n", timeRecordMinute, timeRecordSecond);
	printf("달성 기록: %d : %d\n", NewRecordMinute, NewRecordSecond);
	if (timeRecordMinute > NewRecordMinute) {
		printf("신기록 달성!\n");
	} else if (timeRecordMinute == NewRecordMinute && timeRecordSecond > NewRecordSecond) {
		printf("신기록 달성!\n");	
	} else {
		printf("신기록 달성에 실패하였습니다.\n");
	}

}
