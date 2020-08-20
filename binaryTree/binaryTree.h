//
// Created by ning on 2020/8/18 0018.
//

#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

#include <stdio.h>
#include <iostream>
#include <queue>

//中序遍历 左子树->节点->右子树
//前序遍历 节点->左子树->右子树
//后序遍历 左子树->右子树->节点

template <typename  T> class  BinaryTree;

//树的节点
template <typename T>
class TreeNode{
public:
    TreeNode(){
        leftNode = NULL;
        rightNode =NULL;
    }

public:
    T data;
    TreeNode<T> *leftNode;
    TreeNode<T>* rightNode;
};


template <typename  T>
class BinaryTree {
public:
    //前序 中序 后序 层序
    void inOrder();
    void inOrder(TreeNode<T>* currentNode);

    void preOrder();
    void preOrder(TreeNode<T>* currentNode);

    void postOrder();
    void postOrder(TreeNode<T>* currentNode);
    void leveOrder();

    void visit(TreeNode<T>* currentNode);
public:
    TreeNode <T> *root;
};

template<typename T>
void BinaryTree<T>::inOrder() {
    inOrder(root);
}

//中序遍历
template<typename T>
void BinaryTree<T>::inOrder(TreeNode<T>* currentNode) {
    if(currentNode){
        inOrder(currentNode->leftNode);
        //显示当前节点
        visit(currentNode);
        inOrder(currentNode->rightNode);
    }
}

template<typename T>
void BinaryTree<T>::visit(TreeNode<T> *currentNode) {
    std::cout<<currentNode->data;
}

template<typename T>
void BinaryTree<T>::preOrder() {
    preOrder(root);
}

//前序遍历
template<typename T>
void BinaryTree<T>::preOrder(TreeNode<T> *currentNode) {
    if(currentNode){
        visit(currentNode);
        preOrder(currentNode->leftNode);
        preOrder(currentNode->rightNode);
    }
}

template<typename T>
void BinaryTree<T>::postOrder() {
    postOrder(root);
}

//后序遍历
template<typename T>
void BinaryTree<T>::postOrder(TreeNode<T> *currentNode) {
    if(currentNode){
        postOrder(currentNode->leftNode);
        postOrder(currentNode->rightNode);
        visit(currentNode);
    }
}

template<typename T>
void BinaryTree<T>::leveOrder() {
    std::queue<TreeNode<T>* > q;
    TreeNode<T> * currentNode = root;
    while (currentNode){
        visit(currentNode);
        if(currentNode->leftNode) q.push(currentNode->leftNode);
        if(currentNode->rightNode) q.push(currentNode->rightNode);
        if(q.empty()) return;
        currentNode = q.front();
        q.pop();
    }
}



#endif //BINARYTREE_BINARYTREE_H
