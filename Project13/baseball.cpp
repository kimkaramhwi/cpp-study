#include "config.h"

void main() {

	int ball[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		int r = rand() % 9 + 1;
		swap(ball[0], ball[r]);
	}

	int level;
	printf("레벨을 입력하세요 : ");
	scanf_s("%d", &level);

	printf("CPU : ");
	for (int i = 0; i < level; i++) {
		printf("%d", ball[i]);
	}
	printf("\n");

	int count = 0;
	int start = time(NULL);   // 게임 시작시간을 저장한다.
	// 맞출때까지 반복한다.
	while (true) {

		printf("USER : ");
		int user;
		scanf_s("%d", &user);
		count++;

		// 스트라이크 개수와 볼의 개수를 구한다.
		// 스트라이크와 볼은 사용자가 숫자를 입력할 때마다 다시 계산을 해야 하므로 반복 안에서 초기화 시켜야 한다.

		int s = 0, b = 0;
		for (int i = level - 1; i >= 0; i--) {
			// 스트라이크의 개수를 센다.
			if (ball[i] == user % 10) {
				s++;
			}
			// 볼의 개수를 센다
			for (int j = 0; j < level; j++) {
				if (ball[j] == user % 10) {
					b++;
				}
			}
				// 다음 연산을 하기 위해 user를 10으로 나눈 몫으로 수정한다.
				user /= 10;
		}

			if (s == level) {
				break;
			}
			printf("%d 스트라이크 %d 볼\n", s, b - s);

			// 스트라이크의 개수와 레벨이 같으면 반복을 탈출시킨다.
	}

	int end = time(NULL);
		printf("%d초 걸려서 %d번 만에 맞췄다.", end-start, count);

}