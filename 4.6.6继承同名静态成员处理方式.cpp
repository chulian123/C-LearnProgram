//#include <iostream>
//using namespace std;
////�̳��е�ͬ����̬��Ա��Ա����ʽ
//class Base {
//public:
//
//    static int m_a;//��̬��Ա
//
//    static void func() {
//        cout << "Base -static void func()" << endl;
//    }
//    static void func(int a) {
//        cout << "Base -static void func(int a)" << endl;
//    }
//};
//int Base::m_a = 100;
//
//class Son:public Base {
//public:
//
//    static int m_a;//��̬��Ա
//    static void func() {
//        cout << "Son -static void func()" << endl;
//    }
//};
//int Son::m_a = 200;
//
////ͬ����̬��Ա����
//
//void test01() {
//    //1.ͨ������������
//    cout << "ͨ������������" << endl;
//    Son s;
//    cout << "son��m_a=" << s.m_a << endl;//200
//    cout << "Base��m_a=" << s.Base::m_a << endl;//100
//    //2.ͨ������������
//    cout << "ͨ������������" << endl;
//    cout << "son��m_a=" << Son::m_a << endl;//200
//    //��һ��::����ͨ�������ķ�ʽ������ �ڶ���::������ʸ�����������
//    cout << "Base��m_a=" << Son::Base::m_a << endl;//100
//}
//
////ͬ����̬��Ա����
//void test02() {
//    //1.ͨ������������
//    cout << "ͨ������������" << endl;
//    Son s;
//    s.func();
//    s.Base::func();
//
//    //2.ͨ����������������
//    cout << "ͨ������������" << endl;
//    Son::func();
//    Son::Base::func();
//    //������ֺ͸���ͬ���ľ�̬��Ա����,Ҳ�����ظ���������ͬ���ĳ�Ա����
//    //�������ʸ����б�����ͬ����Ա,��Ҫ��������
//    Son::Base::func(111);
//}
//
//int main() {
//   // test01();
//    test02();
//}