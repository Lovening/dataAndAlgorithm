#include <iostream>
#include "binaryTree.h"

int main() {

    BinaryTree <char> tree;
    TreeNode<char > a,b,c,d,e,add,sub,mul,div;

    add.data = '+';
    sub.data = '-';
    mul.data = '*';
    div.data = '/';
    a.data = 'A';
    b.data = 'B';
    c.data = 'C';
    d.data = 'D';
    e.data = 'E';

    tree.root = &add;
    add.leftNode = &sub;
    add.rightNode =&e;
    sub.leftNode = &mul;
    sub.rightNode = &d;
    mul.leftNode = &div;
    mul.rightNode = &c;
    div.leftNode = &a;
    div.rightNode= &b;

    tree.inOrder();//中序遍历
    std::cout<<std::endl;
    tree.preOrder();
    std::cout<<std::endl;
    tree.postOrder();
    std::cout<<std::endl;
    tree.leveOrder();
    std::cout<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}