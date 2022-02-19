#include "config.h"
#include <time.h>
#include <Windows.h>   //Sleep() 함수를 사용할 수 있게 해주는 헤더 파일

void main() {

// 추첨기를 준비한다.
	int lotto[45];
// 추첨기에 공을 넣는다.
	for (int i = 0; i < 45; i++) {
		lotto[i] = i + 1;
	}
	for (int i = 0; i < 45; i++) {
		printf("%2d ", lotto[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}
	printf("\n============== 섞기전 ===============\n");

// 공을 섞는다.
// lotto[0]의 값과 lotto[1]~[44]의 랜덤한 위치와 값을 교환시킨다.
	srand(time(NULL));      //랜덤 초기화
	for (int i = 0; i < 10000; i++) {
		int r = rand() % 44 + 1;
		int temp = lotto[0];
		lotto[0] = lotto[r];
		lotto[r] = temp;
//		swap(lotto[0], lotto[r]);   //두 기억장소의 값을 교환하는 함수
	}
	for (int i = 0; i < 45; i++) {
		printf("%2d ", lotto[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		} 
	}
	printf("\n============== 섞은후 ===============\n");

// lotto[0]~[5]가 1등 번호 lotto[6] 보너스
	printf("1등 번호 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
		Sleep(1000);                //괄호 안에 지정된 시간(1/1000초)만큼 프로그램을 멈춘다.
	}
	printf("보너스 : %d\n", lotto[6]);
}