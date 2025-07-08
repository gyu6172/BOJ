//메모
//BFS를 사용할 때 check배열에 마킹하는 건 큐에 넣을 때 하자.
//st가 ed와 같아지는 경우를 조심하자.

#include <iostream>
using namespace std;
class Point {
public:
	int x;
	int y;

	Point(){}
	Point(int xx, int yy) {
		x = xx;
		y = yy;
	}
	bool operator==(Point p2) {
		if (x == p2.x && y==p2.y) {
			return true;
		}
		else {
			return false;
		}
	}
	Point operator+(Point p) {
		Point p2(x+p.x, y+p.y);
		return p2;
	}
};

bool isIn(Point p, int n) {
	if ((0<=p.x && p.x<n) && (0<=p.y && p.y<n)) {
		return true;
	}
	else {
		return false;
	}
}

int move_cnt[90000];
Point visit[90000];

int main() {

	int test_case;
	cin>>test_case;

	for (int i = 0; i < test_case; i++) {
		bool check[301][301] = { 0, };
		int n;
		cin>>n;

		Point current_point;
		cin>>current_point.x>>current_point.y;
		Point end_point;
		cin>>end_point.x>>end_point.y;

		Point next_direction[8]={
			Point(1,-2),
			Point(2,-1),
			Point(2,1),
			Point(1,2),
			Point(-1,2),
			Point(-2,1),
			Point(-2,-1),
			Point(-1,-2),
		};


		int size=0;
		int iter=0;

		move_cnt[size] = 0;
		visit[size++] = current_point;

		while (iter<size) {
			current_point = visit[iter];

			if (current_point == end_point) {
				cout<<move_cnt[iter]<<endl;
				break;
			}

			for (int i=0;i<8;i++) {
				Point new_point = current_point+next_direction[i];
				if (isIn(new_point, n) && !check[new_point.y][new_point.x]) {
					check[new_point.y][new_point.x] = true;
					move_cnt[size] = move_cnt[iter]+1;
					visit[size++] = new_point;
				}
			}

			iter++;
		}
	}

}