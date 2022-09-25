#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int cost=0;
	int benefit = c-b;
	cost += a;
	if(b>=c)
		printf("-1");
	else {
		printf("%d",a/benefit+1);
	}
}