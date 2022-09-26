#include <stdio.h>
int main() {
	//int i,j,k;
	//for (i = 5; i <= 20; i++) {
	//	for (j = 5; j <= 10; j++) {
	//		for (k = 1; k < j; k++) {

	//			int day = (i - j) / (j - k);
	//			if (j == i) {
	//				day = 1;
	//			}
	//			else if ((j - k) > (i - j)) {
	//				day = 2;
	//			}
	//			else {
	//				day++;
	//			}

	//			printf("a=%2d    b=%2d    v=%2d    rst=%d\n", j,k,i,day);
	//		}
	//	}
	//}




	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);

	int day = (v - a)/(a-b);
	if (a == v) {
		day=1;
	}
	else if ((a-b) > (v-a)) {
		day=2;
	}
	//아래가 잘못되었다.
	else if ((v - a) % (a - b) == 0) {
		day++;
	}
	else {
		day+=2;
	}

	printf("%d",day);

}