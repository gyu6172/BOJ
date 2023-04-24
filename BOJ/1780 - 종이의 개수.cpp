#include <iostream>
using namespace std;
//			1, 0 -1 로만 채워진 종이의 개수
int rst[3] = {0,0,0};
void func(int** arr, int stx, int sty, int n) {
	int cnt1=0, cnt0=0, cnt_1=0;
	for (int i = sty; i < sty+n; i++) {
		for (int j = stx; j < stx+n; j++) {
			if (arr[i][j] == 1) {
				cnt1++;
			}
			else if (arr[i][j] == 0) {
				cnt0++;
			}
			else if (arr[i][j] == -1) {
				cnt_1++;
			}
		}
	}
	if (cnt1 != 0 && cnt0 == 0 && cnt_1 == 0) {
		rst[0]++;
		return;
	}
	else if (cnt1 == 0 && cnt0 != 0 && cnt_1 == 0) {
		rst[1]++;
		return;

	}
	else if (cnt1 == 0 && cnt0 == 0 && cnt_1 != 0) {
		rst[2]++;
		return;
	}
	else {
		if (n / 3 == 1) {
			rst[0] += cnt1;
			rst[1] += cnt0;
			rst[2] += cnt_1;
			return;
		}
		for (int i = sty; i < sty+n; i+=(n/3)) {
			for (int j = stx; j < stx+n; j+=(n/3)) {
				func(arr, j, i, n/3);
			}
		}
	}
}
int main() {
	int n;
	cin>>n;
	
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin>>arr[i][j];
		}
	}

	func(arr,0,0, n);

	for (int i = 2; i >= 0; i--) {
		cout<<rst[i]<<endl;
	}
}