#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>
#include <assert.h>

template<typename Type>
class Stack{
    public:
        Stack(); //constructor
        ~Stack(); //destructor
    
        void push(Type);
        Type pop();
        Type top();

        bool isEmpty();
        bool isNotEmpty();
};

#endif  // PILHA_H_