#include "config.h"

void main() {

	int n;
	printf("정렬할 데이터 개수 : ");
	scanf_s("%d", &n);
	int* data = (int*)malloc(sizeof(int) * n);

	printf("정렬할 데이터 입력 : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
	}

	for (int i = 0; i < n-1; i++) {              //회전수

//  flag라는 변수를 선언하고 false로 초기화 한다.
		bool flag = false;

		for (int j = 0; j < n - 1 - i; j++) {    //비교대상
//			printf("i = %d, j = %d\n", i, j);
			if (data[j] > data[j + 1]) {
				swap(data[j], data[j + 1]);      //값교환

//  값교환 작업이 실행되면 flag 변수의 값을 true로 변경한다.
//  한 번이라도 값교환이 실행되면(정렬중이라면) flag변수가 기억하는 값이 true가 된다.
//  한 번도 값교환이 실행되지 않으면 flag 변수가 기억하는 값은 false이다.
				flag = true;
			}
		}

//  flag 변수의 값이 false면 이미 정렬이 완료된 상태이므로 반복을 탈출한다.
		if (!flag) {
			break;
		}

		printf("%d 회전 결과 : ",i+1);
		for (int k = 0; k < n; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");
	}

}