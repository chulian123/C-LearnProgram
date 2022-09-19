//#include <iostream>
//using namespace std;
////1.解决名称冲突
//
////2.返回对象本身用*this
//class Person {
//public:
//	Person(int age) {
//		
//		//age= age;//出错 无法正常识别age到底如何操作
//		this->age = age;//this指针指向 被调用的成员函数 所属对象 this指向了下面的p1
//	}
//
//	Person& Personadd(Person &p) {//通过引用的方式传入Person &p
//		this->age += p.age;
//		//this指向p2的指针 而且*this指向就是P2这个对象本体
//		return *this;
//	}
//
//	int age;
//};
//void test01()
//{
//	//1.解决名称冲突
//	Person p1(18);
//	cout << "p1的年龄是:" << p1.age << endl;
//}
////2.返回对象本身用*this
//void test02() {
//	Person p1(10);
//	Person p2(20);
//	p2.Personadd(p1).Personadd(p1).Personadd(p1);//链式编程思想
//	cout << "p2的年龄是"<<p2.age<< endl;
//}
//int main() {
//	test01();
//	test02();
//}