#include "config.h"

void main() {

	int year;
	printf("윤년/평년을 판단할 년도를 입력하세요 : ");
	scanf_s("%d", &year);

// 프로그램에서 여러번 사용되는 값은 변수에 저장해서 사용하면 편리하다.
// 논리값을 기억하는 변수나 연산 결과가 논리값인 함수의 이름은 "is"로 시작하는 관행임.
//	int isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	bool isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

// 년도가 4로 나눠 떨어지고 100으로 나눠 떨어지지 않거나 400으로 나눠 떨어지면 윤년, 그렇지 않으면 평년
// *, /, % ==> +, - ==> 관계연산 ==> 논리연산

	if (isLeapYear) {
//		printf("%d년은 윤년입니다.", year);
		cout << year << "년은 윤년입니다." << endl;
	}
	else {
//		printf("%d년은 평년입니다.", year);
		cout << year << "년은 평년입니다." << endl;
	}

// 삼항(조건) 연산자(?:) : if의 조건 비교 결과 실행할 문장이 참일 때 한 문장 거짓일 때 한 문장을 실행해야할 경우 사용하면 편리함.
// 조건식 ? 조건식이 참일 때 실행할 문장 : 조건식이 거짓일 때 실행할 문장
	printf("%d년은 %s년입니다.\n", year, isLeapYear ? "윤" : "평");
	cout << year << "년은 " << (isLeapYear ? "윤" : "평") << "년입니다." << endl;

}