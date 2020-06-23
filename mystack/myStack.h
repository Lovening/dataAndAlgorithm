//
// Created by ning on 2020/6/21 0021.
//

#ifndef MYSTACK_MYSTACK_H
#define MYSTACK_MYSTACK_H
#include "myUntil.h"
#include <iostream>
template <typename T>
class myStack {
public:
    myStack(int stackCapacity = 10);

    inline bool isEmpty() const  ;

    T & top();

    //进栈
    void push(const T& item);
    //出栈
    void pop();

private:
    T* m_stack;
    int m_top;
    int m_capacity;

};

template <typename T>
myStack<T>::myStack(int stackCapacity):m_capacity(stackCapacity)
{
    if(stackCapacity < 1){
        throw 'stack must >1';
    }
    m_stack = new T[stackCapacity];
    m_top =  -1;
}

template<typename T>
inline bool myStack<T>::isEmpty() const {
    return  m_top == -1;
}

template<typename T>
T & myStack<T>::top() {
    if(isEmpty()) throw "stack is null";

    return m_stack[m_top];
}

template<typename T>
void myStack<T>::push(const T &item) {
    if(m_top == m_capacity -1) changeSize(m_stack,m_capacity,2*m_capacity);
    m_stack[++m_top] = item;
}

template<typename  T>
void  myStack<T>::pop() {
    if(isEmpty())  throw "stack is null";

    m_stack[m_top --].~T();

}
#endif //MYSTACK_MYSTACK_H

