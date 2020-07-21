//
// Created by ning on 2020/7/21.
//

#ifndef QUEUELIST_QUEUELIST_H
#define QUEUELIST_QUEUELIST_H

#include <stdio.h>

using namespace  std;

template<typename T> class LinkedStack;

template<typename T>class childNode{
public:
    friend class  LinkedStack<T>;

private:
    childNode(const T& d,childNode *n = 0):data(d),link(n){};
    T data;
    //指向的下一个节点
    childNode<T> *link;
};


template<typename T>
class  LinkedStack{
public:

    LinkedStack():topLinke(0){

    }
    ~LinkedStack(){
        makeEmpty();
    }
    bool isEmpty();

    void push(const T& d);

    T& top();

    void pop();

    void makeEmpty();
private:
    childNode<T>* topLinke;
};

template<typename T>
bool LinkedStack<T>::isEmpty() {

    return topLinke == 0;
}

template<typename T>
void LinkedStack<T>::push(const T &data) {

    topLinke = new childNode<T>(data,topLinke);
}

template<typename T>
T &LinkedStack<T>::top() {

    if(isEmpty()) throw "link is empty";
    return  topLinke->data;
}

template<typename T>
void LinkedStack<T>::pop() {

    if(isEmpty()) throw "stack is cannot delete";
    childNode<T> *deleteNode = topLinke;
    topLinke = topLinke->link;
    delete  deleteNode;
}

template<typename T>
void LinkedStack<T>::makeEmpty() {
    while (isEmpty()){
        pop();
    }

}


#endif //QUEUELIST_QUEUELIST_H