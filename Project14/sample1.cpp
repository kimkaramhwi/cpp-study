#include "config.h"

void main() {

//  문자 배열에 문자열을 저장하려면 문자열의 끝을 의미하는 NULL문자(\0)를 붙여줘야 한다.
//  배열의 크기는 문자열을 구성하는 문자의 개수보다 1크게 만들어야 한다.
//	char data[] = {'k','o','r','e','a','i','t','\0'};
	char data[] = "koreait";

	for (int i = 0; data[i] != '\0'; i++) {
		printf("%c\n", data[i]);
	}
//	printf("\n");
	printf("%s\n", data);    // 문자 배열의 내용을 문자열로 한번에 출력하려면 %s에 배열명을 출력하면 된다.

	char name[11];
	printf("이름을 입력하세요 : ");
//  scanf를 이용해서 입력을 받을 경우 배열명에는 "&"를 붙이지 않는다.
//  배열명은 그 배열이 메모리에 생성된 시작 위치를 의미하는 번지 상수이다.
//  scanf_s()를 이용해서 문자열을 입력받아야 할 경우 3번째 인수로 입력받을 문자열의 크기(바이트)를 써줘야 한다.
//	scanf_s("%s", name, sizeof(name));
	cin >> name;
	printf("%s님 안녕하세요\n", name);

	char irum[11];
//  문자 배열에 "="을 이용해서 값을 넣을 수 있는 경우는 배열을 선언할 때만 가능하다.
//  문자 배열의 내용을 다른 문자 배열에 넣어야 한다면 strcpy(사본, 원본) 함수를 사용한다.
//	irum = name;  오류발생
	strcpy_s(irum, name);
	printf("%s님 안녕하세요\n", irum);
}