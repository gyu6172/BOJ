#include <stdio.h>
#include <string.h>
int main() {
	char n[1010];
	int i;
	int sum = 0;

	while (1) {
		scanf("%s", n);
		if (n[0] == '0') {
			return 0;
		}
		for (i = 0; n[i] != NULL; i++) {
			sum += n[i] - 48;
		}
		while (sum >= 10) {
			sum = (sum % 10) + (sum / 10);
		}
		printf("%d\n", sum);
		sum = 0;
	}

}