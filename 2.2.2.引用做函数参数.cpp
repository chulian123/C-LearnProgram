#include <iostream>

using namespace std;
//交换函数
//1.值传递

//void swap01(int a, int b)//只会影响这里a，b值交换，不会影响main函数里num1 num2的数值交换
//{
//	int temp =a;
//	a = b;
//
//	b = temp;
//	
//	cout << "交换后的数据a：" << a << endl;
//	cout << "交换后的数据b：" << b << endl;
//}
//
//
////2.地址传递
//void swap02(int* a, int* b)//会改变main里面的num1和num2的数值
//{
//	int temp = *a;
//	*a = *b;
//
//	*b = temp;
//}
////3.引用传递 （新的学的）
//void swap03(int& a, int& b)//会改变main里面的num1和num2的数值
//{
//	int temp = a;
//	a = b;
//
//	b = temp;
//}
//int main() {
//	int num1=10;
//	int num2 = 50;
//	cout << "交换前的数据前num1：" << num1 << endl;
//	cout << "交换前的数据前num2：" << num2 << endl;
//	//swap01(num1, num2);
//	
//	swap03(num1, num2);
//
//	cout << "交换后的数据num1：" << num1 << endl;
//	cout << "交换后的数据num2：" << num2 << endl;
//
//}