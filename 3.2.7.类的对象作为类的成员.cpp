//#include <iostream>
//using namespace std;
////类的对象作为类的成员
////现有Phone的类创造出来再有Person的类
//
////手机类
//class Phone {
//public:
//	Phone(string Pname)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_name = Pname;
//	}
//	~Phone() {
//		cout << "Phone的析构函数" << endl;
//	}
//	string m_name;//手机品牌
//};
//class Person {
//public:
//	//Phone m_phone =pname 隐式转换法
//	Person(string name, string Pname) :m_name(name),m_phone(Pname) {
//		cout << "Person的构造函数调用" << endl;
//
//	}
//	~Person() {
//		cout << "Person的析构函数" << endl;
//	}
//
//	string m_name;
//
//	Phone m_phone;
//};
////当类中成员是其他类对象时，我们称该成员为 对象成员
//	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//	//析构顺序与构造相反
//void test01() {
//	Person p("初恋", "苹果");
//	cout << p.m_name<<"拿着" << p.m_phone.m_name << endl;
//}
//int main() {
//	test01();
//}