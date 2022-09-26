#include <stdio.h>
int main() {
	int arr[9][9];
	int i,j;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int max=-1;
	int maxIPos, maxJPos;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxIPos = i;
				maxJPos = j;
			}
		}
	}
	printf("%d\n%d %d",max,maxIPos+1, maxJPos+1);
}