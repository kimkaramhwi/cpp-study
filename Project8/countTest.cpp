#include "config.h"
#include <stdint.h>
#include <time.h> 

void main() {

	srand(time(NULL));
//	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
// 배열이란 같은 이름으로 여러개의 기억장소를 만들어 사용할 수 있게 한 것이다.
// 배열은 첨자(index)가 1이 아니고 0부터 시작하는 것에 주의하자
// 배열 선언 방법, 첨자는 배열의 크기와 차원을 결정한다.
// 자료형 배열명[첨자];         //지정된 크기만큼 배열을 선언한다. 배열에는 쓰레기가 들어있다.
// 자료형 배열명[] = {초기치};  //{}에 지정된 초기치의 개수만큼 배열을 만들고 초기치로 초기화 시킨다.
	int count[6] = { 0,};       // 크기만큼 배열을 선언하고 모두 0으로 초기화 시킨다.

	for (int i = 1; i <= 10; i++) {
		int r = rand() % 6 + 1;
		printf("%d\n", r);
/*		switch (r) {
//		    case 1: a++; break;
//		    case 2: b++; break;
//		    case 3: c++; break;
//	        case 4: d++; break;
//          case 5: e++; break;
//          case 6: f++; break;

			case 1: count[0]++; break;
			case 2: count[1]++; break;
			case 3: count[2]++; break;
			case 4: count[3]++; break;
			case 5: count[4]++; break;
			case 6: count[5]++; break;

		}*/

		count[r - 1]++;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d의 개수 : %d\n", i+1, count[i]);
	}
/*	printf("2의 개수 : %d\n", b);
	printf("3의 개수 : %d\n", c);
	printf("4의 개수 : %d\n", d);
	printf("5의 개수 : %d\n", e);
	printf("6의 개수 : %d\n", f);*/
}