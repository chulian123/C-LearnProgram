//#include <iostream>
//using namespace std;
////��Ķ�����Ϊ��ĳ�Ա
////����Phone���ഴ���������Person����
//
////�ֻ���
//class Phone {
//public:
//	Phone(string Pname)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//		m_name = Pname;
//	}
//	~Phone() {
//		cout << "Phone����������" << endl;
//	}
//	string m_name;//�ֻ�Ʒ��
//};
//class Person {
//public:
//	//Phone m_phone =pname ��ʽת����
//	Person(string name, string Pname) :m_name(name),m_phone(Pname) {
//		cout << "Person�Ĺ��캯������" << endl;
//
//	}
//	~Person() {
//		cout << "Person����������" << endl;
//	}
//
//	string m_name;
//
//	Phone m_phone;
//};
////�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
//	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//	//����˳���빹���෴
//void test01() {
//	Person p("����", "ƻ��");
//	cout << p.m_name<<"����" << p.m_phone.m_name << endl;
//}
//int main() {
//	test01();
//}