//
// Created by 之倾 on 2022/9/27.
//

#include "iostream"
using namespace std;
//实现通用的 对数组进行排序的函数
//规则 从大到小
// 算法 选择排序
//测试 char，int两种类型

//交换函数模版
template<typename T>
void MySwap(T&a,T&b){
    T temp= a;
    a=b;
    b=temp;
}

//排序算法
template<class T>
void mySort(T arr[],int len){

    for (int i = 0; i < len; i++) {
      int max=1;//认定最大值的下标
        for (int j = i+1; j <len ; j++) {
            //认定最大值 遍历出的数值要下，说明j的下标元素才是最大值
            if (arr[max]<arr[j]){
                max=j;//更新最大值

            }
            if(max!=i){
                //交换max和i的元素
                MySwap(arr[max],arr[i]);
            }
        }
    }
}
//打印函数
template<class T>
void printArray(T arr[],int len){
     for(int i=0;i<len;i++){
         cout<<arr[i]<<" ";

     }
   cout<<endl;
}

void test01(){
    //测试char数组
    char charArr[]="cbkhahf";
    int num= sizeof (charArr)/sizeof (char);
    mySort(charArr,num);
    printArray(charArr,num);
}
void test02()
{
    //测试int数组
    int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
    int num = sizeof(intArr) / sizeof(int);
    mySort(intArr, num);
    printArray(intArr, num);
}


int main(){
   test01();
   test02();

}