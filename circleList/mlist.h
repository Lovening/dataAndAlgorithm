//
// Created by ning on 2020/6/29 0029.
// 头插法
//

#ifndef LIST_LIST_H
#define LIST_LIST_H
template<typename  Type> class List;
template<typename Type> class ListIterator;

template <typename Type>
class ListNode
{
    friend class List<Type>;
    friend class ListIterator<Type>;
private:
    Type data; //具体的数据
    ListNode * next;
    explicit ListNode(Type);
    explicit ListNode(){

    }
};

template <typename Type>
class List
{
    friend class ListIterator<Type>;
public:
    List() {firstNode = new ListNode<Type> ; firstNode->next = firstNode;};

    void insertPre(Type );

    void deletes(Type );

    void invert();

private:
    ListNode<Type> * firstNode;//保存的为链表中的第一个节点
    //ListNode<Type> * nextNode;
};


template <typename Type>
class ListIterator
{
public:
    ListIterator(const List<Type>& l):list(l),current(l.firstNode->next){

    };
    bool NotNull();//迭代器指向的当前节点是否为空
    bool NextNotNull();
    Type * First();
    Type* Next();
private:
    const List<Type> &list;

    ListNode<Type>* current;
};

template<typename Type>
bool ListIterator<Type>::NotNull() {
    if(current != list.firstNode ) return true;
    return false;
}

template<typename Type>
bool ListIterator<Type>::NextNotNull() {

    if(current->next != list.firstNode) return true;
    return false;
}

template<typename Type>
Type *ListIterator<Type>::First() {

    if(current != list.firstNode) return &current->data;
    return 0;
}

template<typename Type>
Type *ListIterator<Type>::Next() {

        current = current->next;
        if(current == list.firstNode)
            current = current->next;
        return  &current->data;
}

template<typename Type>
ListNode<Type>::ListNode(Type element):data(element) {
    next = NULL;
}

template <typename Type>
void List<Type>::insertPre(Type data) {

    ListNode<Type>* newNode = new ListNode<Type>(data);
    newNode->next = firstNode->next;//新的节点的下一个是表头的下一个
    firstNode->next = newNode;
}



template<typename Type>
void List<Type>::deletes(Type data) {
    ListNode<Type> *previous  = firstNode; //从firstNode 开始
    ListNode<Type> *current;
    //first 是个空的
    for (current = firstNode->next; (current != firstNode) && current->data != data;previous = current,current->next){

    }

    if(current != firstNode){
//        if(previous) previous->pre = current->pre;
//        else firstNode = firstNode->pre;
        previous->next = current->next; //将前一个的下一个指向当前的下一个  将当前的删掉
        delete current;
    }

}


#endif //LIST_LIST_H
