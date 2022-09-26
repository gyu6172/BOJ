#include <stdio.h>
int isPrime(int n);
int main() {
	int prime[10001]={0,0,};
	int t,i,j,k;
	for (i = 2; i <= 10000; i++) {
		if (isPrime(i)) {
			prime[i] = 1;
		}
	}
	scanf("%d",&t);
	for (i = 0; i < t; i++) {
		int n;
		scanf("%d",&n);

		int chk=0;
		for (j = n / 2; j >= 2; j--) {
			if (prime[j] && prime[n - j]) {
				printf("%d %d\n",j,n-j);
				break;
			}
		}
	}
}
int isPrime(int n)
{
	if (n == 2)
		return 1;
	else if (n % 2 == 0)
		return 0;
	else {
		int cnt = 0;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0)
				cnt++;
		}
		if (cnt == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}

}