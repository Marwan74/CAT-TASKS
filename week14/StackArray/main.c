#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"
void Display(StackEntry e)
{
    printf("e = %d\n",e);
}

int main()
{
     Stack s;
    CreateStack(&s);
    push(5,&s);
    push(4,&s);
    push(9,&s);
    push(7,&s);
   TraverseStack(&s,&Display);
    int y= StackSize(&s);
    printf("size = %d\n",y);
    ClearStack(&s);
    TraverseStack(&s,&Display);
    return 0;
}