#include <stdio.h>
#include "queue.h"
#include "queue.c"

#include <stdlib.h>

void print(type *item)
{

    printf("%d\n", *item);
}

Queue mergedSectionGroup(Queue *sectionQ, Queue *groupQ)
{
    Queue mergedQ;
    createQueueQueue(&mergedQ);
    while (!ISQueueEmpty(*sectionQ) && !ISQueueEmpty(*groupQ))
    {
        int sectionItem = Dequeue(sectionQ);
        int groupItem = Dequeue(groupQ);
        int mergedItem = (sectionItem * 10) + groupItem;
        Enqueue(mergedItem, &mergedQ);
    }

    return mergedQ;
}

int main()
{
    Queue q;
    int item;

    createQueue(&q);
    if (!ISQueueFull(q))
        Enqueue(10, &q);

    if (!ISQueueFull(q))
        Enqueue(20, &q);

    if (!ISQueueFull(q))
        Enqueue(30, &q);

    if (!ISQueueFull(q))
        Enqueue(40, &q);

    if (ISQueueFull(q))
        printf("queue is full.\n");

    else
        printf(" queue is  not full \n");

    while (!ISQueueEmpty(q))
        printf("%d\n", Dequeue(&q));

    if (ISQueueEmpty(q))
        printf("queue is Empty.\n");

    else
        printf(" queue is  not Empty \n");

    // Problems in the following functions

    traverse(&q, print);
}
