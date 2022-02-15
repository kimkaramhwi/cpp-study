#include "config.h"
#include <stdint.h>   //rand(), srand() 함수를 사용할 수 있게 해주는 헤더 파일
#include <time.h>     // time() 함수를 사용할 수 있게 해주는 헤더 파일

void main() {

// time(NULL) : 1970년 1월 1일 자정부터 이 함수가 실행되는 순간까지 지난 시간을 초 단위로 얻어온다.
	printf("유닉스 타임 : %d\n", time(NULL));

// srand(정수) : 괄호 안의 값에 따라서 난수를 초기화 시킨다.
// rand() : 난수를 발생시키는 함수, 반드시 난수를 초기화 시켜야 한다.
	srand(time(NULL));
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand()% 6 + 1);
	}




}