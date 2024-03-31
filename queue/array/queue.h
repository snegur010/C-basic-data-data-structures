#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

typedef struct Queue {
    int head, tail;
    int capacity, size;
    int *array;
} Queue;

Queue *queue_create(const int capacity);

void queue_delete(Queue *queue);

int queue_push(Queue *queue, const int info);

int queue_pop(Queue *queue, int *info);

void queue_print(const Queue *queue);


#endif



