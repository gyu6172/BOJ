#include <stdio.h>

int width, height;
static int glacier[310][310];
static int chk[310][310];
static int visit[310][310];

int massCnt;
int hour = 1;

void dfs(int x, int y) {
	visit[y][x] = 1;

	int cnt = 0;
	if (glacier[y - 1][x] == 0) {
		cnt++;
	}
	if (glacier[y + 1][x] == 0) {
		cnt++;
	}
	if (glacier[y][x - 1] == 0) {
		cnt++;
	}
	if (glacier[y][x + 1] == 0) {
		cnt++;
	}
	chk[y][x] = cnt;

	if (glacier[y][x + 1] && !visit[y][x + 1]) {
		dfs(x + 1, y);
	}
	if (glacier[y][x - 1] && !visit[y][x - 1]) {
		dfs(x - 1, y);
	}
	if (glacier[y + 1][x] && !visit[y + 1][x]) {
		dfs(x, y + 1);
	}
	if (glacier[y - 1][x] && !visit[y - 1][x]) {
		dfs(x, y - 1);
	}
}

int main() {
	scanf("%d %d", &height, &width);

	int i, j;

	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			scanf("%d", &glacier[i][j]);
		}
	}

	while (1) {
		massCnt = 0;
		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				glacier[i][j] = glacier[i][j] - chk[i][j];
				visit[i][j] = 0;
				chk[i][j] = 0;
				if (glacier[i][j] < 0) {
					glacier[i][j] = 0;
				}
			}
		}
		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				if (glacier[i][j] && !visit[i][j]) {
					dfs(j, i);
					massCnt++;
				}
			}
		}
		if (massCnt > 1) {
			break;
		}
		else if (massCnt == 0) {
			printf("%d", 0);
			return 0;
		}
		hour++;
	}

	printf("%d", hour - 1);


}