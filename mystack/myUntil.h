//
// Created by ning on 2020/6/21 0021.
//

#ifndef MYSTACK_MYUNTIL_H
#define MYSTACK_MYUNTIL_H


#include <algorithm>

template<typename  T> void  changeSize(T* &a, const int oldSize, const int newSize);


    template <typename T> void  changeSize(T* &a, const int oldSize, const int newSize) {
        if (newSize < 1 || oldSize < 1) {
            throw "newSize < 1";
            return;
        }

        T *temp = new T[newSize];
        int number = std::min(oldSize, newSize);
        std::copy(a, a + number, temp);
        delete[] a;
        a = temp;
    }
#endif //MYSTACK_MYUNTIL_H
