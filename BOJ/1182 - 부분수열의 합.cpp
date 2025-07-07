#include <iostream>
using namespace std;

int n, s;		//n은 정수의 개수이고, 부분수열중에서 합이 s가 되는 부분수열의 개수를 출력할 예정
int set[30];
int rst_cnt;

//배열의 시작인덱스를 받아 그 수가 포함된 수열을 원소가 1개인 것부터 n개까지 체크.
//dfs함수에다가 배열을 같이 넘긴다면?
int cnt=0;

void sumSet(int index, int sum, bool add_or_not) {
	if (sum == s) {
		if (add_or_not) {
			cnt++;
		}
	}
	if (index >= n-1) {
		return;
	}

	sumSet(index + 1, sum+set[index+1], true);
	sumSet(index + 1, sum, false);
	
}

int main() {
	cin>>n>>s;
	
	for (int i = 0; i < n; i++) {
		cin>>set[i];
	}
	
	//현재걸 더하거나 안더하거나
	sumSet(0, set[0], true);
	sumSet(0, 0, false);
	
	cout<<cnt;
}