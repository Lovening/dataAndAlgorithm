#include <iostream>
#include "mlist.h"

using namespace std;
int main() {

    List<int> intList;
    intList.insert(15);
    intList.insert(16);

    intList.show();
    std::cout << "" <<std::endl;
    return 0;
}