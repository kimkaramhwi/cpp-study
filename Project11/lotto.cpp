#include "config.h"
#include <time.h>
#include <Windows.h>   //Sleep() �Լ��� ����� �� �ְ� ���ִ� ��� ����

void main() {

// ��÷�⸦ �غ��Ѵ�.
	int lotto[45];
// ��÷�⿡ ���� �ִ´�.
	for (int i = 0; i < 45; i++) {
		lotto[i] = i + 1;
	}
	for (int i = 0; i < 45; i++) {
		printf("%2d ", lotto[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}
	printf("\n============== ������ ===============\n");

// ���� ���´�.
// lotto[0]�� ���� lotto[1]~[44]�� ������ ��ġ�� ���� ��ȯ��Ų��.
	srand(time(NULL));      //���� �ʱ�ȭ
	for (int i = 0; i < 10000; i++) {
		int r = rand() % 44 + 1;
		int temp = lotto[0];
		lotto[0] = lotto[r];
		lotto[r] = temp;
//		swap(lotto[0], lotto[r]);   //�� �������� ���� ��ȯ�ϴ� �Լ�
	}
	for (int i = 0; i < 45; i++) {
		printf("%2d ", lotto[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		} 
	}
	printf("\n============== ������ ===============\n");

// lotto[0]~[5]�� 1�� ��ȣ lotto[6] ���ʽ�
	printf("1�� ��ȣ : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
		Sleep(1000);                //��ȣ �ȿ� ������ �ð�(1/1000��)��ŭ ���α׷��� �����.
	}
	printf("���ʽ� : %d\n", lotto[6]);
}