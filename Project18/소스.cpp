#include "config.h"

void main() {

	int n;
	printf("������ ����� ������ ���� : ");
	scanf_s("%d", &n);
	int* data = (int*)malloc(sizeof(int) * n);    //����
	int* rank = new int[n];                       //����

	printf("������ ����� ���� : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
		rank[i] = 1;                         //������ ����� �����Ҵ� ������ 1�� �ʱ�ȭ ��Ų��.

	}

//  if�� �ε�ȣ�� �ݴ�� �����ϸ� ������ 1��(�������� ����)�� ������ ���ȴ�.
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (data[i] > data[j]) {
//              i��° ������ ũ�ٸ� j��° ������ ������ 1���� ��Ų��.
				rank[j]++;
			}
			else if (data[i] < data[j]) {
//              j��° ������ ũ�ٸ� i��° ������ ������ 1���� ��Ų��.
				rank[i]++;
			}
		
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%3d���� %d�� �Դϴ�.\n", data[i], rank[i]);
	}
	// 10���� ����Ѵٸ� 100���� �ƴ϶� 45������ ��갡��
}