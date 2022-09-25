#include <stdio.h>
int main() {
	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);

	int day = (v - a)/(a-b);
	if (a == v) {
		day=1;
	}
	else if ((a-b) > (v-a)) {
		day=2;
	}
	else {
		day++;
	}


	printf("%d",day);

}