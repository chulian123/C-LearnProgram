//#include <iostream>
//using namespace std;
////ǳ����:�򵥵ĸ�ֵ��������
////���:�ڶ�����������ռ�,���п�������
//
//
//class Person {
//public:
//    Person() {
//        cout << "Person��Ĭ�Ϲ��캯������" << endl;
//     }
//    Person(int age,int height) {
//        m_age = age;
//        m_height= new int(height); //����һ����������
//        cout << "Person���вι��캯������" << endl;
//    }
//    //�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//
//    Person(const Person& p) {
//        cout << "Person�Ŀ������캯������" << endl;
//        m_age = p.m_age;
//        //m_height =p.m_height//������Ĭ��ʵ�־�����һ�д���
//        //�������
//        m_height = new int(*p.m_height);
//
//
//
//    }
//    ~Person() {
//        //��������,���ڶ��������������ͷŲ���
//        if (m_height != NULL) {
//            delete m_height;
//            m_height = NULL;
//        }
//        cout << "Person�Ĺ��캯������" << endl;
//
//    }
//    int m_age;
//    int * m_height;
//
//};
//void test01() {
//    Person p1(18,160);
//    cout << "p1������" << p1.m_age<<"p1�����:" <<*p1.m_height<< endl;
//    Person p2(p1);
//    cout << "p2������" << p2.m_age << "p2���:" << *p2.m_height << endl;
//}
//int main() {
//    test01();
//}