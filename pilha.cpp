#include "pilha.h"

using namespace std;

Stack::Stack()
{
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