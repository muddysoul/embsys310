#include "stack.h"
#define STACK_SIZE 3

// Backing store
char StackStore[STACK_SIZE];

// Pointers to top of stack for adding and retrieving
char* top;

// LIFO Stack is Empty if topPtr==StackStore;
// LIFO Stack is Full if topPtr+1 > Address of last element in the stack;

// Initialize internals of the stack
void stack_init(void)
{
    top = 0;
    for(int i=0; i<STACK_SIZE; i++)
    {
        StackStore[i] = '\0';
    }
}

// Add data to stack
// If stack is full return error
// Otherwise return success
int stack_put(char data)
{
    if (top == &StackStore[STACK_SIZE-1])
    {
        // stack is full
        return 1;
    }
    if (top == 0)
    {
        top = &StackStore[0];
    }
    else
    {
        top++;
    }
    
    *top = data;
    return 0;
}

// Get data from stack
// If stack is empty return error
// Otherwise return success
int stack_get(char* data)
{   
    if (top == 0 || top == StackStore)
    {
        // stack is empty
        return 1;
    }
    
    else
    {
        *data = *top;
        top--;
    }
    
    return 0;
}
