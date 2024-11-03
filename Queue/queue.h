#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX 3

typedef int type;

typedef struct
{
    type front;
    type rear;
    type size;
    type items[MAX];

} Queue;

void createQueue(Queue *q);
type ISQueueFull(Queue q);
type ISQueueEmpty(Queue q);
void Enqueue(type item, Queue *q);
type Dequeue(Queue *q);

// Problems in the following functions

void traverse(Queue *q, void (*fun)(type *));

type QueueFirstElement(Queue *q);

#endif // QUEUE_H_INCLUDED
