#include "config.h"

void main() {

	int data[4][5] = {0, };
	int count = 0;

	for (int i = 0; i < 4; i++) {

// 짝수행은 숫자가 왼쪽에서 오른쪽으로 홀수행은 오른쪽에서 왼쪽으로 채워진다.
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++) {
				data[i][j] = ++count;
			}
		}
		else {
			for (int j = 4; j >= 0; j--) {
				data[i][j] = ++count;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", data[i][j]);
		}
		printf("\n");
	}

}