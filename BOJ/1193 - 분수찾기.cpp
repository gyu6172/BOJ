#include <stdio.h>
int main() {
	int lv = 1;
	int x;
	scanf("%d",&x);

	int sum=1;
	int aIter=0;
	int bIter=1;
	int a=1,b=1;
	while (1) {
		if (a <= x && x <= b) {
			break;
		}
		lv++;
		aIter++;
		bIter++;
		a += aIter;
		b += bIter;
	}
	int tmp = x-a;
	int n1=1,n2=lv;
	if (lv % 2 == 0) {
		for (int i = 0; i < tmp; i++) {
			n1++;
			n2--;
		}
		printf("%d/%d", n1, n2);
	}
	else {
		for (int i = 0; i < tmp; i++) {
			n1++;
			n2--;
		}
		printf("%d/%d", n2, n1);
	}
	
	

}