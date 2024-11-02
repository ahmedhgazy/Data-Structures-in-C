#include <stdio.h>
#include "stack.h"
#include "stack.c"
#include <stdlib.h>
#include <string.h>

int main()
{
    //! Tacking a line of text from the user and print it in a reverse order

    Stack s;

    createStack(&s);

    //     char item=getchar();
    //
    //
    //    while(!isStackFull(s)&& item !='\n')
    //    {
    //        push(item,&s);
    //        item=getchar();
    //    }
    //
    //
    ////    while (!isStackEmpty(s)){
    ////        item=pop(&s);
    ////        putchar(item);
    ////    }

    if (!isStackFull(s))
    {

        push(1, &s);
    }
    if (!isStackFull(s))
    {

        push(2, &s);
    }
    if (!isStackFull(s))
    {

        push(3, &s);
    }
    if (!isStackFull(s))
    {

        push(4, &s);
    }
    if (!isStackFull(s))
    {

        push(5, &s);
    }

    printf("\t\t The Top pointer of stack points to the top element and the value is: %d\t\t\n", peak(s));
    pop(&s);
    printf("\t\t The Top pointer of stack points to the top element and the value is: %d\t\t\n", peak(s));
    pop(&s);
    printf("\t\t The Top pointer of stack points to the top element and the value is: %d\t\t\n", peak(s));
    pop(&s);
    printf("\t\t The Top pointer of stack points to the top element and the value is: %d\t\t\n", peak(s));
    pop(&s);
    printf("\t\t The Top pointer of stack points to the top element and the value is: %d\t\t\n", peak(s));
    pop(&s);
    printf("\t\t The Top pointer of stack points to the top element and the value is: %d\t\t\n", peak(s));

    return 0;
}
