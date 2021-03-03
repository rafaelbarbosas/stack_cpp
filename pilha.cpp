#include "pilha.h"

#define MAX 1000 //max size for stack

using namespace std;

template class Stack<int>;

template<typename Type>
Type *stack;
int top_;

template<typename Type>
Stack<Type>::Stack()
{
    stack<Type> = new Type[MAX];
    top_ = -1;
}

template<typename Type>
Stack<Type>::~Stack()
{
    delete[] stack<Type>;
}

template<typename Type>
void Stack<Type>::push(Type x)
{
    if (top_ >= (MAX - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        stack<Type>[++top_] = x;
        cout << x << " pushed into stack\n";
    }
}

template<typename Type>
Type Stack<Type>::pop()
{
    if (top_ < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = stack<Type>[top_--];
        return x;
    }
}

template<typename Type>
Type Stack<Type>::top()
{
    if (top_ < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = stack<Type>[top_];
        return x;
    }
}


template<typename Type>
bool Stack<Type>::isEmpty()
{
    return (top_ < 0);
}