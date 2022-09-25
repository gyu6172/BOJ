#include <stdio.h>
char rgb[110][110];
static int visit[110][110];
char str[110];
int n;

int normalCnt, specialCnt;

void dfs(int x, int y, char c) {
	visit[y][x] = 1;

	if (x > 0 && rgb[y][x - 1] == c && !visit[y][x - 1]) {
		dfs(x - 1, y, c);
	}
	if (y > 0 && rgb[y - 1][x] == c && !visit[y - 1][x]) {
		dfs(x, y - 1, c);
	}
	if (rgb[y][x + 1] == c && !visit[y][x + 1]) {
		dfs(x + 1, y, c);
	}
	if (rgb[y + 1][x] == c && !visit[y + 1][x]) {
		dfs(x, y + 1, c);
	}
}

int main() {
	scanf("%d", &n);

	int i, j;

	for (i = 0; i < n; i++) {
		scanf("%s", str);
		for (j = 0; str[j] != NULL; j++) {
			rgb[i][j] = str[j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (!visit[i][j]) {
				dfs(j, i, rgb[i][j]);
				normalCnt++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			visit[i][j] = 0;
			if (rgb[i][j] == 'G')
				rgb[i][j] = 'R';
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (!visit[i][j]) {
				dfs(j, i, rgb[i][j]);
				specialCnt++;
			}
		}
	}

	printf("%d %d", normalCnt, specialCnt);

}