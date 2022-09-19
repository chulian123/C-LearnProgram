//#include <iostream>
//using namespace std;
////重载关系运算符
//
//class Person {
//
//public:
//	Person(string name,int age) {
//		m_name = name;
//		m_age = age;
//	}
//	//重载 ==号
//	bool operator==(Person &p) {//bool类型用来返回真与假 true or false
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(Person& p) {//bool类型用来返回真与假 true or false
//		if (this->m_name != p.m_name && this->m_age != p.m_age)
//		{
//			return false;
//		}
//		return true;
//	}
//
//	string m_name;
//	int m_age;
//
//
//};
//
//void test01() {
//	Person p1("Tom",18);
//	Person p2("Tm", 18);
//
//	if (p1 == p2) {//==重载
//		cout << "p1 和p2 相同" << endl;
//	}
//	else {
//		cout << "p1 和p2 不相同" << endl;
//	}
//
//	if (p1 != p2) {//==重载
//		cout << "p1 和p2 不相同" << endl;
//	}
//	else {
//		cout << "p1 和p2 相同" << endl;
//	}
//
//}
//
//
//int main() {
//	test01();
//}