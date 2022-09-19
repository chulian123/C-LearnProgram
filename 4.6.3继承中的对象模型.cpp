//#include <iostream>
//using namespace std;
////继承中的对象模型
//// 结论
////父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到
//class base {
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son :public base {
//public:
//	int m_d;
//
//};
//
//void test01() {
//	cout << "size of Son =" << sizeof(son) << endl;
//}
//
//int main() {
//	test01();
//}