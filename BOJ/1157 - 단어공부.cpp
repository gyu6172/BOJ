#include <stdio.h>
int main() {
	char str[1000001];
	int arr[26]={0,};
	scanf("%s",str);
	int i;
	for (i = 0; str[i] != NULL; i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			arr[str[i]-'a'] += 1;
		}
		else if ('A' <= str[i] && str[i] <= 'Z') {
			arr[str[i]-'A'] += 1;
		}
	}
	int max=0,maxPos;
	for (i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxPos = i;
		}
	}
	int cnt=0;
	for (i = 0; i < 26; i++) {
		if (arr[i] == max) {
			cnt++;
		}
	}
	if (cnt >= 2) {
		printf("?");
	}
	else {
		printf("%c",'A'+maxPos);
	}

	
}