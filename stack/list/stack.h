#ifndef STACK_LIST_H
#define STACK_LIST_H

typedef struct Node {
    int info;
    struct Node *next;
} Node;

typedef struct Stack {
    Node *top;
} Stack;

Stack *stack_create();

void stack_delete(Stack *stack);

int stack_push(Stack *stack, const int info);

int stack_pop(Stack *stack, int *info);

void stack_print(const Stack *stack);


#endif
