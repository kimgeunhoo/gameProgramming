#define _CRT_SECURE_NO_WARNINGS
/*
	�ۼ��� : 2025-02-18
	�ۼ��� : ���ȣ
	���� : ������ ���� ����
*/

/*
	����
	(����) ����
	(��������) (������ �̸�); ������ �̸� ���������� ������ ������

	(����) �ʱ�ȭ : ������ ó������ ���� �����ϴ� ��

	������

	������ ����Ϸ��� ������ �ؾ� �Ѵ�. 
	���� �� �ʱ�ȭ�� �ؾ� �Ѵ�. (���� �߻�)
	�̹� ������ ������ �ٽ� ������ �� ����.
*/

/*
	������ �̸� ��Ģ
	1. ������ ���� �̸��� ���ڰ� ���� �ȵȴ�.
	2. �̸��� Ư�� ��ȣ�� ���� �ȵȴ�.
	3. �����(_), ���ĺ� ��� ����, ����
	4. �̸� ���̿� ���� ���� ��� �� ��
	5. Ű����� �̸����� ��� �Ұ� 'int double' ��
*/

/*
	������
	��Ģ ���� : +, -, *, /
	������, �� : % 
	0. bit ������
	a > b, a < b, a == b ���迬����
*/
#include <stdio.h> // Ȯ���� �˻��� google, chatgpt �� Ȯ��


int main() 
{
	int attackPower; // attackPower �̸��� ���� ������ int�� ������ ���´�.

	char player[20] = "���� ����";
	char enemy[20] = "����";
	char sword[20] = "�ռҵ�";
	int swordLevel;

	// ���� ���ݷ� ���� : attackPower = �⺻ ���ݷ� + ���� ���� * ������ �����ϴ� ���ݷ�(���� ���)
	int basicPower = 10;
	int weaponLevel;
	int growthPower = 3;

	attackPower = 10;

	
	printf("���� �̸�: %s, ���� ��ȭ ���� Ȯ��: %.1f\n", sword, 100.0);
	printf("���� ������ �󸶳� �ø��� �Է��ϼ��� :");
	scanf("%d", &weaponLevel);

	int valPower = basicPower + weaponLevel * growthPower;

	printf("������ ������: %d\n", valPower);


	float _attackFloatPower; // attackPower �̸��� ���� ������ float�� ������ ���´�.
	_attackFloatPower = 10.5;

	printf("������ �˰���\n");
	printf("%s�� %s�� óġ�ϰ� �ܼ��� ȹ���Ͽ����ϴ�.\n", player, enemy);
	printf("�ܼ����� %s�� ��ȭ �� �� �ֽ��ϴ�.\n", sword);
	printf("��ȭ �� %s�� ���ݷ�: %d\n", sword, attackPower);
	printf("���� ������ �󸶳� �ø��� �Է��ϼ��� :");
	scanf("%d", &swordLevel);
	int enhance = 5;
	int weaponDamage = attackPower + (weaponLevel + 1) * enhance;
	printf("��ȭ �� %s + %d ���ݷ�: %d\n\n\n\n\n\n\n\n", sword, swordLevel ,weaponDamage);

	// ���� ����
	printf("���� ����: �簢���� ���̸� ����ϴ� ������ �ܼ�â�� ���\n");
	// �簢���� ���̸� ���ϴ� ����
	
	// ������ �����͸� ����, width, height
	
	// �簢���� ����
	// ���� = ���� x ����
	// ���� ���� ���ϱ�
	// �簢���� ���̴� N�̴�
	printf("���� ������ ���̸� �Է��Ͽ� �ּ���: ");
	int height, width, Area;
	scanf("%d %d", &width, &height);
	printf("�Է��� ���� ���� ���� : %d, %d\n", width, height);

	Area = height * width;
	printf("�簢���� ���� : %d\n", Area);
}

