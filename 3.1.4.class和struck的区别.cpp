//#include <iostream>
//
//using namespace std;
//
//class C1 {
//	int a;//默认权限是私有
//};
//
//struct C2 {
//	int a;//默认权限是公有
//};
//
//int main() {
//	//struct 和 class的区别
//	//struct的默认权限是 公共pubilc
//	//class的默认权限是 私有private
//	C1 c1;
//	//c1.a = 10;//错误 class默认权限 私有，因此类外不能访问
//
//	C2 c2;
//	c2.a = 10;//struct默认权限为公共 因此可以访问
//
//
//
//}