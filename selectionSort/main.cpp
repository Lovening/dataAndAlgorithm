#include <iostream>

using namespace std;
void selectSort(int* a,int len)
{
    int min;
    for(int i = 0; i< len-1;++i){
        min = i;
        for(int j = i+1;j<len;++j){
            if(a[j] < a[min]){
                min = j;
            }
        }
//        int x = a[i];
//        int y = a[min];
//        x = x^y;
//        y = x^y;
//        x = x^y;
// 在用数组进行的异或的时候，如果两个值相等，则想当于 a^=a;a^=a;a^=a;a对自己做了三次的异或运算，结果为0
//参考地址 https://blog.csdn.net/u013443618/article/details/49632975    https://zhuanlan.zhihu.com/p/34964928
        if(a[i] != a[min]) {
            a[i] = a[i]^ a[min];
            a[min]= a[i]^a[min];
            a[i] = a[i]^a[min];
        }
//        std::swap(a[i],a[min]);
//        a[i] = x;
//        a[min] = y;

    }
}

int main() {

    int list[4] = {5,4,2,1};
    //
    selectSort(list,4);
    for (int i = 0; i < 4; ++i) {
        std::cout << "num:" << list[i]<<std::endl;
    }
    return 0;
}