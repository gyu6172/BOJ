#include <stdio.h>
int fibonacci(int n) {
	if (n == 0) {
		printf("0");
		return 0;
	}
	else if (n == 1) {
		printf("1");
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main() {
	int dp0[50];
	int dp1[50];
	//dp0[a] = b 는 fibonacci(a)가 0을 출력하는 횟수는 b번. dp1도 마찬가지

	dp0[0] = 1;
	dp1[0] = 0;

	dp0[1] = 0;
	dp1[1] = 1;

	dp0[2] = 1;
	dp1[2] = 1;

	dp0[3] = 1;
	dp1[3] = 2;

	int t, n;
	scanf("%d", &t);

	int i;

	for (i = 4; i < 50; i++) {
		dp0[i] = dp0[i - 2] + dp0[i - 1];
		dp1[i] = dp1[i - 2] + dp1[i - 1];
	}

	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%d %d\n", dp0[n], dp1[n]);
	}

}