//#include <iostream>
//using namespace std;
////��ͨʵ�ֵ�ҳ��
//
////javaҳ��
////class Java {
////public:
////	void header() {
////		cout << "��ҳ,������,��¼,ע��...(����ͷ��)" << endl;
////	}
////	void footer() {
////		cout << "��������,��������,վ�ڵ�ͼ...(�����Ͳ�)" << endl;
////	}
////	void letf() {
////		cout << "java python C++...(���������б�)" << endl;
////	}
////	void content() {
////		cout << "javaѧ����Ƶ" << endl;
////	}
////};
////
////
//////pythonҳ��
////class Python {
////public:
////	void header() {
////		cout << "��ҳ,������,��¼,ע��...(����ͷ��)" << endl;
////	}
////	void footer() {
////		cout << "��������,��������,վ�ڵ�ͼ...(�����Ͳ�)" << endl;
////	}
////	void letf() {
////		cout << "java python C++...(���������б�)" << endl;
////	}
////	void content() {
////		cout << "Pythonѧ����Ƶ" << endl;
////	}
////};
//////Cҳ��
////class C {
////public:
////	void header() {
////		cout << "��ҳ,������,��¼,ע��...(����ͷ��)" << endl;
////	}
////	void footer() {
////		cout << "��������,��������,վ�ڵ�ͼ...(�����Ͳ�)" << endl;
////	}
////	void letf() {
////		cout << "java python C++...(���������б�)" << endl;
////	}
////	void content() {
////		cout << "C++ѧ����Ƶ" << endl;
////	}
////};
//
//
////�̳еĺô� �����ظ�����
////�﷨:class����:�̳з�ʽ ����
//// ���� Ҳ��Ϊ������
//// ���� Ҳ��Ϊ����
//
////����ҳ�� 
//class BasePage {
//public:
//		void header() {
//		cout << "��ҳ,������,��¼,ע��...(����ͷ��)" << endl;
//	}
//	void footer() {
//		cout << "��������,��������,վ�ڵ�ͼ...(�����Ͳ�)" << endl;
//	}
//	void letf() {
//		cout << "java python C++...(���������б�)" << endl;
//	}
//	void content() {
//		cout << "javaѧ����Ƶ" << endl;
//	}
//	
//
//};
////Javaҳ��
//class Java : public BasePage {
//public:
//	void content() {
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//
//};
////Pythonҳ��
//class Python : public BasePage {
//public:
//	void content() {
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//
//};
////C++ҳ��
//class C : public BasePage {
//public:
//	void content() {
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//
//};
//
//void test01() {
//	cout << "Java������Ƶҳ������:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.letf();
//	ja.content();
//	cout << "---------------------" << endl;
//	cout << "Python������Ƶҳ������:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.letf();
//	py.content();
//	cout << "---------------------" << endl;
//	cout << "C++������Ƶҳ������:" << endl;
//	C c;
//	c.header();
//	c.footer();
//	c.letf();
//	c.content();
//}
//
//
//int main() {
//	test01();
//}