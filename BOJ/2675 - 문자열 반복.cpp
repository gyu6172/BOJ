#include <stdio.h>
#include <string.h>
int main() {
	int t;
	scanf("%d",&t);
	int i,j,k;
	for (i = 0; i < t; i++) {
		int n;
		char s[21], p[170];
		int pIter=0;
		scanf("%d %s",&n,s);
		
		int len=strlen(s);
		for (j = 0; j < len; j++) {
			for (k = 0; k < n; k++) {
				p[pIter] = s[j];
				pIter++;
			}
		}
		p[pIter]=NULL;
		printf("%s\n",p);

	}
}