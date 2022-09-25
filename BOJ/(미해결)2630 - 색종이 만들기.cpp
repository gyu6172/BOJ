#include <stdio.h>

int paper[150][150];

int n;

int blueCnt, whiteCnt;
int blue, white;

void dfs(int x, int y, int n) {
	int i, j;
	for (i = y; i < y + n; i++) {
		for (j = x; j < x + n; j++) {
			if (paper[i][j])
				blueCnt++;
			else if (!paper[i][j])
				whiteCnt++;
		}
	}

	if (blueCnt && whiteCnt) {
		dfs(x, y, n / 2);
		dfs(x + (n / 2), y, n / 2);
		dfs(x, y + (n / 2), n / 2);
		dfs(x + (n / 2), y + (n / 2), n / 2);
	}
	else {
		if (blueCnt) {
			blue++;
			return;
		}
		else if (whiteCnt) {
			white++;
			return;
		}
	}
}

int main() {
	scanf("%d", &n);
	int i, j;

	for (i = 0; i < 128; i++) {
		for (j = 0; j < 128; j++) {
			paper[i][j] = 2;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &paper[i][j]);
		}
	}

	dfs(0, 0, n);

	printf("%d\n%d", white, blue);


}