#define _CRT_SECURE_NO_WARNINGS
/*
	작성일 : 2025-02-18
	작성자 : 김근호
	주제 : 변수에 대한 이해
*/

/*
	변수
	(변수) 선언
	(데이터형) (변수의 이름); 변수의 이름 데이터형의 성질을 가진다

	(변수) 초기화 : 변수에 처음으로 값을 대입하는 것

	주의점

	변수를 사용하려면 선언을 해야 한다. 
	선언 후 초기화를 해야 한다. (에러 발생)
	이미 선언한 변수에 다시 선언할 수 없다.
*/

/*
	변수의 이름 규칙
	1. 변수의 시작 이름에 숫자가 들어가면 안된다.
	2. 이름에 특수 기호가 들어가면 안된다.
	3. 언더바(_), 알파벳 사용 가능, 숫자
	4. 이름 사이에 공백 문자 사용 안 됨
	5. 키워드는 이름으로 사용 불가 'int double' 등
*/

/*
	연산자
	사칙 연산 : +, -, *, /
	나머지, 몫 : % 
	0. bit 연산자
	a > b, a < b, a == b 관계연산자
*/
#include <stdio.h> // 확장자 검색은 google, chatgpt 등 확인


int main() 
{
	int attackPower; // attackPower 이름을 갖는 변수가 int의 성질을 갖는다.

	char player[20] = "재의 귀인";
	char enemy[20] = "망자";
	char sword[20] = "롱소드";
	int swordLevel;

	// 무기 공격력 공식 : attackPower = 기본 공격력 + 무기 레벨 * 레벨당 증가하는 공격력(성장 계수)
	int basicPower = 10;
	int weaponLevel;
	int growthPower = 3;

	attackPower = 10;

	
	printf("무기 이름: %s, 무기 강화 성공 확률: %.1f\n", sword, 100.0);
	printf("무기 레벨을 얼마나 올릴지 입력하세요 :");
	scanf("%d", &weaponLevel);

	int valPower = basicPower + weaponLevel * growthPower;

	printf("무기의 데미지: %d\n", valPower);


	float _attackFloatPower; // attackPower 이름을 갖는 변수가 float의 성질을 갖는다.
	_attackFloatPower = 10.5;

	printf("본인의 알고리즘\n");
	printf("%s이 %s를 처치하고 단석을 획득하였습니다.\n", player, enemy);
	printf("단석으로 %s를 강화 할 수 있습니다.\n", sword);
	printf("강화 전 %s의 공격력: %d\n", sword, attackPower);
	printf("무기 레벨을 얼마나 올릴지 입력하세요 :");
	scanf("%d", &swordLevel);
	int enhance = 5;
	int weaponDamage = attackPower + (weaponLevel + 1) * enhance;
	printf("강화 후 %s + %d 공격력: %d\n\n\n\n\n\n\n\n", sword, swordLevel ,weaponDamage);

	// 예제 문제
	printf("예제 문제: 사각형의 넓이를 출력하는 내용을 콘솔창에 출력\n");
	// 사각형의 넓이를 구하는 문제
	
	// 정수형 데이터를 선언, width, height
	
	// 사각형의 넓이
	// 넓이 = 가로 x 세로
	// 가로 세로 곱하기
	// 사각형의 넓이는 N이다
	printf("가로 세로의 길이를 입력하여 주세요: ");
	int height, width, Area;
	scanf("%d %d", &width, &height);
	printf("입력한 가로 세로 길이 : %d, %d\n", width, height);

	Area = height * width;
	printf("사각형의 넓이 : %d\n", Area);
}

