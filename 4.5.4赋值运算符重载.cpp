//#include <iostream>
//using namespace std;
////��ֵ���������
//
//class Person {
//public:
//	Person(int age) {
//		m_age = new int(age);//����һ������ ��ָ��������age
//	}
//	~Person() {
//		if (m_age!= NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	//���� ��ֵ�����
//	Person& operator=(Person &p) {
//		//�������ṩ����ǳ����m_age = p.m_age
//		// 
//		//Ӧ���Ƿ��������ڶ��� ��������ͷŸɾ� �����
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//		//�ٽ����������
//	 m_age =	new int(*p.m_age);
//
//	 return *this;//����this
//	}
//	int* m_age;
//};
//
//void test01() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;//��ֵ����
//	cout<<"p1������"<<*p1.m_age << endl;
//	cout << "p2������" << *p2.m_age << endl;
//	cout << "p2������" << *p3.m_age << endl;
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