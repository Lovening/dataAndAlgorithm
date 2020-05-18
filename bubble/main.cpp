#include <iostream>


using namespace std;

int bubbleSort(int array[] ,int len)
{
    for(int i = 0;i< len-1;++i){ //n个数扫描n-1次
        for(int j= 0;j< len-i-1;++j)
            if(array[j] > array[j+1]){
                array[j] = array[j]^array[j+1];
                array[j+1] = array[j]^array[j+1];
                array[j] = array[j]^array[j+1];
        }
    }
}
int main() {
    int a[10]{8,9,23,7,5,1,54,9,7,0};

    bubbleSort(a,10);
    for(int i=0;i<10;i++){
        std::cout << "num:" <<a[i]<<std::endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
