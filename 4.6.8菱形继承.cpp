//#include <iostream>
//using namespace std;
//
////������
//class Animal {
//public:
//	int m_age;
//};
////������̳� ������μ̳е�����
////�̳�֮ǰ���Ϲؼ��� virtual  ��Ϊ����̳�
//// Animal��Ϊ�����
////����
//class Sheep :virtual public Animal {
//
//};
//
////������
//class Alpaca : virtual public Animal {
//
//};
////������
//class SheepAlpaca :public Sheep, public Alpaca {
//
//};
//
//void test01() {
//	SheepAlpaca sa;
//	sa.Sheep::m_age = 19;
//	sa.Alpaca::m_age = 20;
//	//�����μ̳�,��������ӵ����ͬ����,��Ҫ��������������
//	cout << "��sa.Sheep::m_age=" << sa.Sheep::m_age << endl;
//	cout << "����sa.Alpaca::m_age=" << sa.Alpaca::m_age << endl;
//	cout << "ST_m_age=" << sa.m_age << endl;//��virtual�ؼ���Ҳ����� ���ݲ���ȷ����
//
//	//�����������֪�� ֻ��Ҫһ�ݾͿ���,���μ̳е����������� ���緹��Դ�˷�
//
//
//}
//
//int main() {
//	test01();
//}