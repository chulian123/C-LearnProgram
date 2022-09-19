//#include<iostream>
//
//using namespace std;
////const的使用场景
//struct student {
//	string name;
//	int age;
//	int score;
//	};
//
//
////2.地址传递,可以减少内存地址使用，而且不好复制新的副本出来
//void printstudent(const student *p){
//	//p->age = 100;//加入const以后，一旦有修改操作就会报错，可以防止误操作
//	cout << "子函数中的参数2--" << "姓名:" << p->name << "年龄:" << p->age << "分数:" << p->score << endl;
//}
//int main() {
//	student s = { "之情",22,88 };
//
//	printstudent(&s);
//
//
//
//}
