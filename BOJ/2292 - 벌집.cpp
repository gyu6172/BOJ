#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);

	if (n == 1) {
		printf("1");
		return 0;
	}
	int i;
	int lv=2;
	int left=2,right=7;
	for (i = 1;; i++) {
		if (left <= n && n <= right) {
			printf("%d",lv);
			break;
		}
		else {
			left+=6*i;
			right+=6*(i+1);
			lv++;
		}
	}

}