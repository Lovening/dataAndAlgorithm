#include <iostream>

using namespace std;
//迭代归并排序
void IterateMerge(int a[],int start,int end)
{

}

//int array[10]={9,67,32,45,3,5,32,8,7,10};
//递归归并排序
//合 将数值合并起来，放到同一个数组之中
void merge(int a[],int start,int mid,int end,int temp[])
{
    int left = start;//左序列指针
    int right = mid+1;//右序列指针
    int index = 0;
    while (left <= mid && right <= end)
    {
        if(a[left] <= a[right]){
            temp[index] = a[left++];//这里++left是要不断的往后取值
        }else{
            temp[index] = a[right++];
        }
        index++;
    }

    //剩余数值的处理
    while (left <= mid)
    {
        temp[index++] = a[left++];
    }

    while (right<=end)
    {
        temp[index++] = a[right++];
    }

    //此时temp中为排序好的数组，将排序好的数组放回到array中
    index = 0;
    while (start <= end)
    {
        a[start++] = temp[index++];
    }
}

//分  递归调用，将数组分成若干份，直到每份只有一个数值
void recursiveMerge(int a[],int start,int end,int temp[])
{
    if(start < end){
        int mid = (start + end)/2;
        recursiveMerge(a,start,mid,temp);
        recursiveMerge(a,mid+1,end,temp);
        merge(a,start,mid,end,temp);
    }

}
int main() {

    int array[10]={9,67,32,45,3,5,32,8,7,10};
    int temp[10] ={0};
    recursiveMerge(array,0,9,temp);

    for (int i = 0; i < 10; ++i) {
        cout<<"data " <<array[i]<<endl;
    }
    //std::cout << "Hello, World!" << std::endl;

    return 0;
}