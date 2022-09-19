//#include <iostream>
//using namespace std;
////继承中同名成员处理方式
////总结
////子类对象可以直接访问到子类中同名成员
////子类对象加作用域可以访问到父类同名成员
////当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
//class Base {
//public:
//	Base() {
//		m_a = 10;
//	}
//	void func() {
//		cout << "Base-func的调用" << endl;
//	}
//	void func(int a) {
//		cout << "Base-func(int a)的调用" << endl;
//	}
//	int m_a;
//};
//class Son :public Base {
//public:
//	Son() {
//		m_a = 200;
//	}
//	void func() {
//		cout << "Son-func的调用" << endl;
//	}
//	int m_a;
//};
////同名成员属性处理方式
//void test01() {
//	Son s;
//	cout << "son的m_a=" << s.m_a << endl;
//	//两种实现方式获取父类的数值
//	Base b;//之前旧的方式
//	cout << "Base的m_a=" << b.m_a << endl;
//	//如果通过子类对象访问到父类的同名成员 需要加作用域
//	cout << "Base的m_a=" << s.Base::m_a << endl;
//
//}
//
//
////同名成员函数处理
//void test02() {
//	Son s;
//	
//	s.func();//直接调用 调用就是子类成员函数的同名成员
//	//如何调用父类中的同名成员函数?
//	s.Base::func();
//
//	//如果子类中出现和父亲同名的成员函数,子类的同名成员会隐藏父类中所有同名成员函数
//	//s.func(200);//错误
//	//如果想访问到父类的中被隐藏的同名成员函数,需要加作用域
//	s.Base::func(100);
//}
//
//int main() {
//	//test01();
//	test02();
//}