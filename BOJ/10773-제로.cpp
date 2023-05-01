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

	int k;
	scanf("%d",&k);
	for (int i = 0; i < k; i++) {
		int n;
		scanf("%d",&n);
		if (n == 0) {
			pop(&stack);
		}
		else {
			push(&stack, n);
		}
	}

	int sum=0;
	while (!isEmpty(&stack)) {
		sum += pop(&stack);
	}

	printf("%d",sum);

	free(stack.data);
	return 0;
}