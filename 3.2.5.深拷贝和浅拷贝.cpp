//#include <iostream>
//using namespace std;
////浅拷贝:简单的赋值拷贝操作
////深拷贝:在堆区重新申请空间,进行拷贝操作
//
//
//class Person {
//public:
//    Person() {
//        cout << "Person的默认构造函数调用" << endl;
//     }
//    Person(int age,int height) {
//        m_age = age;
//        m_height= new int(height); //创造一个堆区数据
//        cout << "Person的有参构造函数调用" << endl;
//    }
//    //自己实现拷贝构造函数 解决浅拷贝带来的问题
//
//    Person(const Person& p) {
//        cout << "Person的拷贝构造函数调用" << endl;
//        m_age = p.m_age;
//        //m_height =p.m_height//编译器默认实现就是这一行代码
//        //深拷贝操作
//        m_height = new int(*p.m_height);
//
//
//
//    }
//    ~Person() {
//        //析构代码,将在堆区开辟数据做释放操作
//        if (m_height != NULL) {
//            delete m_height;
//            m_height = NULL;
//        }
//        cout << "Person的构造函数调用" << endl;
//
//    }
//    int m_age;
//    int * m_height;
//
//};
//void test01() {
//    Person p1(18,160);
//    cout << "p1年龄是" << p1.m_age<<"p1的身高:" <<*p1.m_height<< endl;
//    Person p2(p1);
//    cout << "p2年龄是" << p2.m_age << "p2身高:" << *p2.m_height << endl;
//}
//int main() {
//    test01();
//}