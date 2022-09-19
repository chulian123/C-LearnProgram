#include<iostream>

using namespace std;
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
////打印学生信息的函数
////1.值传递
//void printstudent1(struct student s) {
//	s.age = 100;//值的传递只影响该函数里的变化，并不会影响main函数的修改
//	cout << "子函数中的参数--" << "姓名:" << s.name << "年龄:" << s.age << "分数:" << s.score << endl;
//
//}
//
////2.地址传递
//void printstudent2(struct student *p){
//	p->age = 100;//地址传递则会影响两个地方的值的修改
//	cout << "子函数中的参数2--" << "姓名:" << p->name << "年龄:" << p->age << "分数:" << p->score << endl;
//}
//
//
//
//int main() {
//	//结构体做函数参数
//
//	//将学生传入到一个参数中，打印学生身上所有信息
//
//	//创造变量
//
//	student s;
//	s.name = "之情";
//	s.age = 22;
//	s.score = 85;
//	
//	/*cout << "姓名:" << s.name << endl;
//	cout << "年龄:" << s.age<<endl;
//	cout << "分数:" << s.score << endl;*/
//
//	//printstudent1(s);
//	printstudent2(&s);
//	//不想修改main函数的数值那就用值传递，反之则用地址传递
//}