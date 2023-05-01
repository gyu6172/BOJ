#include <stdio.h>
#include <stdlib.h>
#define element int
int MAXSIZE = 100000;
typedef struct {
	int top;
	element* data;
}StackType;

int isEmpty(StackType* stack) {
	if (stack->top < 0) return 1;
	else return 0;
}

int isFull(StackType* stack) {
	if (stack->top >= MAXSIZE - 1) return 1;
	else return 0;
}

element pop(StackType* stack) {
	if (!isEmpty(stack))
		return stack->data[(stack->top)--];
}

void push(StackType* stack, element elem) {
	if (!isFull(stack)) {
		stack->data[++(stack->top)] = elem;
	}
}

element peek(StackType* stack) {
	if (!isEmpty(stack))
		return stack->data[(stack->top)];
}

int main() {
	StackType stack;
	stack.top = -1;
	stack.data = (element*)malloc(sizeof(element) * MAXSIZE);

	int n;
	scanf("%d",&n);

	int arr[100000];
	char rstArr[100000];
	int rstIter=0;

	int flag = 1;

	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	int iter=0;

	int num=1;
	while (iter<n) {
		if (isEmpty(&stack) || arr[iter] > peek(&stack)) {
			push(&stack, num++);
			rstArr[rstIter++] = '+';
		}
		else if (arr[iter] == peek(&stack)) {
			pop(&stack);
			iter++;
			rstArr[rstIter++] = '-';
		}
		else if (arr[iter] < peek(&stack)) {
			flag = 0;
			break;
		}
	}

	if (flag) {
		for (int i = 0; i < rstIter; i++) {
			printf("%c\n",rstArr[i]);
		}
	}
	else {
		printf("NO");
	}

	free(stack.data);
	return 0;
}