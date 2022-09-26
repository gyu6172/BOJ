#include <stdio.h>
int isPrime(int n);
int main() {
	int prime[246913]={0,0,};
	for (int i = 0; i < 246913; i++) {
		if (isPrime(i)) {
			prime[i]=1;
		}
	}
	while (1) {
		int n,i;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		if (n == 1) {
			printf("1\n");
			continue;
		}
		int cnt=0;
		for (i = n + 1; i < 2 * n; i++) {
			if(prime[i])
				cnt++;
		}
		printf("%d\n",cnt);
	}
	//while (1) {
	//	int n;
	//	scanf("%d", &n);
	//	if (n == 0) {
	//		break;
	//	}
	//	if (n == 1) {
	//		printf("1\n");
	//		continue;
	//	}
	//	int cnt=0;
	//	if (n % 2 == 0) {
	//		for (int i = n + 1; i < 2 * n; i += 2) {
	//			if (isPrime(i)) {
	//				cnt++;
	//			}
	//		}
	//	}
	//	else {
	//		for (int i = n + 2; i < 2 * n; i += 2) {
	//			if (isPrime(i)) {
	//				cnt++;
	//			}
	//		}
	//	}
	//	
	//	printf("%d\n",cnt);
	//}
}

int isPrime(int n)
{
	if(n==2)
		return 1;
	else if(n%2==0)
		return 0;
	else {
		int cnt=0;
		for (int i = 2; i*i <= n; i++) {
			if(n%i==0)
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
