#include "config.h"

void main() {

	int n;
	printf("������ ������ ���� : ");
	scanf_s("%d", &n);

//  C����� 1���� �迭 ���� �Ҵ�
//  malloc() : ��ȣ ���� ũ�⸸ŭ �޸𸮸� �������� �Ҵ��Ѵ�.
// 	���ڿ��� ����ϴ� �迭�� ���� �Ҵ����� ������ ��� ���ڿ��� ���� �ǹ��ϴ� '\0'�� ����� �������� �ʿ��ϹǷ�
//  1��ŭ ũ�� �������Ѵ�.
//	int *data = (int*)malloc(sizeof(int) * n);
//  C++���� 1���� �迭 ���� �Ҵ�
	int* data = new int[n];

//  memset(���� �Ҵ�� �迭��, �ʱ�ġ, ���� �Ҵ�� �迭�� ũ��) : ���� �Ҵ�� �޸𸮸� ����Ʈ ������ �ʱ�ȭ �Ѵ�.
	memset(data, 0, sizeof(int) * n);
//  memset(data, 1, sizeof(int) * n); ==> 0000 0001 0000 0001 0000 0001 0000 0001 ==> 16,843,009, 0���� �ʱ�ȭ�� ����

//  _msize() : ��ȣ���� �����Ϳ� �Ҵ�� �޸��� ũ�⸦ ���´�.
//  printf("data�� �Ҵ�� �޸� ũ�� : %d\n", _msize(data));

	printf("������ ������ �Է� : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
	
	}

	for (int i = 0; i < n-1; i++) {

		for (int j = i + 1; j < n; j++) {
			if (data[i] > data[j]) {
				swap(data[i], data[j]);
			}
		}
	}
	printf("���� ��� : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
    }
}