#include <stdio.h>
#include <string.h>
int main() {
	char str[101];
	scanf("%s",str);
	int len=strlen(str);
	int i,j;
	int cnt=0;
	for (i = 0; i < len; i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				i++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				i+=2;
			}
			else if (str[i + 1] == '-') {
				i++;
			}
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				i++;
			}
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				i++;
			}
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				i++;
			}
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				i++;
			}
		}
		cnt++;
	}
	printf("%d",cnt);
}