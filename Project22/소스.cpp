#include "calendar.h"
#include "config.h"

void main() {

	int year, month;
	printf("�޷��� ����� ��, �� : ");
	scanf_s("%d %d", &year, &month);
	printf("============================\n");
	printf("        %4d�� %02d��\n", year, month);
	printf("============================\n");
	printf(" ��  ��  ȭ  ��  ��  ��  �� \n");
	printf("============================\n");

// 1���� ��µ� ���� ��ġ�� ���߱� ���� 1���� ���ϸ�ŭ �ݺ��ϸ� �� ĭ�� ����Ѵ�.
	for (int i = 1; i <= weekDay(year, month, 1); i++) {
		printf("    ");
	}

// �޷��� ����� ���� 1�Ϻ��� �� ���� ������ ��¥��ŭ �ݺ��ϸ� ��¥�� ����Ѵ�.
	for (int i = 1; i <= lastDay(year, month); i++) {
		printf(" %2d ", i);
// ����� ��¥(i)�� ������̰� �� ���� ������ ��¥�� �ƴϸ� ���� �ٲ��ش�.
		if (weekDay(year, month, i) == 6 && i != lastDay(year, month)) {
			printf("\n");
		}
	}
	printf("\n============================\n");
}