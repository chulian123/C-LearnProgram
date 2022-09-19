//#include<iostream>
//
//using namespace std;
////结构体
//struct Student {
//	string name;
//	int age;
//	int score;
//}s3;//顺便创造变量
//
//
//
//
//int main() {
//    //通过学生类型创造具体学生
//	//1. struct students s1
//	struct Student s1;
//	//给s1赋值
//	s1.name = "之";
//	s1.age = 17;
//	s1.score = 100;
//	cout << "姓名:" << s1.name <<endl;
//	cout << "年龄:" << s1.age <<endl;
//	cout << "分数:" << s1.score <<endl;
//	
//	//2.struct students s2 ={...}
//	struct Student s2{"s2",18,92 };
//	cout << "姓名:" << s2.name << "年龄:" << s2.age<<  "分数:" << s2.score <<endl;
//	
//	//3.在定义结构体时顺便创造变量
//	s3.name = "s3";
//	s3.age = 20;
//	s3.score = 10;
//	cout << "姓名:" << s3.name << "年龄:" << s3.age << "分数:" << s3.score << endl;
//}