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
        printf("Queue overflow");
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
        printf("Queue Underflow");
    else
    {
        item = q->items[q->front];
        q->front = (q->front + 1) % MAX;
        q->size--;
    }
    return item;
}

//!*****************************Problems********************************
//! [1]
// In the implentation level of the queue ADT,
// write the
// QueueTraverse which is defined as :
// void TraverseQueue(QueueType* pq, void (*pf)(Entry
// *))
// Where pf is a pointer to a function that is passed over all of the
// queue *pq elements to perform a task
// Use the previous function to print on the screen all a queue elements in the user level.
void traverse(Queue *q, void (*fun)(type *))
{
    int i, count;

    for (i = q->front, count = 0; count < q->size; count++)
    {
        (*fun)(&q->items[i]);
        i = (i + 1) % MAX;
    }
}

//![2]
//  Write a function that returns a copy from the first element in a queue. (Implementation level)

type QueueFirstElement(Queue *q)
{

    if (!ISQueueEmpty(*q))
    {
        printf("Queue is empty");
        return -1;
    }
    return q->items[q->front];
}
//!![3]
//  We (as a user for QueueADT) have two filled queues;
//  the first queue holds section code while the other holds group code(where number of groups inside the section is maximum 10).Merge those numbers(section code * 10 + group code) in a newly created queue.
//* (User level) the implementation in the main function