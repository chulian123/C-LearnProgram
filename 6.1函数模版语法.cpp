//
// Created by 之倾 on 2022/9/27.
//
//#include <iostream>
//using namespace std;
////函数交换
//
////两个整形交换数据函数
//void swapInt(int &a,int&b){
//    int temp =a;
//    a=b;
//    b=temp;
//}
////交换两个浮点数函数
//void swapDouble( double &a,double &b){
//    double  temp=a;
//    a=b;
//    b=temp;
//
//
//}
////函数模版
//template<typename T>//声明一个模版，告诉编译器后面代码的T不要报错
//void MySwap(T &a,T &b  ){
//    T temp =a;
//    a=b;
//    b=temp;
//}
//
//void test01(){
//    int  a=10;
//    int b=20;
//   // swapInt(a,b);
//   //利用函数模版交换
//   //两种方式
//   //1，自动类型推导
//   //MySwap(a,b);
//   //2.显示制定类型
//    MySwap<int>(a,b);
//
//    cout<<"a="<<a<<endl;
//    cout<<"b="<<b<<endl;
//
//    double  c=1.1;
//    double  d =2.5;
//    swapDouble(c,d);
//    cout<<"c="<<c<<endl;
//    cout<<"d="<<d<<endl;
//}
//
//
//int main(){
//
//    test01();
//}