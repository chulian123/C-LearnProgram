//#include <iostream>
//using namespace std;
////��̬��Ա����
////���ж�����ͬһ������
////��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//class Person {
//public:
//	//��̬��Ա����
//	static void func() {
//		
//		m_a = 100;//��̬��Ա���� ���Է��� ��̬��Ա����
//		//m_b = 200;//��̬��Ա���������Է��� �Ǿ�̬��Ա���� �޷�����ĳ�����������
//		cout << "static void func�ĵ���" << endl;
//	}
//	static int m_a ;//��̬��Ա����
//	int m_b;//�Ǿ�̬��Ա����
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private://˽��������
//	static void test02() {
//		cout<<"static void func2�ĵ���" << endl;
//	}
//
//
//};
//int Person::m_a = 0;
//
////���ַ��ʷ���
//void test01() {
////1.ͨ���������
//	Person p;
//	p.func();
//	//2.ͨ���������з���
//	Person::func();
//	//Person::func2();//������ʲ���˽�о�̬��Ա����
//
//}
//
//int main() {
//	test01();
//}