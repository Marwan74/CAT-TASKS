#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"


void create_stack(Stack *ps){
    ps->top = NULL;
    ps->Size=0;
}

void push(Stack_Entry e, Stack *ps){
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->Entry=e;
    pn->Next = ps->top;
    ps->top = pn;
    ps->Size++;
}

void Pop(Stack_Entry *pe, Stack *ps){
 StackNode *pn;
 *pe=ps->top->Entry;
 pn=ps->top;
 ps->top=ps->top->Next;
 free(pn);
 ps->Size--;
}

int StackEmpty(Stack *ps){
return ps->top==NULL;
}

int StackFull(Stack *ps){
return 0;
}

void ClearStack(Stack *ps){
    StackNode *pn = ps->top;
    StackNode *qn = ps->top;
    while(pn){
    pn = pn->Next;
    free(qn);
    qn=pn;
    }
    ps->top=NULL;
    ps->Size=0;

}

void TraverseStack(Stack *ps, void(*pf)(Stack_Entry)){
 StackNode *pn=ps->top;
 while(pn){
 (*pf)(pn->Entry);
 pn=pn->Next;
 }
}

int StackSize(Stack *ps){
 int x;
 StackNode *pn=ps->top;
 for(x=0; pn; pn=pn->Next)
 x++;
 return x;
}