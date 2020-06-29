//
// Created by ning on 2020/6/29 0029.
// 头插法
//

#ifndef LIST_LIST_H
#define LIST_LIST_H
template<typename  Type> class List;

template <typename Type>
class ListNode
{
    friend class List<Type>;

private:
    Type data;
    ListNode * pre;
    explicit ListNode(Type);
};

template <typename Type>
class List
{
public:
    List() {first = 0;};

    void insert(Type );

    void show();

    void deletes(Type );

    void invert();

    void concatenate(ListNode<Type>);
private:
    ListNode<Type> * first;
};

template<typename Type>
ListNode<Type>::ListNode(Type element):data(element) {
    pre = NULL;
}

template<typename Type>
void List<Type>::insert(Type data) {
    ListNode<Type >* newNode = new ListNode<Type>(data);
    newNode->pre = first;
    first = newNode;
}

template<typename Type>
void List<Type>::show() {
    for (ListNode<Type> *current = first; current;current = current->pre)
    {
        std::cout <<current->data;
        if (current->pre) std::cout<<"->";
    }
    std::cout<<std::endl;
}

template<typename Type>
void List<Type>::deletes(Type data) {
    ListNode<Type> *previous  = 0;
    ListNode<Type> *current;
    for (current = first; current && current->data != data;previous = current,current->pre){

    }

    if(current){
        if(previous) previous->pre = current->pre;
        else first = first->pre;
        delete current;
    }

}

template<typename Type>
void List<Type>::invert() {
    ListNode<Type> *p = first, *q = 0;
    while (p){
        ListNode<Type> *r = q;
        q = p;
        p = p->pre;
        q->pre = p;
    }
    first = q;
}

template<typename Type>
void List<Type>::concatenate(ListNode<Type> b) {
    if (!first) {first = b.pre;return;}
    if (b.pre){
        ListNode<Type> *p;
        for (p = first; p->pre ;p = p->pre) {

        }
        p->pre = b.pre;
    }
}

#endif //LIST_LIST_H
