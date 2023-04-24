#include <iostream>
using namespace std;
int blueCnt=0;
int whiteCnt=0;
void dfs(int arr[][200], int stx, int sty, int n) {
	int bc=0,wc=0;
	for (int y = sty; y < sty+n; y++) {
		for (int x = stx; x < stx+n; x++) {

			if (arr[y][x] == 0) {
				wc++;
			}
			else if (arr[y][x] == 1) {
				bc++;
			}
		}
	}
	if (bc == 0 && wc > 0) {
		whiteCnt++;
		return;
	}
	else if (bc > 0 && wc == 0) {
		blueCnt++;
		return;
	}
	else {
		if (n / 2 == 1) {
			blueCnt += bc;
			whiteCnt += wc;
			return;
		}
		for (int y = sty; y < sty + n; y += (n / 2)) {
			for (int x = stx; x < stx + n; x += (n / 2)) {
				dfs(arr, x, y, n/2);
			}
		}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[200][200];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin>>arr[i][j];
		}
	}

	dfs(arr,0,0,n);

	cout<<whiteCnt<<endl<<blueCnt;

}