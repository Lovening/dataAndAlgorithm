//
// Created by ning on 2020/6/21 0021.
//

#ifndef MYSTACK_MYSTACK_H
#define MYSTACK_MYSTACK_H

template <typename T>
class myStack {

public:
    myStack(int stackCapacity = 10);

    bool isEmpty() const  ;

    T& top() const ;

    void push(const T& item);
    void pop();

private:
    T* mstack;
    int mtop;
    int mcapacity;

};


#endif //MYSTACK_MYSTACK_H
