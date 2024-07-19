#include <stdio.h>
#include <stdlib.h>
#include "linked_queue.h"
int main()
{
    Queue q;
    CreateQueue(&q);
    Append(5,&q);
    Append(6,&q);
    printf("%d ",QueueSize(&q));
    return 0;
}