//#include <iostream>
//using namespace std;
//
////动物类
//class Animal {
//public:
//	int m_age;
//};
////利用虚继承 解决菱形继承的问题
////继承之前加上关键词 virtual  变为虚拟继承
//// Animal成为虚基类
////羊类
//class Sheep :virtual public Animal {
//
//};
//
////骆驼类
//class Alpaca : virtual public Animal {
//
//};
////羊骆类
//class SheepAlpaca :public Sheep, public Alpaca {
//
//};
//
//void test01() {
//	SheepAlpaca sa;
//	sa.Sheep::m_age = 19;
//	sa.Alpaca::m_age = 20;
//	//当菱形继承,两个父类拥有相同数据,需要加作用域来区分
//	cout << "羊sa.Sheep::m_age=" << sa.Sheep::m_age << endl;
//	cout << "骆驼sa.Alpaca::m_age=" << sa.Alpaca::m_age << endl;
//	cout << "ST_m_age=" << sa.m_age << endl;//有virtual关键字也解决了 数据不明确问题
//
//	//这份数据我们知道 只需要一份就可以,菱形继承导致两份数据 会早饭资源浪费
//
//
//}
//
//int main() {
//	test01();
//}