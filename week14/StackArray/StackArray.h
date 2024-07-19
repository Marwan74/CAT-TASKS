#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED

#define MAXSIZE 100
typedef int StackEntry;
typedef struct Stack{
    StackEntry entry[MAXSIZE];
    int top;
}Stack;



void CreateStack(Stack *ps);//accessing mechanism(1)
void push(StackEntry e, Stack *ps); //accessing mechanism(2)
int IsStackfull(Stack *ps);  //accessing mechanism(3)
int IsStackEmpty(Stack *ps);  //accessing mechanism(4)
void pop(StackEntry *pe,Stack *ps);  //accessing mechanism(5)
void StackTop(StackEntry *pe , Stack *ps) ;  //accessing mechanism(6)
int StackSize(Stack *ps); //accessing mechanism(7)
void ClearStack(Stack *ps); //accessing mechanism(8)
void TraverseStack(Stack *ps,void(*pf)(StackEntry)); //accessing mechanism(9)



#endif // STACKARRAY_H_INCLUDED