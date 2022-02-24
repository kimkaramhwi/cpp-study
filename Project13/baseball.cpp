#include "config.h"

void main() {

	int ball[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		int r = rand() % 9 + 1;
		swap(ball[0], ball[r]);
	}

	int level;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &level);

	printf("CPU : ");
	for (int i = 0; i < level; i++) {
		printf("%d", ball[i]);
	}
	printf("\n");

	int count = 0;
	int start = time(NULL);   // ���� ���۽ð��� �����Ѵ�.
	// ���⶧���� �ݺ��Ѵ�.
	while (true) {

		printf("USER : ");
		int user;
		scanf_s("%d", &user);
		count++;

		// ��Ʈ����ũ ������ ���� ������ ���Ѵ�.
		// ��Ʈ����ũ�� ���� ����ڰ� ���ڸ� �Է��� ������ �ٽ� ����� �ؾ� �ϹǷ� �ݺ� �ȿ��� �ʱ�ȭ ���Ѿ� �Ѵ�.

		int s = 0, b = 0;
		for (int i = level - 1; i >= 0; i--) {
			// ��Ʈ����ũ�� ������ ����.
			if (ball[i] == user % 10) {
				s++;
			}
			// ���� ������ ����
			for (int j = 0; j < level; j++) {
				if (ball[j] == user % 10) {
					b++;
				}
			}
				// ���� ������ �ϱ� ���� user�� 10���� ���� ������ �����Ѵ�.
				user /= 10;
		}

			if (s == level) {
				break;
			}
			printf("%d ��Ʈ����ũ %d ��\n", s, b - s);

			// ��Ʈ����ũ�� ������ ������ ������ �ݺ��� Ż���Ų��.
	}

	int end = time(NULL);
		printf("%d�� �ɷ��� %d�� ���� �����.", end-start, count);

}