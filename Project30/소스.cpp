#include "config.h"

// 우리가 실제로 처리하는 데이터 1건은 기본 자료형 1가지로 구성되는 경우는 없고 여러 자료형이 서로 섞여서 구성된다.
// ==> 구조체를 이용해서 여러 자료형을 묶어서 새로운 자료형을 만들어 사용한다. ==> 사용자 정의 자료형

// 구조체 형식
// struct 구조체이름 {
//	 구조체 멤버 변수 선언;
//	 ...;
// };
struct Jumsu {
	int no;         //번호
	char name[11];  //이름
	int c;          //c언어 점수
	int cpp;        //cpp점수
	int java;       //java점수
	int total;      //총점
	double average; //평균
};

void main() {

	// 구조체 변수 선언 방법
	// [struct] 구조체이름 구조체변수명;
	// [struct] 구조체이름 구조체변수명 = {초기치};
	// [struct] 구조체이름 구조체배열명[첨자];
	// [struct] 구조체이름 *구조체포인터명;
	// 구조체 멤버에 접근하는 방법은 2가지가 있는데 구조체 변수를 통해서 접근할때는 "."을 사용하고 
	// 구조체 포인터를 통해서 접근할 때는 "->"를 사용한다.

	struct Jumsu jumsu1;
	jumsu1.no = 1;
	strcpy_s(jumsu1.name, "홍길동");
	jumsu1.c = 100;
	jumsu1.cpp = 100;
	jumsu1.java = 99;
	jumsu1.total = jumsu1.c + jumsu1.cpp + jumsu1.java;
	jumsu1.average = (double)jumsu1.total / 3;
	printf("%s님의 평균 점수는 %6.2f점 입니다.\n", jumsu1.name, jumsu1.average);

	Jumsu jumsu2 = { 2, "임꺽정", 78,65,81 };
	jumsu2.total = jumsu2.c + jumsu2.cpp + jumsu2.java;
	jumsu2.average = (double)jumsu2.total / 3;
	printf("%s님의 평균 점수는 %6.2f점 입니다.\n", jumsu2.name, jumsu2.average);

	Jumsu* pJumsu = &jumsu1;
	printf("%s님의 평균 점수는 %6.2f점 입니다.\n", pJumsu->name, pJumsu->average);
}