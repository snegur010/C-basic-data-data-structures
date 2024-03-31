#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack *stack_create() {
    Stack *stack = (Stack *) calloc(1, sizeof(Stack));
    if (stack == NULL) {
        return 1;
    }

    return stack;
}

void stack_delete(Stack *stack) {
    Node *curr = stack->top;
    Node *prev = NULL;

    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }
    free(stack);
}

int stack_push(Stack *stack, const int info) {
    Node *new = (Node *) calloc(1, sizeof(Node));
    if (new == NULL) {
        return 1;
    }

    new->info = info;
    new->next = stack->top;

    stack->top = new;

    return 0;
}

int stack_pop(Stack *stack, int *info) {
    if (stack->top == NULL) {
        return 1;
    }

    *info =  stack->top->info;

    Node *curr = stack->top;
    curr = curr->next;
    stack->top = curr;
    free(curr);

    return 0;
}

void stack_print(const Stack *stack) {
    if (stack->top == NULL) {
        return;
    }

    Node *curr = stack->top;

    while (curr != NULL) {
        printf("%d ", curr->info);
        curr = curr->next;
    }

    printf("\n");
}
