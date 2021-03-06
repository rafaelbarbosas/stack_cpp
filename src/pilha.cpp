// Copyright 2021 Rafael Barbosa de Sousa -170043827

#include "../include/pilha.h"

// define o tamanho maximo da pilha
#define MAX 1000

using std::cout;

// define os tipos aceitos na pilha
template class Stack<int>;

// define o tipo da pilha
#define ARRAY 0
#define LISTA_LINKADA 1

#define TIPO_PILHA LISTA_LINKADA

// Implemetacao em ARRAY
#if TIPO_PILHA == ARRAY

template <typename Type>
Type *stack;  // array para a pilha
int topPosition;  // armazena a posição do topo

template <typename Type>
Stack<Type>::Stack() {
    stack<Type> = new Type[MAX];
    topPosition = -1;
}

template <typename Type>
Stack<Type>::~Stack() {
    delete[] stack<Type>;
}

template <typename Type>
void Stack<Type>::push(Type x) {
    // Verifica se nao eh um stack Overflow
    assert(topPosition < (MAX - 1));
    stack<Type>[++topPosition] = x;
}

template <typename Type>
Type Stack<Type>::pop() {
    // Verifica se nao eh um stack Underflow
    assert(topPosition >= 0);

    Type x = stack<Type>[topPosition--];
    return x;
}

template <typename Type>
Type Stack<Type>::top() {
    // Verifica se pilha nao esta vazia
    assert(topPosition >= 0);

    int x = stack<Type>[topPosition];
    return x;
}

template <typename Type>
bool Stack<Type>::isEmpty() {
    return (topPosition < 0);
}

template <typename Type>
bool Stack<Type>::isNotEmpty() {
    return (topPosition >= 0);
}

#endif

// Implemetacao em LINKED LIST
#if TIPO_PILHA == LISTA_LINKADA
template <typename Type>
class StackNode {
 public:
    Type data;
    StackNode *next;
};

template <typename Type>
StackNode<Type> *newNode(Type data) {
    StackNode<Type> *stackNode = new StackNode<Type>();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Variavel para o no no topo da pilha
template <typename Type>
StackNode<Type> *topNode;

template <typename Type>
Stack<Type>::Stack() {
}

template <typename Type>
bool Stack<Type>::isEmpty() {
    return !topNode<Type>;
}

template <typename Type>
bool Stack<Type>::isNotEmpty() {
    return topNode<Type>;
}

template <typename Type>
void Stack<Type>::push(Type data) {
    StackNode<Type> *stackNode = newNode(data);
    stackNode->next = topNode<Type>;
    topNode<Type> = stackNode;
}

template <typename Type>
Type Stack<Type>::pop() {
    // Verifica se a pilha nao esta vazia
    assert(Stack<Type>::isNotEmpty());

    StackNode<Type> *aux = topNode<Type>;
    topNode<Type> = topNode<Type>->next;

    Type popped = aux->data;
    delete aux;

    return popped;
}

template <typename Type>
Type Stack<Type>::top() {
    // Verifica se a pilha nao esta vazia
    assert(Stack<Type>::isNotEmpty());

    return topNode<Type>->data;
}

template <typename Type>
Stack<Type>::~Stack() {
    while (Stack<Type>::isNotEmpty()) {
        pop();
    }
}

#endif
