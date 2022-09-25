#include <stdio.h>
int main() {
	int d1, d2;
	int cnt = 0;

	scanf("%d %d", &d1, &d2);

	static int circle[360];			//circle[a] = 0 은 a각도에서 무대를 봐라보면 가리지 않는다.

	int i, j;

	if (d2 < 360) {
		for (i = d1; i <= d2; i++) {
			for (j = 0; j < 360; j += (360 / i)) {
				circle[j] = 1;
			}
		}
		for (i = 0; i < 360; i++) {
			if (circle[i])
				cnt++;
		}
		printf("%d", cnt);
	}

	else {
		printf("360");
	}

}