//#include <iostream>
//using namespace std;
//
////构造函数的分类及调用
////分类
////按照参数分类 无参构造和有参构造
////按照类型分类 普通构造 拷贝构造
//class person {
//public:
//	person() {
//		cout<<"person的无参构造函数调用" << endl;
//	}
//	person(int a) {
//		age = a;
//		cout << "person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	person(const person &p) {//const person * const p 指针用法
//		//将传入的人所有属性，复制过来
//		age = p.age;
//        cout << "person的拷贝构造函数调用" << endl;
//	}
//	~person() {
//		cout << "person的构造调用" << endl;
//	}
// 
//	int age;
//	
//};
//void test01()
//{
	//1.括号法
	//person p1;//默认构造函数调用
	//person p2(10);//有参构造函数
	//person p3(p2);//拷贝构造函数
	//注意事项
	///注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
	////person p4();//会没有任何显示,不会认为在创建对象

	/*cout << "p2年龄为" << p2.age << endl;
	cout << "p3年龄为" << p3.age << endl;*/

	//2.显示发
	//person p1;
	//person p2 = person(10);
	//person p3 = person(p2);
	//person * p4 = new person(p2);//用指针的方式通过new的内存调用来复制p2的数值(我自己猜的不知道对不对)
	//person(10); //单独写就是匿名对象  当前行结束之后，马上析构, 然后系统马上回收掉
	//cout << "aaa" << endl;//测试,!!! 程序会先让匿名对象运行完并销毁后 再到执行aaa的代码行
	// 
	// 注意事项二
	//注意2:不能利用 拷贝构造函数 初始化匿名对象 编译器认为person (p3) == person p3;
	//person (p3);//错误案例
	//3.隐式转换法
	//person p5 = 10;//相当于 person p5 =person(10) 有参构造调用
	//person p6 = p5;//拷贝构造函数调用 person p5 = person(p4)

//}
//int main() {
//	test01();
//}