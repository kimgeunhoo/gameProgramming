/*
	�ۼ��� : 2025-02-17
	�ۼ��� : ���ȣ
	���� : ����
*/

// ȯ�� ����

#include <stdio.h>

int main()
{
	// player : �г���(���ڿ�)
	// enemy : ���� �̸�(���ڿ�)
	// player's attackPower : �÷��̾� ���ݷ�(����)
	// enemy's attackPower : ������ ���ݷ�(����)
	char player[20] = "���� ����";
	char enemy[20] = "����";
	int playerAttackPower = 72;
	int enemyAttackPower = 30;
	// ������ �̿��ؼ� �ѹ��� �̸� ���

	// ��ǻ�Ϳ��� �����ؾ� �� ���� (������ �̸�, � ��������(***))

	printf("%s�� %s�� ��򰡿��� ������.\n", player, enemy);
	printf("%s�� ���� %s�� ��ġä�� ���Ͽ���.\n", enemy, player);
	printf("%s�� %s�� �����Ͽ� %d�� damage.\n", player, enemy, playerAttackPower);
	printf("%s�� %s�� ���� �����Ͽ� %d�� %d�� damage. \n", player, enemy, playerAttackPower, enemyAttackPower);

	char char1 = 'a';
	int int1 = 10;
	float float1 = 0.8f;
	printf("���� ��� : %c\n", char1);
	printf("���� ��� : %d\n", int1);
	printf("�Ǽ� ��� : %0.2f\n", float1);
	printf("���ڿ� ��� : %s\n", "����");
	
	float valsuc = 90;
	float valfal = 10;

	// ��ȭ�ý��� ���丮
	printf("%s�� %s�� óġ�ϰ� �ܼ��� ȹ���Ͽ����ϴ�.\n", player, enemy);
	printf("�ܼ����� �ռҵ带 �ռҵ� +1�� ��ȭ �� �� �ֽ��ϴ�.\n");
	// ������ �̸� ���� ���� ��ȭ Ȯ��
	printf("��ȭ ����Ȯ��: %f %, ����Ȯ�� : %f %\n", valsuc, valfal);
	printf("��ȭ�� �õ��ϰڽ��ϱ�? 1=�� 0=�ƴϿ�\n");
	// ��ȭ �õ�
	int scanf(int upgrade);
	if (upgrade == 1) {
		int random = 0;
		random = rand() % 9 + 1;
		if (random == 1) {
			printf("��ȭ ����!");
		}
		else {
			printf("��ȭ ����!");
		}
	}
}

// F5, ����� Ű

// 1. ����ϰ� ���� ������ �ۼ�
// 2. �ܾ�, ����, �Ǽ�, ���ڿ� ����ϼ���


