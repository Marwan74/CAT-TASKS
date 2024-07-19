#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"
int main()
{
    Stack s;
    create_stack(&s);
    push(5,&s);
    printf("%d ",StackSize(&s));
    return 0;
}