//#include <iostream>
//using namespace std;
////���ص��������
////�Զ�������
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger() {
//		n_num = 0;
//	}
//	//����++����� ��Ϊ�������
//
//	//����ǰ��++����� ��������Ϊ��
//	MyInteger& operator++() {//&��������Ϊ��һֱ��һ�����ݽ��е�������
//		 n_num++;//�Ƚ���++���� ���ڲ�����
//		 return *this;//�ٽ�������һ������
//	}
//	//���غ���++�����
//	//void operator++(int) int����ռλ���� ������������ǰ�úͺ��õ���
//	MyInteger& operator++(int) {
//		//�� ��¼��ǰ���
//		MyInteger temp = *this;//thisָ������
//		//�� ����
//		n_num++;
//		//��󷵻ؼ�¼��������
//		return temp;
//	}
//	
//private:
//	int n_num;
//};
//
////����<<�����
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