////
//// Created by 之倾 on 2022/9/27.
////
//#include "iostream"
//using namespace std;
////函数模版注意事项
//template<typename T>//typeman 可以替换为class
//void MySwap(T&a,T&b){
//    T temp =a;
//    a=b;
//    b=temp;
//}
////1.自动模型推导，必须推导出一致的数据类型T才可以使用
//void test01(){
//    int  a=10;
//    int b=20;
//    char c='c';
//    //MySwap(a,b);
//    //MySwap(a,c);//错误推导不出一致的T类型
//    cout<<"a="<<a<<endl;
//    cout<<"b="<<b<<endl;
//}
////2，模版必须确定出T的数据类型 才可以使用
//template <class  T>
//void func(){
//    cout<<"func的调用"<<endl;
//
//}
//void test02(){
//    func<int>();
//}
//
//
//
//int main(){
//      //test01();
//      test02();
//}
