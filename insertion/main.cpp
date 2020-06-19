#include <iostream>

using  namespace std;
//void insertionSort(int *a,int len)
//{
//    int in,out,temp;
//    for(out = 1;out< len ;++out){
//        in = out;
//        temp = a[out];
//        while (in > 0 && a[in-1] >= temp){
//                a[in] = a[in-1];
//                -- in;
//        }
//        a[in] = temp;
//    }
//
//}

template <typename T> void insertionSort( T* a,int len)
{
    int in,out,temp;
    for(out = 1;out< len ;++out){
        in = out;
        temp = a[out];
        while (in > 0 && a[in-1] >= temp){
                a[in] = a[in-1];
                -- in;
        }
        a[in] = temp;
    }
}

template<typename  T>void insertionSort_2( T* a,int len)
{
    int in,out,temp;
    for(out = 1;out< len ;++out){
        in = out;
        temp = a[out];
        while (in > 0 && a[in-1] >= temp){
            a[in] = a[in-1];
            -- in;
        }
        a[in] = temp;
    }

}

int main() {
    int a[]={2,8,1,4,5,3,7,10};
    insertionSort(a,8);
    for(int i = 0;i<8;++i){
        cout<<a[i]<<endl;
    }
    return 0;
}