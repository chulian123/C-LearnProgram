//#include <iostream>
//using namespace std;
//
////���캯���ķ��༰����
////����
////���ղ������� �޲ι�����вι���
////�������ͷ��� ��ͨ���� ��������
//class person {
//public:
//	person() {
//		cout<<"person���޲ι��캯������" << endl;
//	}
//	person(int a) {
//		age = a;
//		cout << "person���вι��캯������" << endl;
//	}
//	//�������캯��
//	person(const person &p) {//const person * const p ָ���÷�
//		//����������������ԣ����ƹ���
//		age = p.age;
//        cout << "person�Ŀ������캯������" << endl;
//	}
//	~person() {
//		cout << "person�Ĺ������" << endl;
//	}
// 
//	int age;
//	
//};
//void test01()
//{
	//1.���ŷ�
	//person p1;//Ĭ�Ϲ��캯������
	//person p2(10);//�вι��캯��
	//person p3(p2);//�������캯��
	//ע������
	///ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������
	////person p4();//��û���κ���ʾ,������Ϊ�ڴ�������

	/*cout << "p2����Ϊ" << p2.age << endl;
	cout << "p3����Ϊ" << p3.age << endl;*/

	//2.��ʾ��
	//person p1;
	//person p2 = person(10);
	//person p3 = person(p2);
	//person * p4 = new person(p2);//��ָ��ķ�ʽͨ��new���ڴ����������p2����ֵ(���Լ��µĲ�֪���Բ���)
	//person(10); //����д������������  ��ǰ�н���֮����������, Ȼ��ϵͳ���ϻ��յ�
	//cout << "aaa" << endl;//����,!!! ����������������������겢���ٺ� �ٵ�ִ��aaa�Ĵ�����
	// 
	// ע�������
	//ע��2:�������� �������캯�� ��ʼ���������� ��������Ϊperson (p3) == person p3;
	//person (p3);//������
	//3.��ʽת����
	//person p5 = 10;//�൱�� person p5 =person(10) �вι������
	//person p6 = p5;//�������캯������ person p5 = person(p4)

//}
//int main() {
//	test01();
//}