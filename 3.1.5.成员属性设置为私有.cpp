//#include <iostream>
//using namespace std;
//
////成员属性设置为私有
////1.可以控制自己读写权限
////2.对于写可以检测数据的有效性
//
//class people {
//public:
//	//写姓名
//	void setname(string name) {
//		p_name = name;
//	}
//	//读姓名
//	string getname(){
//		return p_name;
//
//	}
//	//年龄
//	//int getAge() {//只能读取
//	//	p_age = 0;
//	//	/*cout << "请输入您的年龄" << endl;
//	//	cin >> p_age;*/
//	//	return p_age;
//	//}
//	void setAge(int age) {
//
//		if (age < 0 || age > 150) {
//			p_age = 0;
//			cout << "你的输入有误" << endl;
//			return;
//		}
//		p_age = age;
//		
//	}
//
//
//	void setLover(string name) {//只能写入权限
//		p_lover = name;
//	}
//	void showmessage() {
//		cout << "姓名:" << p_name <<"年龄："<<p_age <<"情人："<<p_lover << endl;
//	}
//private:
//	string p_name;//姓名 可读可写
//	int p_age;//年龄  只读
//	string p_lover;//情人 可写
//
//
//};
//
//
//int main() {
//	people p1;
//	p1.setname("张三");
//	p1.setLover("李四");
//	//cout << "情人为" << p1.setLover << endl;//是不可以访问的权限，只能写入不能读取
//	p1.setAge(18);
//	//p1.getAge();
//	p1.showmessage();
//
//}