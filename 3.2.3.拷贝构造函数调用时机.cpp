//#include <iostream>
//using namespace std;
////������������ʱ��
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
////2.ֵ���ݵķ�ʽ������������ֵ
////3.ֵ��ʽ���ؾֲ�����
//class Person {
//public:
//	Person() {
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int age) 
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_age; 
//
//};
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������Ϊ:" << p2.m_age << endl;
//}
////2.ֵ���ݵķ�ʽ������������ֵ
//void Dowork(Person  p) {
//
//}
//void test02() {
//	Person p;
//	Dowork(p);
//}
////3.ֵ��ʽ���ؾֲ�����
//Person Doword2() {
//	Person p1;
//	cout << (int*)&p1 << endl;
//
//	return p1;
//	
//
//}
//void test03() {
//	Person p = Doword2();
//	cout << (int*)&p<< endl;
//
//}
//
//
//int main() {
//	//test01();
//	//test02();
//	test03();
//
//}