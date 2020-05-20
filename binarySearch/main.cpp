#include <iostream>
/*
 * 二分查找需是有序的的队列
 * */

using namespace std;

int binarySearch(int *a,const int len,int n)
{
    int left,right,mind;
    left = 0;
    right = len -1;

    while (left <= right){
        mind = (left+right)/2;
        if(a[mind] == n){
            return mind;
        } else if (a[mind] > n){
            right =mind -1;
        } else if(a[mind] < n){
            left =mind +1;
        }
    }

    return -1;
}
int main() {
    int data[9] = {1,2,3,4,5,6,7,8,9};
    int ret = binarySearch(data,10,7);
    if(ret >= 0){
        cout<<"search num at "<<ret<<endl;
    } else
        cout<<"no search";
    return 0;
}