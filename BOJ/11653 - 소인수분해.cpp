#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int iter=2;
	while (n!=1) {
		if (n % iter == 0) {
			printf("%d\n",iter);
			n /= iter;
		}
		else {
			iter++;
		}
	}
}