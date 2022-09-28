#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int i, j, k;
	while (1) {
		char stack[250];
		int iter = 0;
		char str[250];
		int len=0;
		for (i = 0;; i++) {
			scanf("%c", &str[i]);
			if (str[i] == '.')
				break;
			len++;
		}
		getchar();
		if(len==0)
			break;
		int chk=1;
		for (i = 0; i < len; i++) {
			if (str[i] == '(' || str[i] == '[') {
				stack[iter] = str[i];
				iter++;
			}
			else if (str[i] == ')') {
				if (stack[iter - 1] == '(') {
					iter--;
				}
				else {
					chk=0;
					break;
				}
			}
			else if (str[i] == ']') {
				if (stack[iter - 1] == '[') {
					iter--;
				}
				else {
					chk = 0;
					break;
				}
			}
		}
		if(iter>0)
			chk=0;
		if (chk) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}

	}

}