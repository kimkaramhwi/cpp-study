#include "config.h"

void main() {

	int data[] = { 8, 3, 4, 9, 1 };

	for (int i = 0; i < 4; i++) {       //회전수, 선택하는 위치
		for (int j = i + 1; j < 5; j++) {
//			printf("i = %d, j = %d\n", i, j);
//          부등호를 "<"로 변경하면 내림차순으로 정렬된다.

			if (data[i] > data[j]) {
				swap(data[i], data[j]);
//				int temp = data[i];
//				data[i] = data[j];
//				data[j] = data[i];
			}
		}      //회전종료

		printf("%d회전결과 : ", i+1);
		for (int k = 0; k < 5; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");

	}          //정렬종료

		printf("정렬결과 : ");
		for (int i = 0; i < 5; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");

}