#include <iostream>

using namespace std;
//��������
//1.ֵ����

//void swap01(int a, int b)//ֻ��Ӱ������a��bֵ����������Ӱ��main������num1 num2����ֵ����
//{
//	int temp =a;
//	a = b;
//
//	b = temp;
//	
//	cout << "�����������a��" << a << endl;
//	cout << "�����������b��" << b << endl;
//}
//
//
////2.��ַ����
//void swap02(int* a, int* b)//��ı�main�����num1��num2����ֵ
//{
//	int temp = *a;
//	*a = *b;
//
//	*b = temp;
//}
////3.���ô��� ���µ�ѧ�ģ�
//void swap03(int& a, int& b)//��ı�main�����num1��num2����ֵ
//{
//	int temp = a;
//	a = b;
//
//	b = temp;
//}
//int main() {
//	int num1=10;
//	int num2 = 50;
//	cout << "����ǰ������ǰnum1��" << num1 << endl;
//	cout << "����ǰ������ǰnum2��" << num2 << endl;
//	//swap01(num1, num2);
//	
//	swap03(num1, num2);
//
//	cout << "�����������num1��" << num1 << endl;
//	cout << "�����������num2��" << num2 << endl;
//
//}