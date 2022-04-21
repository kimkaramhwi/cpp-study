#include "config.h"

void main() {

// 포인터 변수(이하 포인터)는 값을 기억할 수 없고 변수나 배열이 메모리에 생성된 주소를 기억한다.
	int a = 100;   //일반 변수
// 포인터는 선언할 때 포인터임을 알려주기 위해 앞에 "*"을 붙여서 선언한다.
//	int* p = NULL;    //포인터
//	p = 100;          //포인터에 값을 넣으려 했으므로 에러가 발생된다.
//  p = a;            //포인터에 변수에 저장된 값을 넣으려 했으므로 에러가 발생된다.
// &(번지 연산자) : 변수나 배열 요소가 메모리에 생성된 주소를 얻어온다.
//  p = &a;
// 포인터는 선언한 후 주소를 넣어도 되고 선언과 동시에 주소를 넣어도 된다.
// 
	int* p = &a;

	printf("변수 a에 저장된 값 : %d\n", a);
	printf("변수 a가 메모리에 생성된 주소 : %d\n", &a);
	printf("포인터 p에 저장된 값 : %d\n", p);
// 포인터 앞의 *은 참조 연산자로 포인터에 저장된 주소에 기억된 값을 얻어온다.
	printf("포인터 p에 저장된 주소가 참조하는 값 : %d\n", *p);
	printf("==================================================\n");

	int b[] = { 100,200,300,400,500 };
	p = b;    //배열의 이름은 그 배열이 메모리에 생성된 주소를 의미하는 번지 상수이다.
//  p = b[0]; //b[0]은 배열 요소이고 배열 요소는 일반 변수와 똑같이 취급되므로 반드시 "&"를 붙여야 한다.
//  p = &b[0];

	printf("b배열의 1번째 요소 b[0]에 저장된 값 : % d\n", b[0]);
	printf("b배열의 1번째 요소 b[0]이 메모리에 생성된 주소 : % d\n", &b[0]);
	printf("포인터 p에 저장된 값 : %d\n", p);
	printf("포인터 p에 저장된 주소가 참조하는 값 : %d\n", *p);

}