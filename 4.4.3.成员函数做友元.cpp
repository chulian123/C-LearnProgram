#include <iostream>
using namespace std;
////成员函数做友元
//class Building;
//class Goodgay {
//	
//public:
//	Goodgay();
//	void visit();//让visit函数可以访问Building中私有成员
//	void visit2();//让visit2函数!!不可以访问Building中私有成员
//
//	Building* building;
//
//
//};
//class Building {
//	friend void Goodgay::visit();//Goodgay类下的visit成员函数作为本类的好朋友,可以访问私有成员
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//
//
//};
////类外实现成员函数
//Building::Building() {
//	this->m_SittingRoom = "客厅";
//    this->m_BedRoom = "卧室";
//}
//Goodgay::Goodgay() {
//	building = new Building;
//}
//
//
//void Goodgay::visit(){//让visit函数可以访问Building中私有成员
//	cout << "visit函数正在访问" << building->m_SittingRoom << endl;
//	cout << "visit函数正在访问" << building->m_BedRoom << endl;
//}
//void Goodgay::visit2() {//让visit2函数!!不可以访问Building中私有成员
//	cout << "visit2函数正在访问" << building->m_SittingRoom << endl;
////cout << "visit函数正在访问" << building->m_BedRoom << endl;//在上面friend的声明里只有visit的 没有声明visit2也可以使用
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