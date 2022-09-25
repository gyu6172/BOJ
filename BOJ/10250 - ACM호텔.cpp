#include <stdio.h>
int main() {
	int t, h, w, n;
	int y = 1, x = 1;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		for (int j = 1; j < n; j++) {
			y++;
			if (y > h) {
				y -= h;
				x++;
			}
		}

		printf("%d\n", y * 100 + x);
		y = x = 1;
	}
}