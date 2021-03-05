#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

template<typename Type>
class Stack{
    public:
        Stack(); //constructor
        ~Stack(); //destructor
    
        void push(Type);
        Type pop();
        Type top();
        
        bool isEmpty();
};

#endif  // PILHA_H_