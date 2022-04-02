#include "config.h"

void main() {

	int data[5][5] = { 0, };
	int i = 0;     //행
	int j = -1;    //열
	int count = 0; //배열에 채워질 숫자
	int k = 5;     //반복 횟수 제어에 사용할 변수
	int sw = 1;    //배열에 숫자가 채워질 위치 변경에 사용할 변수

	while (true) {

// 행 방향으로 숫자 채우기
		for (int p = 1; p <= k; p++) {
			j += sw;
			data[i][j] = ++count;
		}

		if (--k == 0) {  //5 4 4 3 3 2 2 1 1
			break;		
		}
// 열 방향으로 숫자 채우기
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