#include <iostream>
using namespace std;

int n, s;		//n�� ������ �����̰�, �κм����߿��� ���� s�� �Ǵ� �κм����� ������ ����� ����
int set[30];
int rst_cnt;

//�迭�� �����ε����� �޾� �� ���� ���Ե� ������ ���Ұ� 1���� �ͺ��� n������ üũ.
//dfs�Լ����ٰ� �迭�� ���� �ѱ�ٸ�?
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
	
	//����� ���ϰų� �ȴ��ϰų�
	sumSet(0, set[0], true);
	sumSet(0, 0, false);
	
	cout<<cnt;
}