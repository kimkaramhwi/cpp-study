#include "config.h"

void main() {

	int n;
	printf("석차를 계산할 점수의 개수 : ");
	scanf_s("%d", &n);
	int* data = (int*)malloc(sizeof(int) * n);    //점수
	int* rank = new int[n];                       //석차

	printf("석차를 계산할 점수 : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
		rank[i] = 1;                         //석차를 기억할 기억장소는 무조건 1로 초기화 시킨다.

	}

//  if의 부등호를 반대로 변경하면 작은게 1등(오름차순 석차)인 석차가 계산된다.
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (data[i] > data[j]) {
//              i번째 점수가 크다면 j번째 점수의 석차를 1증가 시킨다.
				rank[j]++;
			}
			else if (data[i] < data[j]) {
//              j번째 점수가 크다면 i번째 점수의 석차를 1증가 시킨다.
				rank[i]++;
			}
		
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%3d점은 %d등 입니다.\n", data[i], rank[i]);
	}
	// 10개를 계산한다면 100번이 아니라 45번만에 계산가능
}