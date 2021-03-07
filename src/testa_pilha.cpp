// Copyright 2021 Rafael Barbosa de Sousa -170043827

#include "../include/pilha.h"

using std::cout;

int main() {
    class Stack<int> stack;
    stack.push(10);
    cout << stack.top() << " Topo da pilha\n";

    stack.push(20);
    cout << stack.top() << " Topo da pilha\n";

    stack.push(30);
    cout << stack.top() << " Topo da pilha\n";

    cout << stack.pop() << " Retirado do pilha\n";

    cout << stack.top() << " Topo da pilha\n";

    return 0;
}
