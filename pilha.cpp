#include "pilha.h"

#define MAX 1000 //max size for stack

using namespace std;

int *stack;
int top_;

Stack::Stack()
{
    stack = new int(MAX);
    top_ = -1;
}

void Stack::push(int x)
{
    if (top_ >= (MAX - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        stack[++top_] = x;
        cout << x << " pushed into stack\n";
    }
}

int Stack::pop()
{
    if (top_ < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = stack[top_--];
        return x;
    }
}
int Stack::top()
{
    if (top_ < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = stack[top_];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top_ < 0);
}