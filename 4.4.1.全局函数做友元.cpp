//#include <iostream>
//using namespace std;
//
//class Building {
//	//Goodfriendȫ�ֺ��� �� building�ĺ��������� ���Է���building����˽�г�Ա��m_BedRoom
//	friend void goodFreind(Building* building);
//
//public:
//	Building() {
//		m_Sittingroom = "����";
//			m_BedRoom = "����";
//	}
//
//public:
//	string m_Sittingroom;
//private:
//	string m_BedRoom;
//};
//
//void goodFreind(Building *building) {
//	cout << "�û���ȫ�ֺ��� �ڷ���:"<< building->m_Sittingroom <<endl;
//	cout << "�û���˽�к��� �ڷ���:" << building->m_BedRoom << endl;
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