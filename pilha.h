#ifndef PILHA_H_
#define PILHA_H_

#include <assert.h>
#include <iostream>

#define MAX 1000 //max size for stack

class Stack
{
    int *stack;
    int top_;
    int capacity = MAX;
 
public:
    Stack(); //constructor
 
    void push(int);
    int pop();
    int top();
 
    int size();
    bool isEmpty();
};

#endif  // PILHA_H_