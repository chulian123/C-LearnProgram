//#include<iostream>
//
//using namespace std;
////ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
////���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
////ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
////���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
//
////ѧ���ṹ��
//struct student {
//	string name;
//	int score;
//};
////��ʦ�ṹ��
//struct teacher {
//	string name;
//	struct student sArray[5];
//};
//void message(struct teacher stuArry[],int len) {
//	string  nameseed = "ABCDE";
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		stuArry[i].name = "Teacher_";
//		stuArry[i].name += nameseed[i];
//
//
//		//
//		for (int j = 0; j < 5; j++)
//		{
//			stuArry[i].sArray[j].name = "Student_";
//
//			stuArry[i].sArray[j].name += nameseed[j];
//			stuArry[i].sArray[j].score = 90;
//
//
//		}
//	}
//	
//}
//
////��ӡ����
//void printfmessage(struct teacher stuArry[] , int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ����" << stuArry[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			int randon = rand() % 60+41;//40~100֮�������
//			stuArry[i].sArray[j].score = randon;
//			cout << "\tѧ������" << stuArry[i].sArray[j].name <<" ���Է���" << stuArry[i].sArray[j].score<<endl;
//		}
//	}
//}
//int main() {
//
//	//�������
//	srand((unsigned int)time(NULL));
//
//	//����3����ʦ������
//	struct teacher stuArry[3];
//	//ͨ����������ʦ��Ϣ��ֵ������ѧ����ϢҲ��ֵ
//	int len = sizeof(stuArry) / sizeof(stuArry[0]);
//	message(stuArry, len);
//
//	printfmessage(stuArry,len);
//	
//}