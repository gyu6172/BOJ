#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	int rst=0;
	for (i = 0; i < n; i++) {
		char str[101];
		scanf("%s",str);
		int len=strlen(str);
		int chkArr[26]={0,};
		int groupCnt=1, charCnt=1;
		if (len == 1) {
			rst++;
			continue;
		}
		charCnt++;
		groupCnt++;
		chkArr[str[0] - 'a'] = 1;
		for (j = 1; j < len; j++) {
			char a=str[j-1];
			if (chkArr[str[j] - 'a'] == 0) {
				charCnt++;
				groupCnt++;
				chkArr[str[j] - 'a'] = 1;
			}
			else {
				if (str[j] != a) {
					groupCnt++;
				}
			}
		}
		//뭉탱이의 개수와 나온 알파벳의 개수가 같아야만 그룹단어이다.
		if(groupCnt==charCnt)
			rst++;

	}
	printf("%d",rst);
}