#include "pilha.h"

//define o tamanho maximo da pilha
#define MAX 1000

using namespace std;

//define os tipos aceitos na pilha
template class Stack<int>;

//define o tipo da pilha
#define ARRAY 0
#define LISTA_LINKADA 1
#define TIPO_PILHA ARRAY


#if TIPO_PILHA == ARRAY

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
    }
}

template<typename Type>
Type Stack<Type>::pop()
{
    if (topPosition < 0)
    {
        cout << "Stack Underflow";
        return NULL;
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
        return NULL;
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

template<typename Type>
bool Stack<Type>::isNotEmpty()
{
    return (topPosition >= 0);
}

#endif

#if TIPO_PILHA == LISTA_LINKADA
template<typename Type>
class StackNode {
    public:
        Type data;
        StackNode* next;
};
 
template<typename Type>
StackNode<Type>* newNode(Type data)
{
    StackNode<Type>* stackNode = new StackNode<Type>();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

template<typename Type>
StackNode<Type>* topNode;

template<typename Type>
Stack<Type>::Stack()
{
}

template<typename Type>
bool Stack<Type>::isEmpty()
{
    return !topNode<Type>;
}

template<typename Type>
bool Stack<Type>::isNotEmpty()
{
    return topNode<Type>;
}

template<typename Type>
void Stack<Type>::push( Type data )
{
    StackNode<Type>* stackNode = newNode(data);
    stackNode->next = topNode<Type>;
    topNode<Type> = stackNode;
}

template<typename Type>
Type Stack<Type>::pop()
{
    if (Stack<Type>::isEmpty()){
        return NULL;
    }

    StackNode<Type>* aux = topNode<Type>;
    topNode<Type> = topNode<Type>->next;

    Type popped = aux->data;
    free(aux);
 
    return popped;
}

template<typename Type>
Type Stack<Type>::top()
{
    if (Stack<Type>::isEmpty())
        return NULL;
    return topNode<Type>->data;
}

template<typename Type>
Stack<Type>::~Stack()
{
    while(Stack<Type>::isNotEmpty()){
        pop();
    }
}

#endif