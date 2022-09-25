#include <stdio.h>
int hansu(int n);
int main() {
	int n;
	scanf("%d",&n);
	int i,j;
	int cnt=0;
	for (i = 1; i <= n; i++) {
		if (hansu(i)) {
			cnt++;
		}
			
	}
	printf("%d",cnt);
	
}

int hansu(int n)
{	
	//2468
	int arr[5];
	int arrIter = 0;
	while (n>=10) {
		int a = n%10;
		n /= 10;
		int b = n%10;
		int d = b-a;
		arr[arrIter] = d;
		arrIter++;
	}
	int chk=0;
	for (int i = 0; i < arrIter-1; i++) {
		if(arr[i] != arr[i+1])
			chk = 1;
	}
	if(!chk)
		return 1;
	else
		return 0;
}
