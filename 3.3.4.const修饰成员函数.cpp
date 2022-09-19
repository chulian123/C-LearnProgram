//#include <iostream>
//using namespace std;
//常函数
//class Person {
//public:
//	this指针的本质 是指针常量 指针的指向不可以修改的
//	const person * const this
//	
//	void showPerson()  const
//	{
//		this->m_a = 100;
//		this = NULL;//this指针不可以修改指针的指向
//         this->m_b = 100;
//
//	}
//
//	void func() {
//
//	}
//	int m_a;
//	mutable int m_b;//特殊变量,即使在常函数中 也可以修改这个指 可加mutable 来达到this->修改数值
//};
//void test01() {
//	Person p;
//	p.showPerson();
//	
//}
//
//常对象
//void test02() {
//	const Person p;
//	p.m_a = 100;//错误
//	p.m_b = 100;//有mutable的特殊 在常对象下也可以修改
//	p.func();//常对象 不可以调用普通成员函数 因为普通成员函数可以修改属性
//
//
//}
//
//
//
//int main() {
//
//}