#include <iostream>

using namespace std;
//引用的基本语法
//数据类型 & 别名 =原名
//
//int main() {
//
//	int a = 10;
//	//创造引用
//	int& b = a;//引用必须初始化
//	//int& b；错误使用
//
//
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 1100;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//    //注意事项
//	//引用初始化后，不可以在改变了
//	int c = 20;
//	b = c;//赋值操作，并不是更改引用；
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//}