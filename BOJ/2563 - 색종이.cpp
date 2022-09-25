#include <stdio.h>
int main() {
	int cnt;
	scanf("%d", &cnt);

	static int paper[100][100];
	int papercnt = 0;

	int leftgap, downgap;

	int i, j, k;
	for (i = 0; i < cnt; i++) {
		scanf("%d %d", &leftgap, &downgap);

		for (j = leftgap; j < leftgap + 10; j++) {
			for (k = downgap; k < downgap + 10; k++) {
				paper[k][j] = 1;
			}
		}
	}

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (paper[i][j])
				papercnt++;
		}
	}
	printf("%d", papercnt);
}