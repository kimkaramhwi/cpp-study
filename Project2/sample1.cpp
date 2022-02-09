#include <stdio.h>
#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int main(void) {

// 변수 : 처리할 데이터(상수)를 저장하는 기억장소
// 변수명은 영문자, 숫자, _만 사용할 수 있고 첫 문자는 숫자로 시작하면 안된다. ex) _aaa 가능
// 변수는 선언 후 사용하기 전에 반드시 초기화를 해줘야 한다.

// 변수 선언 방법
// 변수의 자료형 변수명; ==> 변수에 뭐가 들어있나 알 수 없다.
// 변수의자료형 변수명 = 초기치; ==> 변수를 선언하고 초기치로 초기화 시킨다.
// "="의 의미는 "=" 오른쪽의 값을 "=" 왼쪽의 기억장소에 기억시킨다. 대입문

	int a, b;

	/*
	printf("a 입력 : ");
//	scanf("입력서식", &변수명);
	scanf("%d", &a);

	printf("b 입력 : ");
	scanf("%d", &b);
	
	*/
	printf("a값 b값을 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d", a, b, a + b);
	/*
	cout << "a값 b값을 입력하세요 : ";
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	

	int year;
	printf("윤년/평년을 판단할 년도를 입력하세요 : ");
	scanf("%d", &year);
	printf("입력한 년도는 %d년 입니다.", year);
	

	cout << "윤년/평년을 판단할 년도를 입력하세요 : ";
	cin >> year;
	cout << "입력한 년도는 " << year << "년 입니다." << endl;
	*/

	return 0;
}