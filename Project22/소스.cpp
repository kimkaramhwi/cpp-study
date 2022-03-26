#include "calendar.h"
#include "config.h"

void main() {

	int year, month;
	printf("달력을 출력할 년, 월 : ");
	scanf_s("%d %d", &year, &month);
	printf("============================\n");
	printf("        %4d년 %02d월\n", year, month);
	printf("============================\n");
	printf(" 일  월  화  수  목  금  토 \n");
	printf("============================\n");

// 1일이 출력될 요일 위치를 맞추기 위해 1일의 요일만큼 반복하며 빈 칸을 출력한다.
	for (int i = 1; i <= weekDay(year, month, 1); i++) {
		printf("    ");
	}

// 달력을 출력할 달의 1일부터 그 달의 마지막 날짜만큼 반복하며 날짜를 출력한다.
	for (int i = 1; i <= lastDay(year, month); i++) {
		printf(" %2d ", i);
// 출력한 날짜(i)가 토요일이고 그 달의 마지막 날짜가 아니면 줄을 바꿔준다.
		if (weekDay(year, month, i) == 6 && i != lastDay(year, month)) {
			printf("\n");
		}
	}
	printf("\n============================\n");
}