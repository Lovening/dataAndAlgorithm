#include <iostream>

void selectSort(int* a,int len)
{
    int min;
    for(int i = 0; i< len;++i){
        min = i;
        for(int j = i+1;j<len;++j){
            if(a[j] < a[min]){
                min = j;
            }
        }
//        a[i] = a[i]^a[min];
//        a[min] = a[i]^a[min];
//        a[i] = a[i]^a[min];
        std::swap(a[i],a[min]);

    }
}

int main() {

    int list[10] = {8,5,10,4,2,94,2,3,83,11};
    selectSort(list,10);
    for (int i = 0; i < 10; ++i) {
        std::cout << "num:" << list[i]<<std::endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}