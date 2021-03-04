#include "pilha.h"

#define MAX 1000 //max size for stack

using namespace std;

template class Stack<int>;

//-----------------Implementing stack with array [BEGIN]-------------------
template<typename Type>
Type *stack;
int topPosition;

template<typename Type>
Stack<Type>::Stack()
{
    stack<Type> = new Type[MAX];
    topPosition = -1;
}

template<typename Type>
Stack<Type>::~Stack()
{
    delete[] stack<Type>;
}

template<typename Type>
void Stack<Type>::push(Type x)
{
    if (topPosition >= (MAX - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        stack<Type>[++topPosition] = x;
        cout << x << " pushed into stack\n";
    }
}

template<typename Type>
Type Stack<Type>::pop()
{
    if (topPosition < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = stack<Type>[topPosition--];
        return x;
    }
}

template<typename Type>
Type Stack<Type>::top()
{
    if (topPosition < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = stack<Type>[topPosition];
        return x;
    }
}


template<typename Type>
bool Stack<Type>::isEmpty()
{
    return (topPosition < 0);
}

//-----------------Implementing stack with array [END]-------------------