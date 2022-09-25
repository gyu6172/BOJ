#include <stdio.h>
int isPrime(int n);
int main() {
	while (1) {
		int n;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		if (n == 1) {
			printf("1\n");
			continue;
		}
		int cnt=0;
		for (int i = n + 1; i < 2 * n; i++) {
			if (isPrime(i)) {
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}

int isPrime(int n)
{
	int cnt=0;
	int i,j;
	for (i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2 || n==2 || n==3) {
		return 1;
	}
	else {
		return 0;
	}
	
}
