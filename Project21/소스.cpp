#include "config.h"
#include "calendar.h"

void main() {

	printf("%s\n", isLeapYear(2020) ? "À±³â" : "Æò³â");
	printf("%d\n", lastDay(2020, 2));
	printf("%d\n", totalDay(2021, 12, 13));
	printf("%d\n", weekDay(2021, 12, 13));

}