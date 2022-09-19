#include <iostream>
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件
//void func(int &a) {//int& a=10 不合法
//	
//	cout << "int& a的调用" << endl;
//}
//
//void func(const int &a) {//const int& a=10 合法
//	cout << "const int& a的调用" << endl;
//}
////2.函数重载碰到默认参数
//void func2(int a) {
//	cout << "int  a的func2调用" << endl;
//}void func2(int a,int b) {//int b=10 
//	cout << "int a int b的func2调用" << endl;
//}
//int main() {
//	int a = 10;
//	func(a);
//	func(100);
//	func2(10);//当函数重载碰到默认参数，出现歧义，报错
//	
//}