//#include <iostream>
//using namespace std;
////��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
////
////4.5.1 �Ӻ����������
////���ã�ʵ�������Զ�������������ӵ�����
//
////1.��Ա��������+��
////2.ȫ�ֺ�������+��
//
////�ܽ�
////�ܽ�1���������õ��������͵ı��ʽ�ĵ�������ǲ����ܸı��
////
////�ܽ�2����Ҫ�������������
//class Person {
//	
//public:
//	//1.��Ա��������+��
//
//	//Person operator+(Person p)
//	//{
//	//	Person temp;
//	//	temp.m_a = this->m_a + p.m_a;//thisָ����õĸú���ֵ��ʵ��������
//	//	temp.m_b = this->m_b + p.m_b;
//	//	return temp;
//	//}
//
//	int m_a;
//	int m_b;
//};
//
////2.ȫ�ֺ�������+��
//Person operator+ (Person p1, Person p2)//ֵ���� Ҳ�������ô���(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_a = p1.m_a + p1.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
////person + int�������ذ汾
//Person operator+ (Person p1,  int num)//ֵ���� Ҳ�������ô���(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//}
//
//
//void test01() {
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 20;
//
//	Person p2;
//	p2.m_a = 10;
//	p2.m_b = 20;
//	//��Ա�������ر��ʵĵ���
//	//Person p3 = p1.operator+(p2);
//	// 
//	////ȫ�ֺ������ر��ʵĵ���
//	//Person p3 = operator+(p1,p2);
//	// 
//	//��������� Ҳ���Է�����������
//	Person p3= p1 + p2 ;
//	//��Ա��������+��  ȫ�ֺ�������+��
//
//	Person p4 = p1 + 100;//person + int
//
//
//	cout << "p3��aΪ:" << p3.m_a << endl;
//	cout << "p3��bΪ:" << p3.m_b << endl;
//
//
//	cout << "p4��aΪ:" << p4.m_a << endl;
//	cout << "p4��bΪ:" << p4.m_b << endl;
//}
//
//int main() {
//	test01();
//}