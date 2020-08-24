//
// Created by ning on 2020/8/20.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_BINARYSEARCHTREE_H

/*二叉查找树的特点
 * 1.每一个元素有一个键值，并且键值不允许重复
 * 2.左子树的键值都小于根节点的键值
 * 3.右子树的键值都大于根节点的键值
 * 4.左右子树都是二叉查找树
 * */
#include <iostream>


enum Boolean{FALSE,TRUE};

template<typename T> class BST;

template<typename T>
class  Element{

public:
    T key;
};



template<typename T>
class BstNode{
    friend class  BST<T>;

public:
    Element<T> data;
    BstNode* leftChild;
    BstNode* rightChild;
    void display(int i){
        std::cout<<"Position "<< i <<":data "<<data.key<<std::endl;
        if(leftChild) leftChild->display(2*i);
        if(rightChild) rightChild->display(2*i+1);
    };
};



template<typename  T>
class BST{
public:
    BST(BstNode<T>* init = 0){
        root = init;
    }

    ~BST(){

    }
    Boolean insertElement(const Element<T> &d);

    BstNode<T>* search(const Element<T> &d);

    BstNode<T>* search(BstNode<T>* node,const Element<T>&d);

    BstNode<T>* iterSearch(const Element<T>&d);

    void display(){
        if(root)
            root->display(1);
        else
            std::cout<<"null tree"<<std::endl;
    }

public:
    BstNode<T> *root;
};


template<typename T>
Boolean BST<T>::insertElement(const Element<T> &d) {

    BstNode<T> *p = root;
    BstNode<T> *q = 0;//指向p的父节点
    //插入之前先查找
    while (p){
        q = p;//记录p的父节点
        if(d.key ==  p->data.key) return FALSE;
        if(d.key < p->data.key) p =p->leftChild ;
        else p= p->rightChild;
    }
    //循环结束如果没有return ,则找到了存放新数据的根节点,根节点为q

    //创建新的节点
    p = new BstNode<T>;
    p->rightChild = p->leftChild = 0;
    p->data = d;

    if(!root) root = p;
    else if(d.key < q->data.key) q->leftChild = p;
    else q->rightChild = p;
    return TRUE;
}

template<typename T>
BstNode<T> *BST<T>::search(const Element<T> &d) {
    return search(root,d);
}

template<typename T>
BstNode<T> *BST<T>::search(BstNode<T> *node, const Element<T> &d) {

    if(!node) return nullptr;
    if(d.key == node->data.key) return node;
    if(d.key > node->data.key){
        return search(node->rightChild,d);
    } else
        return search(node->leftChild,d);

}

#endif //BINARYSEARCHTREE_BINARYSEARCHTREE_H
