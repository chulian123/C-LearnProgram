//#include <iostream>
//using namespace std;
////�������������()����
//
//class Myprint {
//public:
//	//���غ������������
//	void operator()(string text) {
//		cout << text << endl;
//
//	}
//
//};
//void Myprint02(string text){
//	cout << text << endl;
//}
//
//
//void test01() {
//	Myprint myprint;
//	myprint("hello");//����ʹ�������ǳ������ں�������,��˳�Ϊ�º���
//
//	Myprint02("hello");//�������÷���
//}
//
////�º����ǳ����,û�й̶�д��
////�ӷ���
//
//
//class Myadd {
//public:
//	int operator()(int num1,int num2) {
//		return num1 + num2;
//	}
//};
//
//void test02() {
//	Myadd myadd;
//	int ret =myadd(100, 100);
//	cout << ret << endl;
//	//������������
//
//	cout << Myadd()(100,100)<< endl;//�����淽��һ�����Դ��Ч�� �����������ǵÿ��԰ٶ�
//
//}
//
//
//int main() {
//	//test01();
//	test02();
//}