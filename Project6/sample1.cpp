#include "config.h"

void main() {

	int c, java, jsp;
	printf("3과목 점수를 입력하세요 : ");
	scanf_s("%d %d %d", &c, &java, &jsp);

	int total = c + java + jsp;
	double average = total / 3.;

	printf("평균 점수 : %6.2f\n", average);


	// key에는 정수를 기억하는 변수 또는 연산 결과가 정수인 수식만 나올 수 있다.
	//	switch(key) {
	//      case value:   // ":"을 찍어주는 것에 주의한다.
	//      key와 value가 같을 경우 실행할 문장;
	//      ...;
	//      [break;]
	//  ...
	//    [default: 
	//        key와 일치하는 value가 없을 경우 실행할 문장;
	//        ...;
	//        break;]
	//	}

	// 같은 작업을 하는 case는 나열할 수 있다.
	switch ((int)average / 10) {
	case 10:
		printf("참잘했어요\n");
//		printf("수\n");
//		break;
	case 9:
		printf("수\n");
		break;
	case 8:
		printf("우\n");
		break;
	case 7:
		printf("미\n");
		break;
	case 6:
		printf("양\n");
		break;
	default:
		printf("가\n");

	}
}