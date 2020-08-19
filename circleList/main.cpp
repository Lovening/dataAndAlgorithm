#include <iostream>
#include "mlist.h"

using namespace std;
int main() {

    List<int> intList;
    intList.insertPre(15);
    intList.insertPre(14);
    intList.insertPre(13);
    intList.insertPre(12);

    ListIterator <int > iter(intList);
    if (iter.NotNull()){
        cout<<" "<<*iter.First();
        while (iter.NextNotNull())
            cout<<"->"<<*iter.Next();
    }

    cout <<"测试循环"<<endl;
    ListIterator <int > it(intList);
    cout<<*iter.First()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    //std::cout << "" <<iter.First()<<std::endl;
    return 0;
}