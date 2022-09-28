#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	char quiz[81];

	for (i = 0; i < n; i++) {
		getchar();
		scanf("%s",quiz);
		int len=strlen(quiz);

		int score=0;
		int point=1;
		for (j = 0; j < len; j++) {
			if (quiz[j] == 'O') {
				score += point;
				point++;
			}
			else {
				point=1;
			}
		}
		printf("%d\n",score);
	}
}