/*
	menu.h �ڵ带 ctrl c + v
*/

#include "menu.h"
#include "WeaponUpgrade.h"


void SelectMenu()
{
	// ctrl + k + s �ڵ� ���α�
	while (true)
	{
		system("cls");
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_����Ѵ�.\n");
		printf("3_�����Ѵ�.\n");

		// printf("���� ���ݷ�: %d, ���� ����: %d\n", baseATP + (weaponLv * weight), weaponLv);

		int inputNumber = -1;
		scanf_s("%d", &inputNumber); // '\n'
		while (getchar() != '\n'); // charactor �Է� ����

		if (inputNumber == 1)
		{
			Upgrade();
		}
		else if (inputNumber == 2) {
			printf("��ȭ�� ����մϴ�.\n");

		}
		else if (inputNumber == 3) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
		}
		// Alt Ű���� ȭ��ǥ ��, �Ʒ� �ҽ� �ڵ� �ڸ� �ű�� ���� 

		// �÷��̾ Ư�� Ű�� �Է����� �� �Ѿ���� �ϰ� �ʹ�.

		printf("���� �� �ƹ� ��ư�̳� ��������.\n");

		_getch();	// �Է� ���� �޾ƿ��� ��ɾ�
	}
}
