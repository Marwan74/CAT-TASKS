#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    Queue q;
    CreateQueue(&q);
    Append(5,&q);
    printf("%d ",QueueSize(&q));
    Append(6,&q);
    printf("%d ",QueueSize(&q));
    ClearQueue(&q);
    printf("%d ",QueueSize(&q));
    return 0;
}
