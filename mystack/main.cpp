#include <iostream>
#include "myStack.h"

int main() {

    myStack<int > stack(2);
    stack.push(10);
    stack.push(9);
    stack.push(8);
    stack.push(7);
    stack.push(6);
    std::cout <<""<<stack.top()<<std::endl;
    stack.pop();
    std::cout <<""<<stack.top()<<std::endl;
    stack.pop();
    stack.pop();
    stack.pop();
    std::cout <<""<<stack.top()<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}