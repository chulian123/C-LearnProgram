//#include <iostream>
//using namespace std;
////�ܽ᣺������������������Ԫ����ʵ������Զ�����������
//
////�������������
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
//	//���ó�Ա�������� ���������
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
////ֻ������ȫ�ֺ����������������
////ȫ�ֺ���ʵ����������
////ostream����ֻ����һ��
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_a << " b:" << p.m_b;
//	return out;
//}
//
//void test01() {
//	Person p(10,10);
//	
//	cout << p << endl;//��ʽ���
//}
//
//
//int main() {
//	test01();
//}