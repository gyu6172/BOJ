#include <stdio.h>
int main() {
	int n;
	char s[101];
	scanf("%d",&n);
	getchar();
	int i;
	int rst=0;
	for (i = 0; i < n; i++) {
		scanf("%c",&s[i]);
		rst+=s[i]-'0';
	}
	printf("%d",rst);
}