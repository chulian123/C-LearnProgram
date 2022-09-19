//#include <iostream>
//using namespace std;
////继承中的构造和析构函数
//class Base {
//public:
//	Base() {
//		cout << "Base构造函数" << endl;
//	}
//	~Base() {
//		cout << "Base析构函数" << endl;
//	}
//};
//
//class Son :public Base {
//public:
//		Son() {
//		cout << "Son构造函数" << endl;
//	}
//	~Son() {
//		cout << "Son析构函数" << endl;
//	}
//
//};
//void test01() {
//	//Base b;
//
//	//继承中的构造顺序如下:
//	//先构造父类,再构造子类,析构顺序与构造的顺序相反
//	//就是先有父亲,再有儿子,儿子先走,父亲再走
//	Son s;
//}
//
//int main() {
//	test01();
//}