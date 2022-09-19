//#include <iostream>
//using namespace std;
////静态成员变量
//class Person {
//public:
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配了内存
//	//3.类内声明,类外初始化操作
//	static int m_a; //类内声明
//
//	//静态成员变量也有访问权限;
//private:
//	static int m_b;
//
//
//
//};
//
//int Person::m_a = 100; //类外初始化操作 指明该数据是属于Person内的数据
//int Person::m_b = 200;
//
//void test01() {
//	Person p;
//	/// 100
//	
//	cout << p.m_a << endl;
//	Person p2;
//	p2.m_a = 200;
//	cout << p.m_a << endl;
//}
//void test02() {
//	//静态成员变量 不属于某个对象上,所有对象都共享同一份数据
//	//因此静态成员变量有访问方式
//
//    //1.通过对象进行访问
//	Person p;
//	/// 100
//
//	cout <<"通过对象进行访问" << p.m_a << endl;
//	//2.通过类名进行访问
//	cout<<"通过类名进行访问" << Person::m_a << endl;
//	//cout << "通过类名进行访问" << Person::m_b << endl;//类外访问不到私有private静态成员变量
//
//}
//
//
//int main() {
//	//test01();
//	test02();
//}