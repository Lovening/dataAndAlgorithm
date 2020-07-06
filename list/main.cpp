#include <iostream>
#include "mlist.h"

using namespace std;
int main() {

    List<int> intList;
    intList.insertPre(15);
    intList.insertPre(14);
    intList.insertPre(13);
    intList.insertPre(12);
//    intList.insertPre(11);
    //intList.insertTail(17);
    //intList.show();
    intList.invert();

    ListIterator <int > iter(intList);
    if (iter.NotNull()){
        cout<<" "<<*iter.First();
        while (iter.NextNotNull())
            cout<<"->"<<*iter.Next();
    }
    //intList.show();
    std::cout << "" <<std::endl;
    return 0;
}