#include "config.h"

void main() {

	int c, cpp, java, total;
	double average;

//	printf("3���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d %d", &c, &cpp, &java);

	cout << "3���� ������ �Է��ϼ��� : ";
	cin >> c >> cpp >> java;

	total = c + cpp + java;
	average = (double) total / 3; //3�ڿ� .
//	printf("��� ���� : %f\n", average);
	cout << "��� ���� : " << average << endl;

// ����(��)������ : ���� ����� ��(true, 1), �Ǵ� ����(false, 0)�� ���´�.
// >(ũ��, �ʰ�), >=(ũ�ų� ����, �̻�), <(�۴�, �̸�), <=(�۰ų� ����, ����), ==(����), !=(���� �ʴ�)
// 
// �� ������
// && : ����, AND, ��� ������ ���� ��쿡�� ��, ~�̰�, ~�̸鼭, ~�߿���
// || : ����, OR, ��� ���� �߿��� �� �� �̻� ���� ��쿡 ��, ~�Ǵ�, ~�̰ų�
// ! : ������, NOT

// ���ǽ��� ������ ��� ������ ������ ���ٸ� else ���ϸ� ������� �ʴ´�.
// if(���ǽ�) {
// ���ǽ��� ����� ���� ��� ������ ����;
// ....;
//} else{
// ���ǽ��� ����� ������ ��� ������ ����;
// ...;
// }

	if (average >= 60) {
		printf("�հ�\n");
	}
	else {
		printf("���հ�\n");
	}


	if (average >= 90) {
		printf("��\n");
	}
	else if(average >= 80) {
		printf("��\n");
	}
	else if (average >= 70) {
		printf("��\n");
	}
	else if (average >= 60) {
		printf("��\n");
	}
	else {
		printf("��\n");
	}
}