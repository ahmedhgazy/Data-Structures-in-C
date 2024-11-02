#include <stdio.h>
#include "queue.h"
#include "queue.c"

#include <stdlib.h>

int main()
{
    Queue q ;
    int item;

    createQueue(&q);
    if(!ISQueueFull(q))
    {
        Enqueue(10, &q);
    }
    if(!ISQueueFull(q))
    {
        Enqueue(20, &q);
    }
    if(!ISQueueFull(q))
    {
        Enqueue(30, &q);
    }
    if(!ISQueueFull(q))
    {
        Enqueue(40, &q);
    }



    if(ISQueueFull(q))
    {
        printf("queue is full.\n");

    }

    else
    {
        printf(" queue is  not full \n");
    }




    while(!ISQueueEmpty(q))
    {
        printf("%d\n", Dequeue(&q));
    }

    if(ISQueueEmpty(q))
    {
        printf("queue is Empty.\n");

    }

    else
    {
        printf(" queue is  not Empty \n");
    }


}
