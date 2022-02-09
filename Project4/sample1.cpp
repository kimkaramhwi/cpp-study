#include "config.h"

void main() {

	int c, cpp, java, total;
	double average;

//	printf("3과목 점수를 입력하세요 : ");
//	scanf_s("%d %d %d", &c, &cpp, &java);

	cout << "3과목 점수를 입력하세요 : ";
	cin >> c >> cpp >> java;

	total = c + cpp + java;
	average = (double) total / 3; //3뒤에 .
//	printf("평균 점수 : %f\n", average);
	cout << "평균 점수 : " << average << endl;

// 관계(비교)연산자 : 연산 결과는 참(true, 1), 또는 거짓(false, 0)이 나온다.
// >(크다, 초과), >=(크거나 같다, 이상), <(작다, 미만), <=(작거나 같다, 이하), ==(같다), !=(같지 않다)
// 
// 논리 연산자
// && : 논리곱, AND, 모든 조건이 참일 경우에만 참, ~이고, ~이면서, ~중에서
// || : 논리함, OR, 모든 조건 중에서 한 개 이상 참일 경우에 참, ~또는, ~이거나
// ! : 논리부정, NOT

// 조건식이 거짓일 경우 실행할 문장이 없다면 else 이하를 사용하지 않는다.
// if(조건식) {
// 조건식의 결과가 참일 경우 실행할 문장;
// ....;
//} else{
// 조건식의 결과가 거짓일 경우 실행할 문장;
// ...;
// }

	if (average >= 60) {
		printf("합격\n");
	}
	else {
		printf("불합격\n");
	}


	if (average >= 90) {
		printf("수\n");
	}
	else if(average >= 80) {
		printf("우\n");
	}
	else if (average >= 70) {
		printf("미\n");
	}
	else if (average >= 60) {
		printf("양\n");
	}
	else {
		printf("가\n");
	}
}