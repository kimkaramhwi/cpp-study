#include "config.h"
#include <stdint.h>
#include <time.h> 

void main() {

	srand(time(NULL));
//	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
// �迭�̶� ���� �̸����� �������� �����Ҹ� ����� ����� �� �ְ� �� ���̴�.
// �迭�� ÷��(index)�� 1�� �ƴϰ� 0���� �����ϴ� �Ϳ� ��������
// �迭 ���� ���, ÷�ڴ� �迭�� ũ��� ������ �����Ѵ�.
// �ڷ��� �迭��[÷��];         //������ ũ�⸸ŭ �迭�� �����Ѵ�. �迭���� �����Ⱑ ����ִ�.
// �ڷ��� �迭��[] = {�ʱ�ġ};  //{}�� ������ �ʱ�ġ�� ������ŭ �迭�� ����� �ʱ�ġ�� �ʱ�ȭ ��Ų��.
	int count[6] = { 0,};       // ũ�⸸ŭ �迭�� �����ϰ� ��� 0���� �ʱ�ȭ ��Ų��.

	for (int i = 1; i <= 10; i++) {
		int r = rand() % 6 + 1;
		printf("%d\n", r);
/*		switch (r) {
//		    case 1: a++; break;
//		    case 2: b++; break;
//		    case 3: c++; break;
//	        case 4: d++; break;
//          case 5: e++; break;
//          case 6: f++; break;

			case 1: count[0]++; break;
			case 2: count[1]++; break;
			case 3: count[2]++; break;
			case 4: count[3]++; break;
			case 5: count[4]++; break;
			case 6: count[5]++; break;

		}*/

		count[r - 1]++;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d�� ���� : %d\n", i+1, count[i]);
	}
/*	printf("2�� ���� : %d\n", b);
	printf("3�� ���� : %d\n", c);
	printf("4�� ���� : %d\n", d);
	printf("5�� ���� : %d\n", e);
	printf("6�� ���� : %d\n", f);*/
}