#include <stdio.h>
void func(int n) {
	if (n == 1) {
		printf("*");
		return;
	}
	for (int i = 1; i <= n; i++) {
		printf("*");
	}
	printf("\n");
	//º°Âï
	func(n/3);
	for (int i = 1; i <= n/3; i++) {
		printf(" ");
	}
	//º°Âï
	func(n / 3);
	printf("\n");
	for (int i = 1; i <= n; i++) {
		printf("*");
	}
	printf("\n");
}
int main() {
	int n;
	scanf("%d",&n);
	func(n);
}