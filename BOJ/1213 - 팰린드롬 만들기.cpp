#include <stdio.h>
#include <string.h>
int canPallindrome(int arr[]);
int main() {
	char str[51];
	char rStr[51];
	int cArr[26] = { 0, };
	scanf("%s", str);
	int i, j, k;
	int len = strlen(str);

	for (i = 0; i < len; i++) {
		cArr[str[i] - 'A'] += 1;
	}
	int canPallin = canPallindrome(cArr);
	if (canPallin == 0) {
		printf("I'm Sorry Hansoo");
		return 0;
	}
	//알파벳이 짝수개인것만 있음
	int iter = 0;
	for (i = 0; i < 26; i++) {
		if (cArr[i] >= 2) {
			rStr[iter] = 'A' + i;
			rStr[len - iter - 1] = 'A' + i;
			cArr[i] -= 2;
			iter++;
			i--;
		}
		if (iter == len / 2)
			break;
	}
	if (canPallin == 2) {	//알파벳 홀수개인개 하나 있음
		for (i = 0; i < 26; i++) {
			if (cArr[i] == 1) {
				rStr[iter] = 'A'+i;
				iter++;
				cArr[i] -= 1;
			}
		}
	}
	rStr[len] = NULL;
	printf("%s", rStr);

}

int canPallindrome(int arr[])
{
	int i;
	int cnt = 0;
	for (i = 0; i < 26; i++) {
		if (arr[i] % 2 == 1)
			cnt++;
	}
	if (cnt == 0)
		return 1;
	else if (cnt == 1)
		return 2;
	else
		return 0;
}
