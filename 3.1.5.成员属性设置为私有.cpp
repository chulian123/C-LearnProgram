//#include <iostream>
//using namespace std;
//
////��Ա��������Ϊ˽��
////1.���Կ����Լ���дȨ��
////2.����д���Լ�����ݵ���Ч��
//
//class people {
//public:
//	//д����
//	void setname(string name) {
//		p_name = name;
//	}
//	//������
//	string getname(){
//		return p_name;
//
//	}
//	//����
//	//int getAge() {//ֻ�ܶ�ȡ
//	//	p_age = 0;
//	//	/*cout << "��������������" << endl;
//	//	cin >> p_age;*/
//	//	return p_age;
//	//}
//	void setAge(int age) {
//
//		if (age < 0 || age > 150) {
//			p_age = 0;
//			cout << "�����������" << endl;
//			return;
//		}
//		p_age = age;
//		
//	}
//
//
//	void setLover(string name) {//ֻ��д��Ȩ��
//		p_lover = name;
//	}
//	void showmessage() {
//		cout << "����:" << p_name <<"���䣺"<<p_age <<"���ˣ�"<<p_lover << endl;
//	}
//private:
//	string p_name;//���� �ɶ���д
//	int p_age;//����  ֻ��
//	string p_lover;//���� ��д
//
//
//};
//
//
//int main() {
//	people p1;
//	p1.setname("����");
//	p1.setLover("����");
//	//cout << "����Ϊ" << p1.setLover << endl;//�ǲ����Է��ʵ�Ȩ�ޣ�ֻ��д�벻�ܶ�ȡ
//	p1.setAge(18);
//	//p1.getAge();
//	p1.showmessage();
//
//}