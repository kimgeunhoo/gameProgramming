#include <stdio.h>
#include "Intro.h"


/*
	f12 : [�Լ��� �̸� ���콺 ��Ŭ�� - ���Ƿ� �̵�] ����Ű
	�̸��� ���� Ŭ�� - f12 �Է�

	ctrl + '-' : ���� ȭ������ ���ư���

	ctrl + k + d : �ڵ� ���� ���� - �鿩���⸦ default ������� ������

	ctrl + k + c : ���� �ּ�

	ctrl + k + u : ���� �ּ� ����
*/

/*
	������ �ý��� ����

	RPG - ���Ⱝȭ �ý���
	- ���ǹ�, ������ �Է��� ���� �� �� �ְ� �����.		= if ���ǹ��� Ȱ�� printf, scanf - 1����
	- Upgrade, Currency, Random							= ��� �и�
	- ���� ���� : ��ȭ, Ȯ��, ������ Ŭ���� ����		= extern ��ü�� �ʿ��� ������ �������� �����

	������ �߰��� ��

	Ű���� �Է¿� ���� ��ȭ�ϴ� �� �� ������ ���� �� ����.
	�ܼ� â���� "�÷��̾�" Player - NPC
	Player - InputKey�� �̿��ؼ� �����̴� ��

	�̵� + ��ȭ �ý��� ���� <<- ����2
*/

#include "Random.h"


int main()
{
	IntroMenu();

	/*for (int i = 0; i < 10; i++) {
		int randomNumber = ReturnRandomValue();
		int randomRange = ReturnRandomInRange(20, 40);
		printf("���� ���� %d : %d\n", i + 1, randomRange);
	}*/
}