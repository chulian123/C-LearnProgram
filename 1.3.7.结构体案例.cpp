//#include<iostream>
//
//using namespace std;
////学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
////设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
////学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
////最终打印出老师数据以及老师所带的学生数据。
//
////学生结构体
//struct student {
//	string name;
//	int score;
//};
////老师结构体
//struct teacher {
//	string name;
//	struct student sArray[5];
//};
//void message(struct teacher stuArry[],int len) {
//	string  nameseed = "ABCDE";
//	//给老师赋值
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
////打印函数
//void printfmessage(struct teacher stuArry[] , int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名" << stuArry[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			int randon = rand() % 60+41;//40~100之间随机数
//			stuArry[i].sArray[j].score = randon;
//			cout << "\t学生姓名" << stuArry[i].sArray[j].name <<" 考试分数" << stuArry[i].sArray[j].score<<endl;
//		}
//	}
//}
//int main() {
//
//	//随机数组
//	srand((unsigned int)time(NULL));
//
//	//创造3名老师的数组
//	struct teacher stuArry[3];
//	//通过函数给老师信息赋值，并给学生信息也赋值
//	int len = sizeof(stuArry) / sizeof(stuArry[0]);
//	message(stuArry, len);
//
//	printfmessage(stuArry,len);
//	
//}