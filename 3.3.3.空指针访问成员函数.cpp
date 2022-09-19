//#include <iostream>
//using namespace std;
//
////空指针调用成员函数
//class Person {
//public:
//	void showClassName()
//	{
//		cout << "this is a person class"<<endl;
//	}
//
//	void showPersonage() {
//		//如果用到this指针，需要加以判断保证代码的健壮性
//		if (this == NULL) {
//			return;
//		
//		}
//
//		cout << "age is " << this->m_age << endl;
//	}
//
//	int m_age;
//};
//void test01() {
//	Person* p = NULL;
//	p->showClassName();
//	p->showPersonage();
//
//}
//
//
//
//int main() {
//	test01();
//}