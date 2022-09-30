#include <stdio.h>
#include <string.h>
int main() {
	char A[51],B[51];
	scanf("%s", A);
	getchar();
	scanf("%s", B);
	int aLen = strlen(A);
	int bLen = strlen(B);
	int i,j,k;
	int maxCnt=0;
	for (i = 0;i<bLen-aLen+1; i++) {
		int cnt=0;
		for (j = 0;j<aLen; j++) {
			if (A[j] == B[i+j]) {
				cnt++;
			}
		}
		if (maxCnt < cnt) {
			maxCnt = cnt;
		}
	}
	printf("%d",aLen-maxCnt);

}