#include <stdio.h>
#include <string.h>
int main() {
	char vps[60];
	char chk[5];
	int sum = 0;
	int t;

	scanf("%d", &t);
	int i, j;
	for (i = 0; i < t; i++) {
		scanf("%s", vps);
		for (j = 0; vps[j] != NULL; j++) {
			if (sum < 0) {
				break;
			}
			if (vps[j] == '(')
				sum++;
			else if (vps[j] == ')')
				sum--;
		}
		if (sum != 0) {
			printf("NO");
		}
		else {
			printf("YES");
		}
		printf("\n");
		sum = 0;

	}


}