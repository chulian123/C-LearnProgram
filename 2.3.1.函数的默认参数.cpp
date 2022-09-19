//#include <iostream>
//
//using namespace std;
//
//
////语法：返回值类型函数 函数名(形参=默认值){
//int func(int a, int b = 20, int c = 30)//如果我们自己传入数据就是使用我们的否则就用默认数值
//{
//	return a + b + c;
//
//}

//注意事项
//1.如果某个位置已经有了默认参数，那么这个位置往后都要有参数，从左到右必须要默认值
//int func2(int a, int b, int c )//假设a=10 则后面 b c都需要有一个默认值，但是C=10 则 a b不需要默认值
//{
//	return a + b + c;
//
//}

//2.如果函数声明有默认参数，函数实习就不能有默认参数
//错误用法
//int func3(int a=10, int b=10);
//int func3(int a = 10, int b = 10) {
//	return a + b;
// }
// 正确用法
//int func3(int a, int b);
//int func3(int a = 10, int b = 10) {
//	return a + b;
// }
//int main() {
//	cout << func(10, 30) << endl;//传入参数位置
//	//cout << func3() << endl;
//}