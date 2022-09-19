//#include <iostream>
//using namespace std;
////总结：重载左移运算符配合友元可以实现输出自定义数据类型
//
////左移运算符重载
//class Person {
//friend ostream& operator<<(ostream& out, Person& p);
//public:
//	Person(int a, int b) {
//		m_a = a;
//		m_b = b;
//	}
//
//
//private:
//	//利用成员函数重载 左移运算符
//	/*void operator<<(Person &p) {
//
//	}*/
//
//
//
//
//	int m_a;
//	int m_b;
//};
////只能利用全局函数重载左移运算符
////全局函数实现左移重载
////ostream对象只能有一个
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_a << " b:" << p.m_b;
//	return out;
//}
//
//void test01() {
//	Person p(10,10);
//	
//	cout << p << endl;//链式编程
//}
//
//
//int main() {
//	test01();
//}