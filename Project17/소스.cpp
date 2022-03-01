#include "config.h"

void main() {

	int n;
	printf("정렬할 데이터 개수 : ");
	scanf_s("%d", &n);

//  C언어의 1차원 배열 동적 할당
//  malloc() : 괄호 안의 크기만큼 메모리를 동적으로 할당한다.
// 	문자열을 기억하는 배열을 동적 할당으로 생성할 경우 문자열의 끝을 의미하는 '\0'이 저장될 기억공간이 필요하므로
//  1만큼 크게 만들어야한다.
//	int *data = (int*)malloc(sizeof(int) * n);
//  C++에서 1차원 배열 동적 할당
	int* data = new int[n];

//  memset(동적 할당된 배열명, 초기치, 동적 할당된 배열의 크기) : 동적 할당된 메모리를 바이트 단위로 초기화 한다.
	memset(data, 0, sizeof(int) * n);
//  memset(data, 1, sizeof(int) * n); ==> 0000 0001 0000 0001 0000 0001 0000 0001 ==> 16,843,009, 0으로 초기화만 가능

//  _msize() : 괄호안의 포인터에 할당된 메모리의 크기를 얻어온다.
//  printf("data에 할당된 메모리 크기 : %d\n", _msize(data));

	printf("정렬할 데이터 입력 : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
	
	}

	for (int i = 0; i < n-1; i++) {

		for (int j = i + 1; j < n; j++) {
			if (data[i] > data[j]) {
				swap(data[i], data[j]);
			}
		}
	}
	printf("정렬 결과 : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
    }
}