#include <stdio.h>
#include <string.h>
int main() {
	char str[1000002];
	char boomStr[37];

	scanf("%s", str);
	getchar();
	scanf("%s", boomStr);

	int i, j, k;
	int strLen = strlen(str);
	int boomLen = strlen(boomStr);
	int noBoom = 0;
	while (noBoom == 0) {
		noBoom = 1;
		for (i = 0; i < strLen; i++) {
			if (str[i] == boomStr[0]) {
				int chk = 1;
				for (j = 0; j < boomLen; j++) {
					if (str[i + j] != boomStr[j]) {
						chk = 0;
					}
				}
				if (chk) {
					noBoom = 0;
					for (j = i; j <= strLen - boomLen; j++) {
						str[j] = str[j + boomLen];
					}
					strLen -= boomLen;
					i--;
				}
			}
		}
	}
	if (strLen != 0) {
		for (k = 0; k < strLen; k++) {
			printf("%c", str[k]);
		}
	}
	else {
			printf("FRULA");
		}



}