//#include<iostream>
//
//using namespace std;
//
////���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
////
////ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
////
//
//struct hero {
//	string name;
//	int age;
//	string sex;
//};
////ð������
//void bouble(struct hero heroArray[], int len) {
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-i-1; j++)
//		{
//			if (heroArray[j].age > heroArray[j + 1].age)
//				swap(heroArray[j], heroArray[j + 1]);//������������
//		}
//	}
//}
////
//void printfhero(struct hero heroArray[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		cout << "name:"<< heroArray[i].name<<"age:"<< heroArray[i].age << "sex:"<< heroArray[i].sex <<endl
//			;
//
//	}
//}
//
//int main() {
//	//��������
//	struct hero heroArray[5] = {
//	{"����",23,"��"},
//	{"����",22,"��"},
//	{"�ŷ�",20,"��"},
//	{"����",21,"��"},
//	{"����",19,"Ů"},
//	};
//	//��������ĳ���
//	
//
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	for (int i = 0; i < len; i++)
//	{
//		cout << "name old:" << heroArray[i].name << "age old:" << heroArray[i].age << "sex old:" << heroArray[i].sex << endl
//			;
//
//	}
//	bouble(heroArray, len);
//
//	printfhero(heroArray, len);
//}
