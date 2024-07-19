#include <stdio.h>
#include "StackArray.h"

void CreateStack(Stack *ps){
    ps->top = 0;
}

void push(StackEntry e, Stack *ps){
    ps->entry[ps->top++]=e;
}
int IsStackFull(Stack *ps){
    if(ps->top == MAXSIZE){
        return 0;
    }
    else {
        return 1;
    }
}

void pop(StackEntry *pe,Stack *ps){
    *pe=ps->entry[--ps->top];
}
int IsStackEmpty(Stack *ps){
     if(ps->top == 0){
        return 0;
    }
    else {
        return 1;
    }
}

void StackTop(StackEntry *pe, Stack *ps){
    *pe=ps->entry[ps->top-1];
}
int StackSize(Stack *ps){
    return ps->top;
}
void ClearStack(Stack *ps){
    ps->top = 0;
}
void TraverseStack(Stack *ps,void(*pf)(StackEntry)){
    for(int i = ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }
}
