/*
	�ۼ��� : 2025-02-25
	�ۼ��� : ���ȣ
	���� : �ڵ��� �帧 ���� - �ݺ�(for, while��)
*/

/*
	�ݺ���
	-  1 + 1 + 1 + 1 + 1 => 1 * 5

	for, while

	for (int i = 0; i < 10; i+=2)
	
	// ���ǿ��� ��(True)�� ����(false)
	// ������ ���� ���� �ݺ��� ����, ������ ���� �ݺ����� �����.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	printf("�ݺ��� ���� 1\n");
	// A �������� ȹ�� - ���� 
	int ACount = 0;
	printf("A �������� �� : %d\n", ACount);

	// �������� 1�� ȹ���ߴ�.
	for (int i = 0; i < 10; i++) {
		ACount++;
	}
	printf("A �������� �� : %d\n", ACount);

	while (ACount < 20) {
		ACount++;
	}

	printf("A �������� �� : %d\n", ACount);

	printf("for �ݺ��� ���� 2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++) {
		BCount = BCount + i;
	}

	printf("B �������� �� : %d\n", BCount);

	printf("for �ݺ��� ���� 3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--) {
		printf("���� i�� �� : %d\n", reverseI);
	}

	// ���� ���丮�� ���� ǥ��
	
	for (;;) {
		srand(time(NULL));
		int num = rand() % 100;
		// ���� ��ȭ step

		// ������ �̸�
		char weapon[20] = "�ռҵ�";
		// ������ ����
		int weaponLevel = 0;
		// �⺻ ���ݷ�, ����, ����ġ
		int AtPoint = 63;
		int upgradeATP = 7;
		// ������ ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
		int weaponATP = AtPoint + weaponLevel * upgradeATP;


		// ��ȭ�� ��� ������ ���ΰ�? ���� ���ΰ�?
		printf("��ȭ�� �����ϰڽ��ϱ�?(Y/N) ��ȭ ���� Ȯ�� : 90%\n");
		char check = ' ';
		scanf_s("%c", &check, 1);
		while (getchar() != '\n'); // ���ڿ� ���� �� �ش� ���� �缳��

		if (check == 'Y') {
			// ��ȭ�� �����Ѵ�.
			printf("��ȭ�� �����մϴ�.\n");
			printf("���̽��� = %d\n", num);
			if (num % 100 >= 10) {
				printf("��ȭ�� �����Ͽ����ϴ�.\n");
				int before = weaponATP;
				weaponLevel++;
				weaponATP = AtPoint + weaponLevel * upgradeATP;
				printf("���� �̸� : %s, ������ ���� : %d, ��ȭ �� ���� ���ݷ� %d, ��ȭ �� ���� ���ݷ� : %d .\n", weapon, weaponLevel, before, weaponATP);
			}
			else {
				printf("��ȭ�� �����Ͽ����ϴ�. ����� �����˴ϴ�.\n");
				int before = weaponATP;
				printf("���� �̸� : %s, ������ ���� : %d, ��ȭ �� ���� ���ݷ� %d, ��ȭ �� ���� ���ݷ� : %d .\n", weapon, weaponLevel, before, weaponATP);
			}
		}
		else if (check == 'N') {
			// ��ȭ�� �׸��д�.
			printf("��ȭ�� �׸��Ӵϴ�..\n");
			break;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n'); // ���ڿ� ���� �� �ش� ���� �缳��

			if (another == 'Y') {
			
			}
			else if(another == 'N') {

			}
			else {
				printf("���α׷��� ����Ǿ����ϴ�.\n");
				break;
			}
			//continue;
		}
		break;
		
		
	}
	// �ݺ����� ����Ѵ�.
	// for �ݺ��� ����Ͽ�
	// n �� �ݺ��ϴ� �ڵ带 ���� ǥ���ϱ� ���ؼ�
	// ��� �ݺ��ؾ� ���� �� �𸣰ٴ� ���� ����
	// ����) �߸��� ���� �Է����� �� ��Ȯ�� ���� �䱸�ϴ� �ڵ�

	// while �ݺ���
	// ���� �ݺ���

	int xi = 0;

	while (xi < 10) // (   ) ���ǽ� : ������ true�� �� {} ����, ������ false �ݺ����� �����Ѵ�.
	{
		xi++; // while Ż���ϱ� ���� ���ǹ�

		printf("xi�� ��: %d\n", xi);
	}

	// for �ݺ��� ������? while �ݺ����� ������?

	// �� �� �ݺ� ���� Ƚ���� ������ �ִٸ� for�� �ۼ��ϱ� �� ���ϴ�
 
	// ��� �ݺ����� �ָ� �Ҷ��� while �ݺ����� �����ϴ�.

	// ??? �� �ݺ��� �ڵ带 �ۼ��ϰ� �ʹ�.

	// 2��ŭ �����ϴ� ������ ���� numA
	// �� numA�� 10���� ũ�ų� ���� �� ����
	// numA ���ڰ� 10���� Ŀ���� ���ؼ� ��� �ݺ��ߴ��� �˰� �ʹ�.
	// �ݺ��� ��� ������ CountA�� ���
	int numA = 0;
	int CountA = 0;
	printf("numA�� ���� �Է����ּ���(�� 10���� �۾ƾ� �Ѵ�.)\n");
	scanf_s("%d", &numA);		// numA�� ���� ��������.

	// 1 ǥ����
	while (true) {

		numA += 2;
		CountA++;

		if (numA > 10) {
			printf("�ݺ��� Ƚ�� : %d\n", CountA);
			printf("���� �� : %d\n", numA);
			break;
		}	
	}

	while (numA <= 10) {

		numA += 2;
		CountA++;
	}

	// for �ݺ��� ǥ�� <-> while �ݺ��� ǥ���ϱ�

	// �ǽ�����
	// 1���� 10 ������ ����  ¦�� print ��� �غ���
	// for �ݺ���, while �ݺ���

	int numberA = 0;

	while (true) {
		numberA++;
		if (numberA % 2 == 0) {
			printf("1���� 10������ �� : %d\n", numberA);
		}
		if (numberA == 10) {
			break;
		}
	}

	// ���� �� : 1, 2, 3, 4....

	// Y, N  �ٽ� �Է��ϼ��� <- Y, N �Է� �� �� ���� ���� ����

	// while �ݺ����� ����ؼ� Y, N �Է��� �� ���� �ݺ��Ǵ� �ڵ� �ۼ�

	srand(time(NULL));
	int number = rand() % 100;
	for (;;) {

		// ���� ��ȭ step

		// ������ �̸�
		char weapon[20] = "�ռҵ�";
		// ������ ����
		int weaponLevel = 0;
		// �⺻ ���ݷ�, ����, ����ġ
		int AtPoint = 63;
		int upgradeATP = 7;
		// ������ ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
		int weaponATP = AtPoint + weaponLevel * upgradeATP;


		// ��ȭ�� ��� ������ ���ΰ�? ���� ���ΰ�?
		while (true) {
			char checkpoint = ' ';
			printf("��ȭ�� �����ϰڽ��ϱ�?(Y/N) ��ȭ ���� Ȯ�� : 90%\n");
			scanf_s("%c", &checkpoint, 1);

			if (checkpoint == 'Y') {
				// ��ȭ�� �����Ѵ�.
				printf("��ȭ�� �����մϴ�.\n");
				printf("���̽��� = %d\n", number);
				if (number % 100 >= 10) {
					printf("��ȭ�� �����Ͽ����ϴ�.\n");
					int before = weaponATP;
					weaponLevel = weaponLevel + 1;
					weaponATP = AtPoint + weaponLevel * upgradeATP;
					printf("���� �̸� : %s, ������ ���� : %d, ��ȭ �� ���� ���ݷ� %d, ��ȭ �� ���� ���ݷ� : %d .\n", weapon, weaponLevel, before, weaponATP);
					srand(time(NULL));
					int number = rand() % 100;
				}
				else {
					printf("��ȭ�� �����Ͽ����ϴ�. ����� �����˴ϴ�.\n");
					int before = weaponATP;
					printf("���� �̸� : %s, ������ ���� : %d, ��ȭ �� ���� ���ݷ� %d, ��ȭ �� ���� ���ݷ� : %d .\n", weapon, weaponLevel, before, weaponATP);
					srand(time(NULL));
					int number = rand() % 100;
				}
			}
			else if (checkpoint == 'N') {
				// ��ȭ�� �׸��д�.
				printf("��ȭ�� �׸��Ӵϴ�..\n");
				break;
			}
			else if (checkpoint != 'Y' && checkpoint != 'N') {
				printf("�߸��� �Է��Դϴ�. �ٽ� �Է��Ͽ� �ּ���.\n");
			}
		}
		break;
	}

	// scanf_s(); ����Ѵٸ�
	// while (getchar != '\n');
}