#include <stdio.h>
#include <math.h>

int main() {
	int n, m;
	static int eratos[1000010];		//eratos[a] 가 0이면 소수, 1이면 소수가아님.

	scanf("%d %d", &n, &m);
	int i, j;

	eratos[1] = 1;
	eratos[2] = 0;

	for (i = n; i <= m; i++) {
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				eratos[i] = 1;

			}
		}
	}

	for (i = n; i <= m; i++) {
		if (eratos[i] == 0)
			printf("%d\n", i);
	}
}