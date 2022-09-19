//#include<iostream>
//
//using namespace std;
//
////设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。
////
////通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
////
//
//struct hero {
//	string name;
//	int age;
//	string sex;
//};
////冒泡排序
//void bouble(struct hero heroArray[], int len) {
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-i-1; j++)
//		{
//			if (heroArray[j].age > heroArray[j + 1].age)
//				swap(heroArray[j], heroArray[j + 1]);//交换两个数字
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
//	//创造数组
//	struct hero heroArray[5] = {
//	{"刘备",23,"男"},
//	{"关羽",22,"男"},
//	{"张飞",20,"男"},
//	{"赵云",21,"男"},
//	{"貂蝉",19,"女"},
//	};
//	//计算数组的长度
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
