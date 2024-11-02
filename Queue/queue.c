#include "queue.h"

void createQueue(Queue *q)
{
    q->size = 0;
    q->front = 0;
    q->rear = MAX - 1;
}
type ISQueueFull(Queue q)
{
    return q.size == MAX;
}
type ISQueueEmpty(Queue q)
{
    return q.size == 0;
}

void Enqueue(type item, Queue *q)
{
    if (ISQueueFull(*q))
    {
        printf("Queue overflow");
    }
    else
    {
        q->rear = (q->rear + 1) % MAX;
        q->items[q->rear] = item;
        q->size++;
    }
}

type Dequeue(Queue *q)
{
    int item;
    if (ISQueueEmpty(*q))
    {
        printf("Queue Underflow");
    }
    else
    {
        item = q->items[q->front];
        q->front = (q->front + 1) % MAX;
        q->size--;
    }
    return item;
}
