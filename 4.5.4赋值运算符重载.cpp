//#include <iostream>
//using namespace std;
////赋值运算符重载
//
//class Person {
//public:
//	Person(int age) {
//		m_age = new int(age);//开创一个堆区 用指针来管理age
//	}
//	~Person() {
//		if (m_age!= NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	//重载 赋值运算符
//	Person& operator=(Person &p) {
//		//编译器提供的是浅拷贝m_age = p.m_age
//		// 
//		//应该是否有属性在堆区 如果有先释放干净 再深拷贝
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//		//再进行深拷贝操作
//	 m_age =	new int(*p.m_age);
//
//	 return *this;//返回this
//	}
//	int* m_age;
//};
//
//void test01() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;//赋值操作
//	cout<<"p1的年龄"<<*p1.m_age << endl;
//	cout << "p2的年龄" << *p2.m_age << endl;
//	cout << "p2的年龄" << *p3.m_age << endl;
//}
//int main() {
//	test01();
//
//	/*int a = 10;
//	int b = 20;
//	int c = 30;
//	c = b = a;
//	cout << "a:" << a << endl;
//	cout << "b:" << b << endl;
//	cout << "c:" << c << endl;*/
//}