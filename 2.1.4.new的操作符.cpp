//#include <iostream>
//
//using namespace std;
//int* func()
//{
//	// 在堆区创建整型数据
//	// new 返回的是该数据类型的指针
//	int* a = new int(10);
//	return a;
//}
//
//void test02() //在堆区利用new开辟数组
//
//{
//	//创造10的整形数据的数组，在堆区
//	int * arr = new int[10];//10代表数组里面有10个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//给10个元素赋值100~109
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组
//	//释放数组需要加[];
//	delete[] arr;
//	//cout << arr[1] << endl; 错误操作
//}
//
//int main() {
//	test02();
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//利用delete释放堆区数据
//	delete p;
//	
//	//cout << *p << endl; //报错，释放的空间不可访问
//
//	system("pause");
//
//	return 0;
//}
