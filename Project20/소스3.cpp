#include "config.h"
#include "헤더.h"

// 함수를 main() 함수 뒤에 정의할 경우 에러가 발생되므로 반드시 main() 함수 뒤에서 만드는 함수의 원형을
// main()함수 앞에 적어줘야 한다. ==> 함수의 원형은 함수의 머리 부분을 의미한다.


int main() {

	printf("1~100의 합계 : %d\n", total());

	int n;
	printf("n 입력 : ");
	scanf_s("%d", &n);
	printf("1~%d의 합계 : %d\n", n, total(n));
	printf("실인수 n : %d\n", n);

	int m;
	printf("n, m 입력 : ");
	scanf_s("%d %d", &n, &m);
	printf("%d~%d의 합계 : %d\n", n, m, total(n, m));
}
