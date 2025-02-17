/*
	작성일 : 2025-02-17
	작성자 : 김근호
	주제 : 변수
*/

// 환경 설정

#include <stdio.h>

int main()
{
	// player : 닉네임(문자열)
	// enemy : 몬스터 이름(문자열)
	// player's attackPower : 플레이어 공격력(정수)
	// enemy's attackPower : 몬스터의 공격력(정수)
	char player[20] = "재의 귀인";
	char enemy[20] = "망자";
	int playerAttackPower = 72;
	int enemyAttackPower = 30;
	// 변수를 이용해서 한번에 이름 등록

	// 컴퓨터에세 전달해야 할 정보 (변수의 이름, 어떤 종류인지(***))

	printf("%s와 %s가 어딘가에서 만났다.\n", player, enemy);
	printf("%s는 아직 %s를 눈치채지 못하였다.\n", enemy, player);
	printf("%s가 %s를 공격하여 %d의 damage.\n", player, enemy, playerAttackPower);
	printf("%s와 %s가 서로 공격하여 %d와 %d의 damage. \n", player, enemy, playerAttackPower, enemyAttackPower);

	char char1 = 'a';
	int int1 = 10;
	float float1 = 0.8f;
	printf("문자 출력 : %c\n", char1);
	printf("정수 출력 : %d\n", int1);
	printf("실수 출력 : %0.2f\n", float1);
	printf("문자열 출력 : %s\n", "몬스터");
	
	float valsuc = 90;
	float valfal = 10;

	// 강화시스템 스토리
	printf("%s이 %s를 처치하고 단석을 획득하였습니다.\n", player, enemy);
	printf("단석으로 롱소드를 롱소드 +1로 강화 할 수 있습니다.\n");
	// 아이템 이름 현재 레벨 강화 확률
	printf("강화 성공확률: %f %, 실패확률 : %f %\n", valsuc, valfal);
	printf("강화를 시도하겠습니까? 1=네 0=아니오\n");
	// 강화 시도
	int scanf(int upgrade);
	if (upgrade == 1) {
		int random = 0;
		random = rand() % 9 + 1;
		if (random == 1) {
			printf("강화 실패!");
		}
		else {
			printf("강화 성공!");
		}
	}
}

// F5, 디버깅 키

// 1. 출력하고 싶은 내용을 작성
// 2. 단어, 정수, 실수, 문자열 출력하세요


