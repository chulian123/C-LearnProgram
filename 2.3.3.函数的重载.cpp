#include <iostream>
//using namespace std;
////函数重载
////可以让函数名相同，提高复用性
//
////函数重载的 满足条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同，或者个数不同，顺序不同
//
//void func() {
//	cout << "func的调用1" << endl;
//}
//void func(int a) {
//	cout << "func(int a)的调用2" << endl;
//}
//void func(double a) {
//	cout << "func(double a)的调用3" << endl;
//}
//void func(int a,double b) {
//	cout << "func(int a,double a)的调用4" << endl;
//}
//void func(double a, int b) {
//	cout << "func(double a,int a)的调用5" << endl;
//}
////注意事项
////函数的返回值不可以作为函数重载的条件
////int func(double a, int b) {//错误写法
////	cout << "func(double a,int a)的调用5" << endl;
////}
//void func(string a) {
//	cout << "func(string a)的调用6" << endl;
//}
//
//
//
//int main() {
//
//	func();//调用func1的输出
//	func(1);//调用func2的输出
//	func(2.1);//调用func3xx8的输出
//	func(1,2.1);//调用func4的输出
//	func(2.5,1);//调用func5的输出
//	func("a");//调用func6的输出
//	
//
//}