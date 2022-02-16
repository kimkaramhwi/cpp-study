#include "config.h"

void main() {

	int year, month, day;
	printf("요일을 계산할 년, 월, 일 : ");
	scanf_s("%d %d %d", &year, &month, &day);

// 1년 1월 1일부터 전년도 12월 31일까지 지난 날짜의 합계를 계산한다.
	int sum = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

// 전년도까지 날짜의 합계에 전달까지의 날짜를 더한다.
	int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	m[1] = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
	for (int i = 1; i < month; i++) {
	/*	switch (i) {
		case 2:
			sum += year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28; break;
		case 4: case 6: case 9: case 11:
			sum += 30; break;
		default:
			sum += 31;
		}*/
		sum += m[i - 1];
	}

// 전달까지 지난 날수에 일을 더한다.
	sum += day;
//	printf("%d\n", sum % 7);

/*	switch (sum % 7) {
	case 0: printf("일요일"); break;
	case 1: printf("월요일"); break;
	case 2: printf("화요일"); break;
	case 3: printf("수요일"); break;
	case 4: printf("목요일"); break;
	case 5: printf("금요일"); break;
	case 6: printf("토요일"); break;
	}*/

// 문자열을 기억하는 배열을 만들어 보자 ==> 문자 배열 이름 앞에 "*"를 붙여주면 문자열을 기억하는 배열이 된다.
	const char *week[] = {"일","월","화","수","목","금","토"};
	printf("%s요일\n", week[sum % 7]);


}