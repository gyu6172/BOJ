#include <stdio.h>
#include <string.h>
int main() {
	char s[101];
	int chk[26]={0,};
	scanf("%s",s);
	int n=strlen(s);
	int i;
	for (i = 0; i < 26; i++) {
		chk[i]=-1;
	}
	for (i = 0; i < n; i++) {
		if(chk[s[i] - 'a']==-1)
			chk[s[i] - 'a']=i;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ",chk[i]);
	}
}