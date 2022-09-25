#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);

	if(n<10)
		n = n*10;

	int cnt=0;
	int tmp = n;
	while (1) {
		int a = n%10;
		int b = ((n/10)+(n%10))%10;
		int c = a*10 + b;
		cnt++;
		if(c==tmp)
			break;
		n = c;
	}
	printf("%d",cnt);
}