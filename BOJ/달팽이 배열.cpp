#include <stdio.h>
#include <stdlib.h>
typedef struct Point {
	int x,y;
}Point;
void func(int **arr, Point st, Point ed, int cnt, int n, int m) {
	if(st.x>ed.x || st.y>ed.y)return;
	for (int j = st.x; j <= ed.x; j++) {
		arr[st.y][j] = cnt++;
	}
	for (int i = st.y+1; i <= ed.y; i++) {
		arr[i][ed.x] = cnt++;
	}
	if(cnt>n*m)return;
	for (int j = ed.x-1; j >= st.x; j--) {
		arr[ed.y][j] = cnt++;
	}
	for (int i = ed.y-1; i > st.y; i--) {
		arr[i][st.x] = cnt++;
	}
	st.x++;
	st.y++;
	ed.x--;
	ed.y--;
	func(arr, st, ed, cnt, n, m);
}
int main() {
	int n,m;
	scanf("%d %d",&n,&m);

	int cnt=1;

	int **arr = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int)*m);
	}

	Point st={0,0};
	Point ed={m-1,n-1};
	
	func(arr, st, ed, 1, n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}


}