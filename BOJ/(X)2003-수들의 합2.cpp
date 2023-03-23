#include <stdio.h>
#include <algorithm>
using namespace std;
int ijsum(int arr[], int st, int ed);
int main() {
	int arr[10000];

	int n, m, i, j;
	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int cnt = 0;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (ijsum(arr, i, j) == m) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}

int ijsum(int arr[], int st, int ed)
{
	int sum = 0;
	for (int i = st; i <= ed; i++) {
		sum += arr[i];
	}
	return sum;
}
