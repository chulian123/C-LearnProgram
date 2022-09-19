//#include <iostream>
//using namespace std;
////重载递增运算符
////自定义整形
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger() {
//		n_num = 0;
//	}
//	//重载++运算符 分为两种情况
//
//	//重载前置++运算符 返回引用为了
//	MyInteger& operator++() {//&返回引用为了一直对一个数据进行递增操作
//		 n_num++;//先进行++操作 让内部递增
//		 return *this;//再将自身做一个返回
//	}
//	//重载后置++运算符
//	//void operator++(int) int代表占位参数 可以用于区分前置和后置递增
//	MyInteger& operator++(int) {
//		//先 记录当前结果
//		MyInteger temp = *this;//this指向自身
//		//后 递增
//		n_num++;
//		//最后返回记录的做返回
//		return temp;
//	}
//	
//private:
//	int n_num;
//};
//
////重载<<运算符
//ostream& operator<<(ostream& cout, MyInteger myint) {
//	cout << myint.n_num;
//	return cout;
//}
//
//
//void test01() {
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout <<myint
// << endl;
//}
//
//int main() {
//	test01();
//}