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

//-----------------Pilha com lista linkada [INICIO]--------
// template<typename Type>
// class StackNode {
//     public:
//         Type data;
//         StackNode* next;
// };
 
// template<typename Type>
// StackNode<Type>* newNode(Type data)
// {
//     StackNode<Type>* stackNode = new StackNode();
//     stackNode->data = data;
//     stackNode->next = NULL;
//     return stackNode;
// }

// template<typename Type>
// StackNode<Type>* topNode;

// template<typename Type>
// Stack<Type>::Stack()
// {
// }

// template<typename Type>
// int isEmpty()
// {
//     return !topNode;
// }

// template<typename Type>
// void push(StackNode<Type>** root, Type data)
// {
//     StackNode<Type>* stackNode = newNode(data);
//     stackNode->next = *root;
//     *root = stackNode;
//     cout << data << " pushed to stack\n";
// }

// template<typename Type>
// int pop(StackNode<Type>** root)
// {
//     if (isEmpty(*root))
//         return INT_MIN;
//     StackNode<Type>* temp = *root;
//     *root = (*root)->next;
//     int popped = temp->data;
//     free(temp);
 
//     return popped;
// }

// template<typename Type>
// int top(StackNode<Type>* root)
// {
//     if (isEmpty(root))
//         return INT_MIN;
//     return root->data;
// }

// template<typename Type>
// Stack<Type>::~Stack()
// {
//     delete[] stack<Type>;
// }

//-----------------Pilha com lista linkada [FIM]--------