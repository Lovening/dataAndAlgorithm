//
// Created by ning on 2020/6/23 0023.
//

#ifndef SEQUENCE_SEQUENCE_HPP
#define SEQUENCE_SEQUENCE_HPP

#include <iostream>

/*回环顺序队列，将head第一个数据置空
 * */
template <typename T>
class  sequence{

public:
    sequence(int capacity = 10);

    ~sequence();

    bool isEmpty()const;

    //查看头
    T& front()const;
    //查看尾
    T& rear()const;

    void push(const T& item);

    //从头部删除数据
    void  pop();

private:
    T* m_sequence;
    int m_front;
    int m_rear;
    int m_capacity;
};

template <typename T>
sequence<T>::sequence(int capacity):m_capacity(capacity) {
    m_front = m_rear = 0;
    m_sequence = new T[capacity];
}

template<typename T>
sequence<T>::~sequence() {

}

template<typename T>
bool sequence<T>::isEmpty() const {

    return  m_front == m_rear;
    //return false;
}

template<typename T>
T &sequence<T>::front() const {

    if (isEmpty()) throw "sequence is empty";

    return  m_sequence[(m_front+1)%m_capacity];

}

template<typename T>
T &sequence<T>::rear() const {

    if(isEmpty()) throw "sequence is empty";

    return m_sequence[m_rear%m_capacity];

}

//int a[5]  [1][3][2][h][4]
//int b[10] [4][1][3][2][][][][][][h]
template<typename T>
void sequence<T>::push(const T &item) {


    //判断是否满了 如果队列满了需要动态扩容
    //这里m_rear加1是因为第一个数据为空的，没有存放数据，放的是数据头的坐标.
    ///////////////////////////////////////////////
    if (((m_rear+1) % m_capacity) == m_front ){
        //判断当前队列是否回环
        T * newSquence = new T[2*m_capacity];
        int strat = (m_front+1)%m_capacity;
        if(strat < 2){
            std::copy(m_sequence+strat,m_sequence+strat+m_rear-1,newSquence);
        } else{
            std::copy(m_sequence+strat,m_sequence+m_capacity,newSquence);
            std::copy(m_sequence,m_sequence+m_rear+1,newSquence+m_capacity-strat);
        }
        m_front = 2*m_capacity-1;
        m_rear = m_capacity-2;
        m_capacity*=2;
        delete [] m_sequence;
        m_sequence = newSquence;
    }
    //////////////////////////////////////////////////
    m_rear = ( ++m_rear )%m_capacity;
    m_sequence[m_rear] = item;

}

template<typename T>
void sequence<T>::pop() {
    if(isEmpty()) throw "";
    m_front = (m_front+1)%m_capacity;
    m_sequence[m_front].~T();
}


#endif //SEQUENCE_SEQUENCE_HPP
