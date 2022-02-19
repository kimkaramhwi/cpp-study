#include "config.h"

void main() {

// while은 최초 진입 조건이 거짓이면 {} 블록을 한 번도 실행하지 않는다.
// while(조건식) {
//        조건식이 참인 동안 실행할 문장;
//        ....;
//      }

	int sum = 0, i = 0;
	while (i > 100) {
		sum += ++i;
	}
	printf("1~100의 합계 : %d\n", sum);

// do~while은 최초 진입 조건이 거짓이더라도 {} 블록을 한번은 실행한다.
//    do {
//         조건식이 참인 동안 실행할 문장;
//    } while(조건식);         //";"을 반드시 찍어줘야 한다.

	sum = i = 0;     //변수를 선언할 때는 사용할 수 없다.
	do {
		sum += ++i;
	} while (i > 100);
	printf("1~100의 합계 : %d\n", sum);

}