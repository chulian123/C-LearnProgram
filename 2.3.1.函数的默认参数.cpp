//#include <iostream>
//
//using namespace std;
//
//
////�﷨������ֵ���ͺ��� ������(�β�=Ĭ��ֵ){
//int func(int a, int b = 20, int c = 30)//��������Լ��������ݾ���ʹ�����ǵķ������Ĭ����ֵ
//{
//	return a + b + c;
//
//}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô���λ������Ҫ�в����������ұ���ҪĬ��ֵ
//int func2(int a, int b, int c )//����a=10 ����� b c����Ҫ��һ��Ĭ��ֵ������C=10 �� a b����ҪĬ��ֵ
//{
//	return a + b + c;
//
//}

//2.�������������Ĭ�ϲ���������ʵϰ�Ͳ�����Ĭ�ϲ���
//�����÷�
//int func3(int a=10, int b=10);
//int func3(int a = 10, int b = 10) {
//	return a + b;
// }
// ��ȷ�÷�
//int func3(int a, int b);
//int func3(int a = 10, int b = 10) {
//	return a + b;
// }
//int main() {
//	cout << func(10, 30) << endl;//�������λ��
//	//cout << func3() << endl;
//}