#include "config.h"

void main() {

	int n;
	printf("������ ������ ���� : ");
	scanf_s("%d", &n);
	int* data = (int*)malloc(sizeof(int) * n);

	printf("������ ������ �Է� : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
	}

	for (int i = 0; i < n-1; i++) {              //ȸ����

//  flag��� ������ �����ϰ� false�� �ʱ�ȭ �Ѵ�.
		bool flag = false;

		for (int j = 0; j < n - 1 - i; j++) {    //�񱳴��
//			printf("i = %d, j = %d\n", i, j);
			if (data[j] > data[j + 1]) {
				swap(data[j], data[j + 1]);      //����ȯ

//  ����ȯ �۾��� ����Ǹ� flag ������ ���� true�� �����Ѵ�.
//  �� ���̶� ����ȯ�� ����Ǹ�(�������̶��) flag������ ����ϴ� ���� true�� �ȴ�.
//  �� ���� ����ȯ�� ������� ������ flag ������ ����ϴ� ���� false�̴�.
				flag = true;
			}
		}

//  flag ������ ���� false�� �̹� ������ �Ϸ�� �����̹Ƿ� �ݺ��� Ż���Ѵ�.
		if (!flag) {
			break;
		}

		printf("%d ȸ�� ��� : ",i+1);
		for (int k = 0; k < n; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");
	}

}