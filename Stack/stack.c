#include "stack.h"

void createStack(Stack *s)
{

    s->top = -1;
}

int isStackEmpty(Stack s)
{
    return s.top == -1;
}

int isStackFull(Stack s)
{
    return s.top == MAX - 1;
}

void push(int item, Stack *s)
{

    if (isStackFull(*s))
        printf("Stack Overflow");

    else
        s->stackArray[++s->top] = item;
}

type pop(Stack *s)
{
    type item;
    if (isStackEmpty(*s))
        printf("\nStack Underflow\n");

    else
        item = s->stackArray[s->top--];
    // item = (*s).stackArray[(*s).top--];
    return item;
}

type peak(Stack s)
{
    type item;
    if (isStackEmpty(s))
        printf("\nStack Underflow\n");
    else
        item = s.stackArray[s.top--];

    return item;
}
