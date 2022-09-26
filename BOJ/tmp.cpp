#include <stdio.h>
int main() {
	int day=1;
	int now=0;
	int i, j, k;
	
	for (i = 10; i <= 20; i++) {
		for (j = 5; j <= 10; j++) {
			for (k = 1; k < j; k++) {
				while (1) {
					now += j;
					if (now >= i) {
						break;
					}
					now -= k;
					day++;
				}
				printf("a=%2d    b=%2d    v=%2d    rst=%d\n", j, k, i, day);
				day=1;
				now=0;
			}
		}
	}
}