#include <iostream>
#include <vector>
using namespace std;
#define MIN(a,b) (a>b)? b:a

int getDiff(char arr1[][50], char arr2[][50], int n, int m) {
	int rst=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr1[i][j] != arr2[i][j]) rst++;
		}
	}
	return rst;
}

int main() {
	int n,m;
	char board[50][50];

	cin>>n>>m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin>>board[i][j];
		}
	}

	char chess_white[50][50], chess_black[50][50];
	bool flag = true;
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			chess_white[i][j] = (flag)? 'W':'B';
			chess_black[i][j] = (flag)? 'B':'W';
			flag = !flag;
		}
		flag = !flag;
	}

	int min_diff_white = INT_MAX, min_diff_black= INT_MAX;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {

			int diff_white = 0, diff_black=0;

			if(y > n-8) continue;
			if(x > m-8) continue;

			for (int v = 0; v < 8; v++) {
				for (int u = 0; u < 8; u++) {

					if (chess_white[v][u] != board[y+v][x+u]) diff_white++;
					if (chess_black[v][u] != board[y+v][x+u]) diff_black++;

				}
			}

			if(min_diff_black > diff_black) min_diff_black = diff_black;
			if(min_diff_white > diff_white) min_diff_white = diff_white;

		}
	}

	if(min_diff_black > min_diff_white) cout<<min_diff_white;
	else cout<<min_diff_black;
	
	
}
