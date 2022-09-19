//#include <iostream>
//
//using namespace std;
////全局变量
//int all_a = 10;
//int all_b = 10;
////const全局变量
//const int c_g_a = 10;
//const int c_g_b = 10;  
//
//int main() {
//
//	//全局区
//
//	//全局变量，常态变量，常量
//
//	//创造普通的局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量的a地址为：" << (int)&a << endl;
//	cout << "局部变量的b地址为：" << (int)&b << endl;
//
//	cout << "全部变量的all-a地址为：" << (int)&all_a << endl;
//	cout << "全部变量的all-b地址为：" << (int)&all_b << endl;//全局变量的地址不会改变
//
//	//静态变量 在普通变量前面加static 属于静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量的s_a地址为：" << (int)&s_a << endl;
//	cout << "静态变量的s_b地址为：" << (int)&s_b << endl;
//
//	//常量
//	//字符串的常量
//	cout <<"字符串的常量的地址为："<< (int)&"hello" << endl;
//	
//	cout << "全局常量的c_g_a地址为：" << (int)&c_g_a << endl;
//	cout << "全局常量的c_g_b地址为：" << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量的c_l_a地址为：" << (int)&c_l_a << endl;
//	cout << "局部常量的c_l_b地址为：" << (int)&c_l_b << endl;
//
//}
