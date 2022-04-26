#include "config.h"

// call by value
// 함수로 전달되는 데이터는 여러개가 가능하지만 되돌려주는 값은 return뒤에 딱 1개만 가능
// 실인수의 값을 복사해서 가인수에 전달하는 방식으로 실인수와 가인수는 별도의 메모리를 사용하므로 가인수 값이 변경된다 하더라도
// 실인수의 값은 변경되지 않는다. ==> side effect(부작용) 현상이 발생되지 않는다.
// 변수를 함수로 던지면 함수는 변수로 받는다.

// call by reference
// 함수로 전달되는 데이터는 여러개가 가능하지만 되돌려주는 값은 공유된 메모리를 통해서 여러개가 가능
// 실인수의 값이 저장된 주소를 가인수에 전달하는 방식으로 실인수와 가인수는 같은 메모리를 사용하므로 가인수 값이 변경되면
// 실인수의 값도 같이 변경된다. ==> side effect(부작용) 현상이 발생된다.
// 주소를 함수로 던지면 함수는 포인터로 받는다.

void change(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}
void change(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;

}
void change(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;

}

void main() {

	int a = 3, b = 4;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	change(&a, &b);

	double c = 1.5, d = 0.9;
	printf("c = %f, d = %f\n", c, d);
	change(&c, &d);
	printf("c = %f, d = %f\n", c, d);

	char ch1 = 'a', ch2 = 'A';
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);
	change(&ch1, &ch2);
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);
}