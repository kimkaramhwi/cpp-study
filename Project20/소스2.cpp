#include "config.h"

// �Լ��� main() �Լ� �ڿ� ������ ��� ������ �߻��ǹǷ� �ݵ�� main() �Լ� �ڿ��� ����� �Լ��� ������
// main()�Լ� �տ� ������� �Ѵ�. ==> �Լ��� ������ �Լ��� �Ӹ� �κ��� �ǹ��Ѵ�.

int total();
int total(int);
int total(int , int);

int main() {

	printf("1~100�� �հ� : %d\n", total());

	int n;
	printf("n �Է� : ");
	scanf_s("%d", &n);
	printf("1~%d�� �հ� : %d\n", n, total(n));
	printf("���μ� n : %d\n", n);

	int m;
	printf("n, m �Է� : ");
	scanf_s("%d %d", &n, &m);
	printf("%d~%d�� �հ� : %d\n", n, m, total(n, m));
}
int total() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	return sum;
}

int total(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	n = 999;
	printf("���μ� n : %d\n", n);
	return sum;
}

int total(int n, int m) {
	int sum = 0;
	for (int i = n; i <= m; i++) {
		sum += i;
	}
	return sum;
}