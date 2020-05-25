/***
 * 递归三要素： 1 出口条件  即递归什么时候结束 2 如何由情况"n"变化成 n +1  3 初始条件，以什么样方法开始
 * 首先是思想方法上要转变，不要试图解决问题(这是常规的思考方式)，而应该“鼠目寸光”地只想解决一点点，要点是，解决一点点之后，
 * 剩下来的问题还是原来的问题，但规模要比原问题小了思想和语言是密切相关的，所以问题的提法也很重要。
 * 一个问题这样提可能感觉很难写出递归，换种提法，可能就写出来了平时就要注意用递归的方式思考，
 * 譬如什么是链表？以递归来看就是一个指针，指向一个含有链表的指针。一旦你用这种方式看待链表，你会发现写链表的代码非常容易。
 * 反之，则非常容易拖泥带水
 */

#include <iostream>

using namespace std;

int binarySrarch(int* a,  int num, int left,int right){

    if(left <= right){
        int mid = (left+right) /2;
        if(num < a[mid]) return  binarySrarch(a,num,left,mid-1);
        else if (num >a[mid] )return  binarySrarch(a,num,mid+1,right);
        else if (num == a[mid])return  mid;
    }

    return  -1;
}

int main() {


    int a[10] ={1,2,3,4,5,6,7,8,9,10};
    int i = binarySrarch(a,8,0,9);
    std::cout << "num at :" <<i<< std::endl;
    return 0;
}