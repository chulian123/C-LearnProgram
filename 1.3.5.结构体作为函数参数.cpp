#include<iostream>

using namespace std;
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
////��ӡѧ����Ϣ�ĺ���
////1.ֵ����
//void printstudent1(struct student s) {
//	s.age = 100;//ֵ�Ĵ���ֻӰ��ú�����ı仯��������Ӱ��main�������޸�
//	cout << "�Ӻ����еĲ���--" << "����:" << s.name << "����:" << s.age << "����:" << s.score << endl;
//
//}
//
////2.��ַ����
//void printstudent2(struct student *p){
//	p->age = 100;//��ַ�������Ӱ�������ط���ֵ���޸�
//	cout << "�Ӻ����еĲ���2--" << "����:" << p->name << "����:" << p->age << "����:" << p->score << endl;
//}
//
//
//
//int main() {
//	//�ṹ������������
//
//	//��ѧ�����뵽һ�������У���ӡѧ������������Ϣ
//
//	//�������
//
//	student s;
//	s.name = "֮��";
//	s.age = 22;
//	s.score = 85;
//	
//	/*cout << "����:" << s.name << endl;
//	cout << "����:" << s.age<<endl;
//	cout << "����:" << s.score << endl;*/
//
//	//printstudent1(s);
//	printstudent2(&s);
//	//�����޸�main��������ֵ�Ǿ���ֵ���ݣ���֮���õ�ַ����
//}