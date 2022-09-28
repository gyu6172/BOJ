#include <stdio.h>
#include <string.h>
int main() {
	char *arr[20001];
	int n;
	scanf("%d",&n);
	int i,j,k;
	char **p;
	p=arr;
	for (i = 0; i < n; i++) {
		getchar();
		char str[51];
		scanf("%s",str);
		*p = str;
		p++;
	}
	for (i = 0; i < n; i++) {
		printf("%s\n",arr[i]);
	}
}