#include "config.h"
#include <stdint.h>   //rand(), srand() �Լ��� ����� �� �ְ� ���ִ� ��� ����
#include <time.h>     // time() �Լ��� ����� �� �ְ� ���ִ� ��� ����

void main() {

// time(NULL) : 1970�� 1�� 1�� �������� �� �Լ��� ����Ǵ� �������� ���� �ð��� �� ������ ���´�.
	printf("���н� Ÿ�� : %d\n", time(NULL));

// srand(����) : ��ȣ ���� ���� ���� ������ �ʱ�ȭ ��Ų��.
// rand() : ������ �߻���Ű�� �Լ�, �ݵ�� ������ �ʱ�ȭ ���Ѿ� �Ѵ�.
	srand(time(NULL));
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand()% 6 + 1);
	}




}