#include "config.h"
#include "���.h"

// �Լ��� main() �Լ� �ڿ� ������ ��� ������ �߻��ǹǷ� �ݵ�� main() �Լ� �ڿ��� ����� �Լ��� ������
// main()�Լ� �տ� ������� �Ѵ�. ==> �Լ��� ������ �Լ��� �Ӹ� �κ��� �ǹ��Ѵ�.


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
