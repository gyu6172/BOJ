#include <stdio.h>
int main() {
	int apart[15][14]={{1,2,3,4,5,6,7,8,9,10,11,12,13,14},};
	int t;
	scanf("%d",&t);
	int i,j,y;
	int k,n;
	for (i = 1; i <= 14; i++) {
		for (j = 0; j < 14; j++) {
			int sum=0;
			for (y = 0; y <= j; y++) {
				sum += apart[i-1][y];
			}
			apart[i][j] = sum;
		}
	}

	//for (i = 0; i < 15; i++) {
	//	for (j = 0; j < 14; j++) {
	//		printf("%d ", apart[i][j]);
	//	}
	//	printf("\n");
	//}
	
	for (i = 0; i < t; i++) {
		scanf("%d %d",&k,&n);
		printf("%d\n",apart[k][n-1]);
		
	}
	
}

