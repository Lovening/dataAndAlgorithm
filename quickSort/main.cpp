#include <iostream>
using namespace std;

template <typename  T>
void  quickSort(T* a,int left,int right)
{
//    int l,j,p;
//    //递归终止条件
//    if(left < right){
//        l = left;
//        j = right+1;
//        p = left;
//        do {
//            do{l++;}while (a[l]<a[p] );
//            do{j--;}while (a[j] > a[p] );
//            if(l<j) std::swap(a[l],a[j]);
//        }while (l<j);
//        swap(a[left],a[j]);
//        quickSort(a,left,j-1);
//        quickSort(a,j+1,right);
//    }

    int l,r,p;
    if(left < right){
        l = left;
        r = right;
        p = a[left];
        while (l != r){
            //这里如果不判断l<r,会形成死循环，i和r 永远不会相等
            while (a[r] >= p && l <r){
                r--;
            }
            while (a[l] <= p && l <r){
                l ++;
            }
            if(l < r) {
                swap(a[l], a[r]);
            }
        }
        //将轴数交换到基位
        swap(a[left],a[r]);
        quickSort(a,left,r-1);
        quickSort(a,r+1,right);
    }

}
int main() {

    int a[] = {8,6,4,2,0,1,3,5,7,9,7};
    quickSort(a,0,10);
    for (int i = 0; i < 11; ++i) {
        std::cout << "" <<a[i]<< std::endl;
    }
    return 0;
}