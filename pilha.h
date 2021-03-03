#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

class Stack
{

public:
    Stack(); //constructor
 
    void push(int);
    int pop();
    int top();
 
    int size();
    bool isEmpty();
};

#endif  // PILHA_H_