//#include <iostream>
//using namespace std;
////构造函数的调用规则
////默认情况下，c++编译器至少给一个类添加3个函数
////1．默认构造函数(无参，函数体为空)
////
////2．默认析构函数(无参，函数体为空)
////
////3．默认拷贝构造函数，对属性进行值拷贝
////
////构造函数调用规 则如下：
////
////如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
////
////如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//class Person {
//public:
//	Person() {
//		cout << "Person的默认构造函数调用" << endl;
//
//	}
//	Person(int age) {//有参构造函数
//		m_age = age;
//		cout << "Person的有参构造函数调用" << endl;
//
//	}
//	Person(const Person & p) {//拷贝构造函数
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}
//	~Person() {
//		cout << "Person的构造函数调用" << endl;
//	}
//	int  m_age;
//};
//void test01() {
//	Person p;
//	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
//	p.m_age = 18;
//	Person p2(p);
//	cout << "p2的年龄是:" << p.m_age << endl;
//}
//
//void test02() {
//	Person p(28);
//	Person p2(p);
//	cout << "p2的年龄是:" << p.m_age << endl;
//}
//int main() {
//	//test01();
//	test02();
//}