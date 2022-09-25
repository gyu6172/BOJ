#include <stdio.h>
int d(int n);
int main() {
	int self[10100] = {0,};
	int i,j;
	for (i = 1; i <= 10000; i++) {
		for (j = 1; j <= i; j++) {
			if (d(j) == i) {
				self[i] = 1;
			}
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (!self[i]) {
			printf("%d\n", i);
		}
	}
}

int d(int n)
{
	int self = 0;
	self += n;
	while (n != 0) {
		self += n%10;
		n /= 10;
	}
	return self;
}
