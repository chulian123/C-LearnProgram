﻿//#include <iostream>
//using namespace std;
////成员变量 和成员函数分开储存的
//class Person {
//	int m_a;//非静态成员变量 属于类的对象上
//	static int m_b;//静态成员变量 不属于类的对象上
//
//	void func() {}//非静态成员函数 不属于类的对象上
//	static void func2(){}//静态成员函数 不属于类的对象上
//
//	
//};
//
//int Person::m_b = 10;
//void test01(){
//	Person p;
//	//空对象占用空间是1:
//	//C++编译器会给每个对象也分配一个字节空间,是为了区分空对象占内存的位置
//	//每个空对象也有一个独一无二的内存地址
//	cout << "size of p =" << sizeof(p) << endl;
//}
//
//void test02() {
//	Person p;
//	
//	cout << "size of p =" << sizeof(p) << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//}