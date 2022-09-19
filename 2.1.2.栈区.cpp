#include <iostream>

using namespace std;
//栈区注意事项 --不可以返回局部变量地址
//栈区的数据由编译器管理开辟和释放


//int* func()
//{
//	int a = 10;
//	return &a;
//}
//
//int main() {
//
//	int* p = func();
//	//编程环境要X86才有以下效果
//	cout << *p << endl;//第一次编译器还会保留一下数据
//	cout << *p << endl;//第二次就不会在保留 
//
//	system("pause");
//
//	return 0;
//}
