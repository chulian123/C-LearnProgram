#include <iostream>
using namespace std;
////��Ա��������Ԫ
//class Building;
//class Goodgay {
//	
//public:
//	Goodgay();
//	void visit();//��visit�������Է���Building��˽�г�Ա
//	void visit2();//��visit2����!!�����Է���Building��˽�г�Ա
//
//	Building* building;
//
//
//};
//class Building {
//	friend void Goodgay::visit();//Goodgay���µ�visit��Ա������Ϊ����ĺ�����,���Է���˽�г�Ա
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom;//����
//
//
//};
////����ʵ�ֳ�Ա����
//Building::Building() {
//	this->m_SittingRoom = "����";
//    this->m_BedRoom = "����";
//}
//Goodgay::Goodgay() {
//	building = new Building;
//}
//
//
//void Goodgay::visit(){//��visit�������Է���Building��˽�г�Ա
//	cout << "visit�������ڷ���" << building->m_SittingRoom << endl;
//	cout << "visit�������ڷ���" << building->m_BedRoom << endl;
//}
//void Goodgay::visit2() {//��visit2����!!�����Է���Building��˽�г�Ա
//	cout << "visit2�������ڷ���" << building->m_SittingRoom << endl;
////cout << "visit�������ڷ���" << building->m_BedRoom << endl;//������friend��������ֻ��visit�� û������visit2Ҳ����ʹ��
//}
//
//void test01() {
//	Goodgay m1;
//	m1.visit();
//	m1.visit2();
//}
//
//
//int main() {
//	test01();
//}