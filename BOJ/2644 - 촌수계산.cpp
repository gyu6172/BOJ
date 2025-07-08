#include <iostream>

using namespace std;

class Person {
public:
	int num=0;
	Person* parent = nullptr;
	Person* child[101];
	int child_cnt=0;

	Person(){}

	Person(int n) {
		num = n;
	}

	void addChild(Person* p) {
		child[child_cnt++] = p;
		p->parent = this;
	}
};

int g_cnt;
bool chk[101]={1,0,};

void backTracking(Person* p, int target, int cnt) {
	chk[p->num] = true;
	if (p->num == target) {
		g_cnt = cnt;
		return;
	}
	if (p->num == 0) {
		return;
	}

	if (p->parent != nullptr && !chk[p->parent->num]) {
		backTracking(p->parent, target, cnt+1);
	}
	for (int i = 0; i < p->child_cnt; i++) {
		if (!chk[(p->child)[i]->num]) {
			backTracking((p->child)[i], target, cnt+1);
		}
	}
}

int main() {
	int n, p1,p2, m;
	cin>>n;

	cin>>p1>>p2;
	Person persons[101];
	Person* first_p = new Person(0);
	for (int i = 1; i <= n; i++) {
		persons[i].num = i;
		if (i == p1) {
			first_p = &persons[i];
		}
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int a,b;
		cin>>a>>b;
		
		persons[a].addChild(&persons[b]);
	}

	backTracking(first_p, p2, 0);

	if (g_cnt == 0) {
		cout<<"-1";
	}
	else {
		cout<<g_cnt;
	}

}