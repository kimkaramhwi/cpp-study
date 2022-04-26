#include "config.h"

// call by value
// �Լ��� ���޵Ǵ� �����ʹ� �������� ���������� �ǵ����ִ� ���� return�ڿ� �� 1���� ����
// ���μ��� ���� �����ؼ� ���μ��� �����ϴ� ������� ���μ��� ���μ��� ������ �޸𸮸� ����ϹǷ� ���μ� ���� ����ȴ� �ϴ���
// ���μ��� ���� ������� �ʴ´�. ==> side effect(���ۿ�) ������ �߻����� �ʴ´�.
// ������ �Լ��� ������ �Լ��� ������ �޴´�.

// call by reference
// �Լ��� ���޵Ǵ� �����ʹ� �������� ���������� �ǵ����ִ� ���� ������ �޸𸮸� ���ؼ� �������� ����
// ���μ��� ���� ����� �ּҸ� ���μ��� �����ϴ� ������� ���μ��� ���μ��� ���� �޸𸮸� ����ϹǷ� ���μ� ���� ����Ǹ�
// ���μ��� ���� ���� ����ȴ�. ==> side effect(���ۿ�) ������ �߻��ȴ�.
// �ּҸ� �Լ��� ������ �Լ��� �����ͷ� �޴´�.

void change(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}
void change(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;

}
void change(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;

}

void main() {

	int a = 3, b = 4;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	change(&a, &b);

	double c = 1.5, d = 0.9;
	printf("c = %f, d = %f\n", c, d);
	change(&c, &d);
	printf("c = %f, d = %f\n", c, d);

	char ch1 = 'a', ch2 = 'A';
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);
	change(&ch1, &ch2);
	printf("ch1 = %c, ch2 = %c\n", ch1, ch2);
}