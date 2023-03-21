#include <stdio.h>
#include <string.h>

void hanoi(int n, int st, int ed, int to) {
	if (n == 1) {
		printf("%d %d\n",st,ed);
	}
	else {
		hanoi(n-1,st,to,ed);
		printf("%d %d\n",st,ed);
		hanoi(n-1,to,ed,st);
	}
}

int main() {
	int n;
	scanf("%d",&n);
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		cnt *= 2;
	}
	printf("%d\n",cnt-1);
	hanoi(n,1,3,2);
	



}