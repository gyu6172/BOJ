#include <stdio.h>
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int s1=0,s2=0;
	s1 = (a%10)*100+(a%100/10)*10+(a/100);
	s2 = (b % 10) * 100 + (b % 100 / 10) * 10 + (b / 100);
	printf("%d", (s1>s2) ?s1:s2);
}