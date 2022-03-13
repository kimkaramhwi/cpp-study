int total() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	return sum;
}

int total(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	n = 999;
	printf("°¡ÀÎ¼ö n : %d\n", n);
	return sum;
}

int total(int n, int m) {
	int sum = 0;
	for (int i = n; i <= m; i++) {
		sum += i;
	}
	return sum;
}