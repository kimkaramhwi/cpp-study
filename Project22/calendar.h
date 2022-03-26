//인수로 년도를 넘겨받아 윤년, 평년 판단한 후 윤년이면 true(1), 평년이면 false(0)를 리턴하는 함수
int isLeapYear(int year) {
//년도가 4로 나눠 떨어지고 100으로 나눠떨어지지 않거나 400으로 나눠 떨어지면 윤년, 그렇지 않으면 평년
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

//인수로 년, 월을 넘겨받아 그 달의 마지막 날짜를 리턴하는 함수
int lastDay(int year, int month) {
    int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    m[1] = isLeapYear(year) ? 29 : 28;

    return m[month - 1];
}

//인수로 년, 월, 일을 넘겨받아 1년 1월 1일부터 지난 날짜의 합계를 계산해 리턴하는 함수
int totalDay(int year, int month, int day) {
//1년 1월 1일부터 전년도 12월 31일까지 지난 날짜의 합계를 계산한다.
    int sum = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
//전년도까지 지난 날짜의 합계에 전달까지 지난 날짜를 더한다.
    for (int i = 1; i < month; i++) {
        sum += lastDay(year, i);
    }
//전달까지 지난 날짜의 합계에 일을 더해서 리턴한다.
    return sum + day;
}

//키보드로 년, 월, 일을 넘겨받아 요일을 숫자로 리턴하는 함수
//일요일(0), 월요일(1), 화요일(2), 수요일(3), 목요일(4), 금요일(5), 토요일(6)
int weekDay(int year, int month, int day) {
    return totalDay(year, month, day) % 7;
}