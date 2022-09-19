//#include<iostream>
//
//using namespace std;
//
//int main() {
//    //1.const修饰指针 常量指针
//    int a = 10;
//    int b = 10;
//    cout << "a值的内存地址" << &a << endl;
//    cout << "b值的内存地址" << &b<< endl;
//    const int * p = &a;//指针指向的值不可以修改，指针的指向可以修改
//    cout << "互换前的地址内存地址" << p << endl;
//    //*p = 20;错误的形式，不可以通过这种方法修改a的数值
//    p = &b;//正确
//   
//    cout <<"互换后的内存地址" << p << endl;
//   
//
//
//       
//    //2.const修饰常量 指针常量
//    //指针的指向不可以改，指针指向的值可以改
//   cout << "修改前的a值" << a << endl;
//    
//    int * const p2 = &a;
//    *p2 = 100;
//    cout <<"修改后的a值" << a << endl;
//
//    //p2 = &b; 错误，指针的指向不可以改
//
//
//    //3.const修饰指针和常量
//    const int* const p3 = &a;
//    //指针的指向 和 指针指向的值 都不可以修改
//   // *p3 = 100;错误的方法
//   // p3 = &b;错误的方法
//}