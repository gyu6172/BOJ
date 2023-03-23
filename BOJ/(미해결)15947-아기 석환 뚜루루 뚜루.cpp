#include <stdio.h>

int main() {
	
	int n;
	scanf("%d",&n);
	if(n%14+1==1)printf("baby");
	else if(n%14+1==2)printf("sukhwan");
	else if(n%14+1==5)printf("very");
	else if(n%14+1==6)printf("cute");
	else if(n%14+1==9)printf("in");
	else if(n%14+1==10)printf("bed");
	else if(n%14+1==13)printf("baby");
	else if(n%14+1==14)printf("sukhwan");
	else {
		if (n / 14 < 5) {
			if (n % 14 + 1 == 3 || n % 14 + 1 == 7 || n % 14 + 1 == 11) {
				printf("tururu");
			}
			else {
				printf("turu");
			}
			for (int i = 0; i < n / 14; i++) {
				printf("ru");
			}

		}
		else {

		}
	}
}


