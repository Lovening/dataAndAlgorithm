#include <iostream>
#include "queuelist.h"

int main() {

    LinkedStack<int> queue;
    queue.push(10);
    std::cout << queue.top()<<std::endl;
    queue.push(20);
    std::cout << queue.top()<<std::endl;
    queue.push(30);
    std::cout << queue.top()<<std::endl;
    queue.push(40);
    std::cout << queue.top()<<std::endl;
    queue.pop();
    queue.pop();
    std::cout << queue.top()<<std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
