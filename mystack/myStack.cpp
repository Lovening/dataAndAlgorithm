//
// Created by ning on 2020/6/21 0021.
//

#include "myStack.h"
#include "myUntil.h"
template <typename T> myStack<T>::myStack(int stackCapacity):mcapacity(stackCapacity)
{
    if(stackCapacity < 1){
        throw "stack must >1";
    }
    mstack = new T[stackCapacity];
    mtop =  -1;
}

template<typename T>
T &myStack<T>::top() const {


}

template<typename T>
void myStack<T>::push(const T &item) {
    if(mtop == mcapacity -1){
        changeSize(myStack,)
    }
    mstack[++mtop] = item;

}
