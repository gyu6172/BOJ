#include <stdio.h>
int max(int a, int b) {
	if(a>b)return a;
	else return b;
}
int main() {
	int n, k;
	scanf("%d %d",&n,&k);

	static int back[100000];

	int i,j;
	for (i = 0; i < n; i++) {
		int w, v;
		scanf("%d %d",&w,&v);
		back[w]=v;
	}
	for (i = 1; i < k; i++) {
		if (back[i] != 0) {
			for (j = i; j < k; j++) {
				if (back[j] != 0 && i + j <= k) {
					back[i + j] = max(back[i] + back[j], back[i + j]);
				}
			}
		}
	}
	int maxV=0;
	for (i = 1; i <= k; i++) {
		maxV=max(maxV,back[i]);
	}
	printf("%d ",maxV);

}