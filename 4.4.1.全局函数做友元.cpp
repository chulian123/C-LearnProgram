//#include <iostream>
//using namespace std;
//
//class Building {
//	//Goodfriend全局函数 是 building的函数好朋友 可以访问building里面私有成员的m_BedRoom
//	friend void goodFreind(Building* building);
//
//public:
//	Building() {
//		m_Sittingroom = "客厅";
//			m_BedRoom = "卧室";
//	}
//
//public:
//	string m_Sittingroom;
//private:
//	string m_BedRoom;
//};
//
//void goodFreind(Building *building) {
//	cout << "好基友全局函数 在访问:"<< building->m_Sittingroom <<endl;
//	cout << "好基友私有函数 在访问:" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodFreind(&building);
//}
//int main() {
//	test01();
//}