#include <stdio.h>

int n, s;		//n은 정수의 개수이고, 부분수열중에서 합이 s가 되는 부분수열의 개수를 출력할 예정
int set[30];
int sum;
int cnt;

void dfs(int index) {
	if (index >= n) {
		return;
	}

	if (sum == s) {
		cnt++;
		return;
	}

	sum += set[index];
	dfs(index + 1);

	sum -= set[index];
	dfs(index + 1);

}

int main() {
	scanf("%d %d", &n, &s);

	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &set[i]);
	}

	dfs(0);

	printf("%d", cnt);

}