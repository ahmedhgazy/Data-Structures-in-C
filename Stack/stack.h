#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


#define MAX 109


typedef int type;


typedef struct
{
    int top;
    type stackArray[MAX];
} Stack;



void createStack(Stack *s);

void createStack(Stack *s);

type isStackFull(Stack s);

void push(int item, Stack *s);

type pop(Stack *s);

type peak(Stack s);

#endif // STACK_H_INCLUDED
