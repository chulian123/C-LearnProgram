//#include <iostream>
//using namespace std;
////1.������Ƴ�ͻ
//
////2.���ض�������*this
//class Person {
//public:
//	Person(int age) {
//		
//		//age= age;//���� �޷�����ʶ��age������β���
//		this->age = age;//thisָ��ָ�� �����õĳ�Ա���� �������� thisָ���������p1
//	}
//
//	Person& Personadd(Person &p) {//ͨ�����õķ�ʽ����Person &p
//		this->age += p.age;
//		//thisָ��p2��ָ�� ����*thisָ�����P2���������
//		return *this;
//	}
//
//	int age;
//};
//void test01()
//{
//	//1.������Ƴ�ͻ
//	Person p1(18);
//	cout << "p1��������:" << p1.age << endl;
//}
////2.���ض�������*this
//void test02() {
//	Person p1(10);
//	Person p2(20);
//	p2.Personadd(p1).Personadd(p1).Personadd(p1);//��ʽ���˼��
//	cout << "p2��������"<<p2.age<< endl;
//}
//int main() {
//	test01();
//	test02();
//}