#include "menu.h"
#include "WeaponUpgrade.h"

int weaponLv = 1;
int baseATP = 10;
int weight = 5;
int currentAttackPower = 0;

void Updrade() {
	printf("��ȭ�� �����մϴ�.\n");

	// ������ ����
	char weapon[20] = "�ռҵ�";
	// ������ �⺻ ���ݷ�
	// ����ġ
	// ���� ���ݷ�
	// ��ȭ�� ������ �����ϴ� ���̽�
	weaponLv = weaponLv + 1;
	// ������ ������ 1 ��� ��Ų��.
	// ���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
	currentAttackPower = baseATP + (weaponLv * weight);
	// printf(���� ���ݷ�, ����)
	printf("���� ���ݷ�: %d, ���� ����: %d\n", currentAttackPower, weaponLv);
}