#include <iostream>
#include "binarySearchTree.h"
int main() {

    BST<int> m;
    Element<int> a,b,c,d,e,f,g,h,i,j,k,l;
    a.key = 5;
    b.key = 3;
    c.key = 11;
    d.key = 3;
    e.key = 15;
    f.key = 2;
    g.key = 8;
    h.key = 22;
    i.key = 20;
    j.key = 9;

    std::cout<<m.insertElement(a)<<std::endl;

    m.insertElement(b);
    m.insertElement(c);
    m.insertElement(d);
    m.insertElement(e);
    m.insertElement(f);
    m.insertElement(g);
    m.insertElement(h);
    m.insertElement(i);
    m.display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
