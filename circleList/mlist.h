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
};

template <typename Type>
class List
{
    friend class ListIterator<Type>;
public:
    List() {firstNode = 0;};

    void insertPre(Type );

    void insertTail(Type);

    void show();

    void deletes(Type );

    void invert();

    void concatenate(ListNode<Type>);
private:
    ListNode<Type> * firstNode;//保存的为链表中的第一个节点
    //ListNode<Type> * nextNode;
};

template <typename Type>
class ListIterator
{
public:
    ListIterator(const List<Type>& l):list(l),current(l.firstNode){

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
    if(current) return true;
    return false;
}

template<typename Type>
bool ListIterator<Type>::NextNotNull() {
    if(current && current->next) return true;
    return false;
}

template<typename Type>
Type *ListIterator<Type>::First() {
    if(list.firstNode) return &list.firstNode->data;
    return 0;
}

template<typename Type>
Type *ListIterator<Type>::Next() {
    if(current && current->next){
        current = current->next;
        return  &current->data;
    }
    return  0;
}

template<typename Type>
ListNode<Type>::ListNode(Type element):data(element) {
    next = NULL;
}

template <typename Type>
void List<Type>::insertPre(Type data) {
    ListNode<Type>* newNode = new ListNode<Type>(data);
    newNode->next = firstNode;//新的节点的下一个是原来的第一个,新节点的下一个指针一直保存原先的第一个
    firstNode = newNode;//新的节点成为新的第一个
}

template<typename Type>
void List<Type>::show() {

    ListNode<Type> *current = firstNode;
    while (current){
        std::cout <<current->data;
        if (current->next) std::cout<<"->";
        current= current->next;
    }
    std::cout<<std::endl;
}

template<typename Type>
void List<Type>::deletes(Type data) {
    ListNode<Type> *previous  = 0;
    ListNode<Type> *current;
    for (current = firstNode; current && current->data != data;previous = current,current->next){

    }

    if(current){
        if(previous) previous->pre = current->pre;
        else firstNode = firstNode->pre;
        delete current;
    }

}

template<typename Type>
void List<Type>::invert() {
    /*先不遍历找最后一个
     * 当while 遍历完成后剩下的最后一个first就是最后一个
     * 先将第一个挪到最后面  找到原先第一个的下一个当头为f
     * while执行第二遍的时候将第一遍的f的next 指向l  即最初始的f
     * */
    ListNode<Type> *f = firstNode, *l = 0;
    while (f){

        ListNode<Type> *r = l; //r 一直等于最后一个 当第一遍while执行完成后r 成为初始的first
        l = f;

        f = f->next; //找到原先第一个的下一个当第一个
        l->next = r;//
    }
    firstNode = l;
}

template<typename Type>
void List<Type>::concatenate(ListNode<Type> b) {
    if (!firstNode) {firstNode = b.pre;return;}
    if (b.pre){
        ListNode<Type> *p;
        for (p = firstNode; p->next ;p = p->pre) {

        }
        p->pre = b.pre;
    }
}

#endif //LIST_LIST_H
