#include "config.h"

void main() {

	int data[4][5] = {0, };
	int count = 0;
	int start = 0;    //�� �࿡ ���ڰ� ä���� ���� ��
	int end = 4;      //�� �࿡ ���ڰ� ä���� ������ ��
	int sw = 1;       //���ڰ� ä������ ���� ���� ���濡 ����� ����

	for (int i = 0; i < 4; i++) {
		for (int j = start; j != end + sw; j += sw) {
			data[i][j] = ++count;
		}
		int temp = start;
		start = end;
		end = temp;
		sw *= -1;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", data[i][j]);
		}
		printf("\n");
	}

}