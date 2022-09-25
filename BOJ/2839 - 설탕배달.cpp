#include <stdio.h>
int main() {
	int sugar[5001]={0,};
	sugar[3] = 1;
	sugar[5] = 1;
	int n;
	scanf("%d",&n);
	int i,j,k;
	for (i = 6; i <= n; i++) {
		int min = 10000;
		for (j = 1,k=i-1;; j++,k--) {
			if (k < j)
				break;
			if (sugar[j] != 0 && sugar[k] != 0) {
				if (min > sugar[j] + sugar[k]) {
					min = sugar[j]+sugar[k];
				}
			}
		}
		if (min != 10000) {
			sugar[i] = min;
		}
		
	}
	if (sugar[n] != 0) {
		printf("%d",sugar[n]);
	}
	else {
		printf("-1");
	}

}