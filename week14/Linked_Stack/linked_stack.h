#ifndef LINKED_H_INCLUDED
#define LINKED_H_INCLUDED
typedef int Stack_Entry;
typedef struct stackNode{
    Stack_Entry Entry;
    struct stackNode *Next;
}StackNode;

typedef struct Stack {
    struct stackNode *top;
    int Size;
}Stack;

void create_stack(Stack *ps);
void push(Stack_Entry e, Stack *ps);
void Pop(Stack_Entry *pe, Stack *ps);
int StackEmpty(Stack *ps);
int StackFull(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps, void(*pf)(Stack_Entry));
int StackSize(Stack *ps);



#endif // LINKED_H_INCLUDED