#include "pilha.h"

using namespace std;

int main(){
    
    class Stack<int> stack;
    stack.push(10);
    cout << stack.top() << " Topo da pilha\n";

    stack.push(20);
    cout << stack.top() << " Topo da pilha\n";

    stack.push(30);
    cout << stack.top() << " Topo da pilha\n";

    // cout << stack.pop() << " Retirado do pilha\n";
 
    cout << stack.top() << " Topo da pilha\n";

    return 0;
}