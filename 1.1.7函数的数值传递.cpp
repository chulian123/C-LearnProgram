//#include <iostream>
//using namespace std;
//值的传递
//定义函数，两个数字互换的函数
//如果函数不需要声明的话可以写void的方法
//
//void swap(int num1,int num2){
//	cout << "交换前"<<endl;
//	cout<<"交换前的数据" <<num1 <<endl;
//	cout<<"交换前的数据" <<num2 <<endl;
//	int temp = num1;//创造一个临时变量去储存一个值
//	num1 = num2;
//	num2 = temp;
//
//	cout << "交换后的数据" << num1 << endl;
//	cout << "交换后的数据" << num2 << endl;




	//return ;可以不写
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	//当我们做值的传递的时候，函数的形参发生改变，并不会影响实参（a,b）；
//	
//	cout << "a的值是" << a << endl;
//	cout << "b的值是" <<b << endl;
//	
//	
//	swap(a, b);
//	cout << "a的值是" << a << endl;
//	cout << "b的值是" << b << endl;
//
//}