#include <iostream>
#include <list>

using namespace std;

int maxdigit(int data[],int n)
{
    int d= 1;
    int p = 10;
    for(int i = 0;i<n;++i){
        while (data[i] >p){
            p *= 10;
            ++d;
        }
    }
    return d;
}

int radixSort(int data[],int len){

    int digits = maxdigit(data,len);
    list<int > list[10];
    int d,j,k,factor;
    //按照位数进行排序
    for(d =1,factor =1;d<=digits;factor*=10,++d){
        for(j = 0;j<len;j++){
            //提取每个数的位数 每位的数放到各自的链表，如果位数上是9，就放7那个链表中
            list[(data[j]/factor)%10].push_back(data[j]);
        }
        for(j=k=0;j<10;j++){
            while (!list[j].empty()){
                data[k++]=list[j].front();
                //取出数据后删除
                list[j].pop_front();
            }
        }
    }
}

int main() {

    int data[10] ={179,208,306,93,759,984,55,9,271,33};
    radixSort(data,10);
    for(int i = 0;i<10;++i)
        cout<<data[i]<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
