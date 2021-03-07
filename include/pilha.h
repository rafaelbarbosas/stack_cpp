// Copyright 2021 Rafael Barbosa de Sousa -170043827

#ifndef INCLUDE_PILHA_H_
#define INCLUDE_PILHA_H_

#include <iostream>
#include <cassert>

template<typename Type>
class Stack{
 public:
    Stack();  // constructor
    ~Stack();  // destructor

    void push(Type);
    Type pop();
    Type top();

    bool isEmpty();
    bool isNotEmpty();
};

#endif  // INCLUDE_PILHA_H_
