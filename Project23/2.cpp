#include "config.h"

void main() {

	int data[4][5] = {0, };
	int count = 0;
	int start = 0;    //각 행에 숫자가 채워질 시작 열
	int end = 4;      //각 행에 숫자가 채워질 마지막 열
	int sw = 1;       //숫자가 채워지는 열의 순서 변경에 사용할 변수

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