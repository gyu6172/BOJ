#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);

	//(A+1)*n - d를 말하면 짐
	//(A+1)*n-d = 1일경우 이김.
	//모든 자연수 n에 대해
	//(A+1)*n-d=31
	//d = (A+1)*n-31;
	for (int i = 1; i <= a; i++) {
		int sum = 0;
		for (sum = 0; sum < 31; sum += (i + 1)) {}
		int d = sum - 31;
		if (i - d == 0) {
			printf("%d\n", i);
		}
	}



}