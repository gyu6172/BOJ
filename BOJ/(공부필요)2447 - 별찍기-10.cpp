//아 개어렵네 이해 못함 ㅅㄱ
#include <stdio.h>
#include <stdlib.h>
void func(int i, int j, int n) {
	if ((i/n) % 3 == 1 && (j/n) % 3 == 1) {
		printf(" ");
	}
	else {
		if (n == 1) {
			printf("*");
		}
		else {
			func(i,j,n/3);
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			func(i, j, n);
		}
		printf("\n");
	}

}