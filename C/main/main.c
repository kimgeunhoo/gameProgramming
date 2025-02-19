#define _CRT_SECURE_NO_WARNINGS
/*
	작성일 : 2025-02-19
	작성자 : 김근호
	주제 : 연산자의 실습
*/

/*
	사칙 연산 : +, -, *, /, %

	단항 연산자
	 부호 : +, -	음수 양수	-10, +10

	 10 + (-8)

	이항 연산자
	num1 + num2
	a + b 

	삼항 연산자
	? 1항 = 2항 : 3항
*/

/*
	연산자의 쓰임새
	> , <, == 비교
	산술 연산자 +, -, *, /
	비교 연산자 >, <, ==
	비트 연산자 ( data type )
	관계 연산자 ( or, and ||, &&)

*/

/*
	비교 연산자 결과 : 참(true) 1. 거짓(false) 0
	1, 0 : 1 + 0 == 1;
*/

/*
	"" 커스텀 제작 파일
	<> 시스템 파일(기본 내장 표준 라이브러리)
	#include <>
	#include ""
*/

#include <stdio.h>
#include <stdbool.h>
#include "Test.h"

int main() 
{
	// 사칙 연산 + 나머지

	printf("연산자 실습 1\n");

	int num1 = 10;
	int num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);

	printf("연산자 실습 2\n");

	printf("비교 결과 %d > %d = %d\n", num1, num2, num1 > num2); // 참 1
	printf("비교 결과 %d < %d = %d\n", num1, num2, num1 < num2); // 거짓 0
	printf("비교 결과 %d == %d = %d\n\n", num1, num2, num1 == num2); // 거짓 0

	
	printf("연산자 실습 3\n");

	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;
	printf("삼항 연산자 %d > %d 결과 출력 : %s\n", num1, num2, result1 ? "true" : "false");
	printf("삼항 연산자 %d > %d 결과 출력 : %d\n", num1, num2, result1 ? 1 : 0);

	printf("삼항 연산자 %d > %d 결과 출력 : %s\n", num1, num2, (num1 > num2) ? "true" : "false");
	printf("삼항 연산자 %d < %d 결과 출력 : %s\n", num1, num2, (num1 < num2) ? "true" : "false");
	printf("삼항 연산자 %d == %d 결과 출력 : %s\n\n", num1, num2, (num1 == num2) ? "true" : "false");

	printf("연산자 실습 4\n");

	//!num2 : num2가 아님 fasle -> true // true -> false  
	//							 0 -> 1 // 1 -> 0

	printf("관계 연산자 : %d\n", (num1 != num2) || (num1 <  num2)); // != 두 수가 다를 때
	printf("관계 연산자 : %d\n\n", (num1 != num2) && (num1 < num2)); // != 두 수가 다를 때

	printf("연산자 실습 5 : 복합 연산자\n");

	int num3 = 2;
	int num4 = 5;
	num3 = num3 + num4;
	printf("%d + %d의 값: %d\n", 2, num4, num3);

	// 전위 연산자 : 문장을 먼저 처리한 후에 연산을 한다.
	// num3의 값 : 2 출력 -> num3++ : num3 += 1;
	// 후위 연산자 : 연산된 결과를 문장에 대입한다.
	// num4 += 1; -> printf 문장을 처리한다.

	printf("실습 6: 후위 연산자, 전위 연산자\n");
	printf("num3의 값 : %d\n", num3++);
	printf("num3의 값 : %d\n", num3);
	printf("num4의 값 : %d\n", ++num4);
	printf("num4의 값 : %d\n", num4);

	// |, &, <<, >> 비트 연산자

	// 게임 스토리
	// n강일 때의 무기, n+1 무기의 정보를 화면에 출력하는 스토리

	char sword[20] = "롱소드";
	int basicPower = 10;
	int weaponLevel;
	int growthPower = 3;

	printf("무기 이름: %s, 무기 강화 성공 확률: %.1f\n", sword, 100.0);
	printf("무기 레벨을 얼마나 올릴지 입력하세요 :");
	scanf("%d", &weaponLevel);

	int valPower = basicPower + weaponLevel * growthPower;

	printf("무기의 데미지: %d\n\n", valPower);

	// 스토리2
	// 아이템 인벤토리, Slot 기타 아이템 수집, Stack x 갯수,
	
	// Slot 최대 갯수 : 변수
	// Stack 최대 갯수 : 변수
	int itemSlot = 10;
	int itemStack = 5;

	// A 아이템을 N개 획득
	itemStack = itemStack + 1;
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요
	printf("아이템 인벤토리의 용량 : %d\n", itemSlot);
	printf("아이템 A의 갯수 : %d\n", itemStack);
	printf("아이템 인벤토리 상태 : %s\n", (itemSlot <= itemStack) ? "용량이 꽉 찼습니다" : "용량이 여유롭습니다.");

	itemStack = itemStack + 2;
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요

	// 3항 연산자로

	// 게임 스토리3 작성


}