#include "config.h"

void main() {

	int data[] = { 8, 3, 4, 9, 1 };

	for (int i = 0; i < 4; i++) {       //ȸ����, �����ϴ� ��ġ
		for (int j = i + 1; j < 5; j++) {
//			printf("i = %d, j = %d\n", i, j);
//          �ε�ȣ�� "<"�� �����ϸ� ������������ ���ĵȴ�.

			if (data[i] > data[j]) {
				swap(data[i], data[j]);
//				int temp = data[i];
//				data[i] = data[j];
//				data[j] = data[i];
			}
		}      //ȸ������

		printf("%dȸ����� : ", i+1);
		for (int k = 0; k < 5; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");

	}          //��������

		printf("���İ�� : ");
		for (int i = 0; i < 5; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");

}