#include "config.h"

void main() {

	int year, month, day;
	printf("������ ����� ��, ��, �� : ");
	scanf_s("%d %d %d", &year, &month, &day);

// 1�� 1�� 1�Ϻ��� ���⵵ 12�� 31�ϱ��� ���� ��¥�� �հ踦 ����Ѵ�.
	int sum = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

// ���⵵���� ��¥�� �հ迡 ���ޱ����� ��¥�� ���Ѵ�.
	int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	m[1] = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
	for (int i = 1; i < month; i++) {
	/*	switch (i) {
		case 2:
			sum += year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28; break;
		case 4: case 6: case 9: case 11:
			sum += 30; break;
		default:
			sum += 31;
		}*/
		sum += m[i - 1];
	}

// ���ޱ��� ���� ������ ���� ���Ѵ�.
	sum += day;
//	printf("%d\n", sum % 7);

/*	switch (sum % 7) {
	case 0: printf("�Ͽ���"); break;
	case 1: printf("������"); break;
	case 2: printf("ȭ����"); break;
	case 3: printf("������"); break;
	case 4: printf("�����"); break;
	case 5: printf("�ݿ���"); break;
	case 6: printf("�����"); break;
	}*/

// ���ڿ��� ����ϴ� �迭�� ����� ���� ==> ���� �迭 �̸� �տ� "*"�� �ٿ��ָ� ���ڿ��� ����ϴ� �迭�� �ȴ�.
	const char *week[] = {"��","��","ȭ","��","��","��","��"};
	printf("%s����\n", week[sum % 7]);


}