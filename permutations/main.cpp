#include <iostream>

using namespace std;

int permutations(char* a,int start,int end)
{
    //找到递归的停止条件;
    if(left == right){
        for(int i=0;i<=end;++i)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    } else
    {
        for(int i = start;i<=end;++i){
            swap(a[start],a[i]);
            permutations(a,start+1,end);
            swap(a[start],a[i]);
        }

    }


//    //先找a 开头的排列组合
//    permutations(a,1,2);
//    //再找b 开头的排列组合
//    swap(a[0],a[1]);
//    permutations(a,1,2);
//    swap(a[0],a[1]);
//    //再找c 开头的排列组合
//    swap(a[0],a[2]);
//    permutations(a,1,2);
//    swap(a[0],a[2]);
}

int main() {

    char a[]="abc";
    permutations(a,0,2);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}