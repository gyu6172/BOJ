#include <stdio.h>
#include <string.h>
int main() {
	char word[16];
	scanf("%s",word);
	int len=strlen(word);
	int time=0;
	int i;
	for (i = 0; i < len; i++) {
		char a=word[i];
		if (a <= 'O') {
			time += ((a-'A') / 3)+3;
		}
		else if ('P' <= a  && a <= 'S') {
			time += 8;
		}
		else if ('T' <= a && a <= 'V') {
			time += 9;
		}
		else if ('W' <= a && a <= 'Z') {
			time += 10;
		}
	}
	printf("%d",time);


}