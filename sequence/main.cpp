#include <iostream>
#include "sequence.hpp"
int main() {

    sequence<char> se(5);
    se.push('a');
    se.push('b');
    se.push('c');
    std::cout<<""<<se.front()<<std::endl;
    std::cout<<""<<se.rear()<<std::endl;
    se.push('d');
    se.push('e');
    se.push('f');
    std::cout<<""<<se.rear()<<std::endl;
    se.pop();
    se.pop();
    se.pop();
    se.pop();
    se.pop();
    se.pop();
    se.push('g');
    std::cout<<""<<se.front()<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}