#include "config.h"

void main() {

	int data[5][5] = { 0, };
	int i = 0;     //��
	int j = -1;    //��
	int count = 0; //�迭�� ä���� ����
	int k = 5;     //�ݺ� Ƚ�� ��� ����� ����
	int sw = 1;    //�迭�� ���ڰ� ä���� ��ġ ���濡 ����� ����

	while (true) {

// �� �������� ���� ä���
		for (int p = 1; p <= k; p++) {
			j += sw;
			data[i][j] = ++count;
		}

		if (--k == 0) {  //5 4 4 3 3 2 2 1 1
			break;		
		}
// �� �������� ���� ä���
		for (int p = 1; p <= k; p++) {
			i += sw;
			data[i][j] = ++count;
		}
		sw *= -1;
	}


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", data[i][j]);
		}
		printf("\n");
	}

}