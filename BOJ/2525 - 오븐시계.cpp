#include <stdio.h>
int main() {
	int h,m;
	scanf("%d %d",&h,&m);
	int c;
	scanf("%d",&c);

	m += c;

	h += m/60;
	m = m%60;

	h = h%24;

	printf("%d %d",h,m);
}