//#include <iostream>
//using namespace std;
//
////继承方式
//
////公共继承
//class Base1 {
//public:
//	int m_a;//父类中的公共权限 
//protected:
//	int m_b;//父类中的权限成员
//private:
//	int m_c;//父类中的私有成员
//};
//
//class Son1 :public Base1 {
//public:
//	void func() {
//		m_a = 10;//父类中的公共成员 到子类仍然是公共权限
//		m_b = 10;//父类中的权限成员 到子类仍然是保护权限
//
//		//m_c =10;////父类中的私有 子类无法获得
//	}
//};
//void test01() {
//	Son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 10;//到son1 M-b是保护权限 类外访问不到类内的
//}
////保护继承
//class Base2 {
//public:
//	int m_a;//父类中的公共权限 
//protected:
//	int m_b;//父类中的权限成员
//private:
//	int m_c;//父类中的私有成员
//};
//class Son2 :protected Base2 {
//	
//public:
//	void func() {
//		m_a = 10;//父类中的公共成员 到子类仍然是保护权限
//		m_b = 10;//父类中的保护成员 到子类仍然是保护权限
//
//		//m_c =10;////父类中的私有 子类无法获得
//	}
//};
//void test02() {
//	Son2 s1;
//	//s1.m_a = 100;//在son2中m_a变为保护权限 因此类外不可访问
//	//s1.m_b = 100;//在son2中m_b变为保护权限 因此类外不可访问
//}
//
////私有继承
//class Base3 {
//public:
//	int m_a;//父类中的公共权限 
//protected:
//	int m_b;//父类中的权限成员
//private:
//	int m_c;//父类中的私有成员
//};
//
//class Son3 :private Base3 {
//public:
//	void func() {
//		m_a = 10;//父类中的公共成员 到子类变成是私有权限
//		m_b = 10;//父类中的保护成员 到子类变成是私有权限
//
//		//m_c =10;////父类中的私有 子类无法获得
//	}
//};
//void test03() {
//	Son3 s1;
//	//s1.m_a = 100;//在son3中m_a变为私有权限 因此类外不可访问
//	//s1.m_b = 100;//在son3中m_b变为私有权限 因此类外不可访问
//}
//int main() {
//
//}