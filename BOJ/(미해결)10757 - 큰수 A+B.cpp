#include <stdio.h>
#include <string.h>
int main() {
	char n1[10000000001], n2[10000000001];
	int len1=strlen(n1), len2=strlen(n2);
	char rst[10000000001]={0,};
	int rstIter=0;
	scanf("%s %s",n1,n2);
	int i,j,k;
	if (len1 > len2) {
		for (i = len1 - 1, j = len2 - 1; i>=0 || j >= 0; i--,j--) {
			int num = (n1[i]-'0') + (n2[j]-'0') + rst[rstIter];
			if (num >= 10) {
				rst[rstIter] =  num%10;
				rstIter++;
				rst[rstIter] = num/10;
				rstIter++;
			}
			else {
				rst[rstIter] = num;
				rstIter++;
			}
		}
	}
	for (i = rstIter-1; i >= 0; i--){
		printf("%c",rst[i]);
	}
}