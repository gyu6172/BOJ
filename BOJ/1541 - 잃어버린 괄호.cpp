#include <stdio.h>
#include <string.h>
int charToInt(char c);
int isNumber(char c);
int isOperator(char c);
int main() {
	char formula[51];
	scanf("%s",formula);

	int len = strlen(formula);
	int i,j,k;

	int currentNum=0;
	int currentOp = 1;	//1이면 더하기, 0이면 빼기
	int result=0;
	for (i = 0; i < len; i++) {
		if (isNumber(formula[i])) {
			currentNum = currentNum*10 + charToInt(formula[i]);
		}
		else if (isOperator(formula[i])) {
			if (currentOp) {
				result += currentNum;
				currentNum = 0;
			}
			else {
				result -= currentNum;
				currentNum = 0;
			}
			if (formula[i] == '-') {
				currentOp = 0;
			}
		}
	}
	if (currentOp) {
		result += currentNum;
	}
	else {
		result -= currentNum;
	}
	printf("%d",result);
;
}

int charToInt(char c)
{	
	return (c-'0');
}

int isNumber(char c)
{	
	if ('0' <= c && c <= '9') {
		return 1;
	}
	else {
		return 0;
	}
}

int isOperator(char c)
{
	if (c == '+' || c == '-') {
		return 1;
	}
	else {
		return 0;
	}
}
