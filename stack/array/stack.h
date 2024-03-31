#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

typedef struct Stack {
	int top;
	int capacity;
	int *array;
} Stack;

Stack *stack_create(const int capacity);

void stack_delete(Stack *stack);

int stack_push(Stack *stack, const int info);

int stack_pop(Stack *stack, int *info);

void stack_print(const Stack *stack);

#endif

