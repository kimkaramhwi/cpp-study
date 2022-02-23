#include "config.h"
#include <time.h>

void main() {

	const char *number[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	const char* symbol[] = { "¢¼","¡Þ","¢¾","¢¿" };

	int card[52];
	for (int i = 0; i < 52; i++) {
		card[i] = i;
	}
	for (int i = 0; i < 52; i++) {
//		printf("%2s ", number[(card[i] % 13)]);   //¼ýÀÚ¸¸
//		printf("%s ", symbol[(card[i] / 13)]);    //¹«´Ì¸¸
		printf("%s%2s ", symbol[(card[i] / 13)], number[(card[i] % 13)]);
		if ((i + 1) % 13 == 0) {
			printf("\n");
		}
	}
	printf("=========================== ¼¯±âÀü ============================\n");

	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		int r = rand() % 51 + 1;
		int temp = card[0];
		card[0] = card[r];
		card[r] = temp;
	}
	for (int i = 0; i < 52; i++) {
		printf("%s%2s ", symbol[(card[i] / 13)], number[(card[i] % 13)]);
		if ((i + 1) % 13 == 0) {
			printf("\n");
		}
	}
	printf("=========================== ¼¯ÀºÈÄ ============================\n");
	



}