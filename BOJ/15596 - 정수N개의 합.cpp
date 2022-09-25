#include <stdio.h>
long long int sum(int *a, int n);
int main() {
	//int n;
	//int ar[100];
	//scanf("%d",&n);
	//for (int i = 0; i < n; i++) {
	//	scanf("%d",&ar[i]);
	//}
	//int tot = sum(ar,n);
	//printf("%d",tot);
}

long long int sum(int* a, int n)
{
	int total=0;
	for (int* p = a; p < a + n; p++) {
		total += *p;
	}
	return total;
}
