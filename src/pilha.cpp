#include "pilha.h"

//define o tamanho maximo da pilha
#define MAX 1000

using namespace std;

//define os tipos aceitos na pilha
template class Stack<int>;

//-----------------Pilha com array [INICIO]-------------------

template<typename Type>
Type *stack; //array para a pilha
int topPosition; //armazena a posição do topo

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
        cout << x << " empurado na pilha\n";
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
        Type x = stack<Type>[topPosition--];
        return x;
    }
}

template<typename Type>
Type Stack<Type>::top()
{
    if (topPosition < 0)
    {
        cout << "A pilha esta vazia";
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

//-----------------Pilha com array [FIM]-------------------