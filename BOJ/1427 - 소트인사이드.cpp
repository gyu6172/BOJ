#include <stdio.h>
int sortInside(int n);
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",sortInside(n));
}

int sortInside(int n)
{
	int str[15];
	int strIter=0;
	int num=n;
	int i,j;
	while (num != 0) {
		str[strIter] = num % 10;
		strIter++;
		num /= 10;
	}
	for (i = 0; i < strIter; i++) {
		for (j = i; j < strIter; j++) {
			if (str[j] > str[i]) {
				int tmp = str[j];
				str[j] = str[i];
				str[i] = tmp;
			}
		}
	}
	int rst=0;
	for (i = 0; i < strIter; i++) {
		rst = rst*10 + str[i];
	}
	return rst;
}
