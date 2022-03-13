#include "config.h"

// 함수의 형식
// 리턴타입 함수명([인수, ...]){           //함수의 머리
// 함수가 실행할 문장;                     //{} 블록을 함수의 몸체라 부른다.
// ...
// [return 값;]
// }
// 함수를 실행할 때는 함수의 이름을 적어주면 되고 호출된 함수는 return을 만나거나 함수의 "}"를 만나면 함수를 호출한
// 곳으로 되돌아 간다. ==> return값이 있으면 return값을 가지고 되돌아간다.
// 리턴 타입은 함수가 실행된 후 결과를 돌려줘야 할때 return을 사용하는데 return되는 값의 자료형을 적어주면 된다.
// return이 생략되면 함수의 실행 결과가 없다는 의미이므로 돌려주는 값이 없다 "void"를 적어준다.

int total() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	return sum;
}

// 함수 오버로드 ==> 하나의 프로그램에 같은 이름의 함수를 여러개 만들어 사용할 수 있다.
// 컴파일러는 함수의 이름이 같으면 괄호 안의 인수의 개수로 함수를 식별하고 인수의 개수도 같다면 인수의 데이터 타입으로
// 함수를 식별한다.

int total(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	n = 999;           //가인수의 값을 변경했다.
	printf("가인수 n : %d\n", n);
	return sum;
}

int total(int n, int m) {
	int sum = 0;
	for (int i = n; i <= m; i++) {
		sum += i;
	}
	return sum;
}

int main() {

	printf("1~100의 합계 : %d\n", total());

	int n;
	printf("n 입력 : ");
	scanf_s("%d", &n);
	printf("1~%d의 합계 : %d\n", n, total(n));

// call by value, 값에 의한 호출
// 함수를 호출하는 쪽의 인수를 실인수라 부르고 호출 당하는 쪽의 인수를 가인수라 부른다.
// 실인수 값을 복사해서 가인수로 전달하고 실인수와 가인수는 별도의 독립된 기억 공간을 사용하므로 가인수 값이 변경된다 하더라도
// 실인수 값은 변경되지 않는다. ==> side effect(부작용) 현상이 발생되지 않는다.
	printf("실인수 n : %d\n", n);

	int m;
	printf("n, m 입력 : ");
	scanf_s("%d %d", &n, &m);
	printf("%d~%d의 합계 : %d\n", n, m, total(n, m));
}