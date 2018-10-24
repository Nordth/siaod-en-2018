#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10

typedef struct {
	int arr[N];
	int top;
} Stack;

// initialization
void init(Stack *stack) {
	stack->top = 0;
}

int inc(int pointer) {
	return pointer + 1;
}

int dec(int pointer) {
	return pointer - 1;
}

int isFull(Stack *stack) {
	return stack->top == N;
}

int isEmpty(Stack *stack) {
	return stack->top == 0;
}


// Add element to stack
// Returns false when stack is full
int push(Stack *stack, int elem) {
	if (isFull(stack)) return 0;
	else {
		stack->arr[stack->top] = elem;
		stack->top = inc(stack->top);
		return 1;
	}
}

// Extracts element from stack
// Returns extracted element 
// or -1 when stack is empty
int pop(Stack *stack) {
	if (isEmpty(stack)) return -1;
	else {
		stack->top = dec(stack->top);
		return stack->arr[stack->top];
	}
}


int main() {
	Stack stack;

	init(&stack);

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	push(&stack, 4);
	push(&stack, 5);

	int n = pop(&stack);
	printf("%d", n); // 5

	printf("%d", pop(&stack)); // 4
	printf("%d", pop(&stack)); // 3
	printf("%d", pop(&stack)); // 2
	printf("%d", pop(&stack)); // 1
	printf("%d", pop(&stack)); // -1

	return 0;
}

