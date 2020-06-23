//
// Created by ning on 2020/6/23 0023.
//

#ifndef SEQUENCE_SEQUENCE_HPP
#define SEQUENCE_SEQUENCE_HPP
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




#endif //SEQUENCE_SEQUENCE_HPP
