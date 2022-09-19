//#include <iostream>
//using namespace std;
////函数调用运算符()重载
//
//class Myprint {
//public:
//	//重载函数调用运算符
//	void operator()(string text) {
//		cout << text << endl;
//
//	}
//
//};
//void Myprint02(string text){
//	cout << text << endl;
//}
//
//
//void test01() {
//	Myprint myprint;
//	myprint("hello");//由于使用起来非常类似于函数调用,因此称为仿函数
//
//	Myprint02("hello");//函数调用方法
//}
//
////仿函数非常灵活,没有固定写法
////加法类
//
//
//class Myadd {
//public:
//	int operator()(int num1,int num2) {
//		return num1 + num2;
//	}
//};
//
//void test02() {
//	Myadd myadd;
//	int ret =myadd(100, 100);
//	cout << ret << endl;
//	//匿名函数对象
//
//	cout << Myadd()(100,100)<< endl;//和上面方法一样可以达成效果 匿名函数不记得可以百度
//
//}
//
//
//int main() {
//	//test01();
//	test02();
//}