#include <iostream>
using namespace std;
//总结:
//动态多态满足条件
//1.有继承关系(class Cat :public Animal,class Dog :public Animal)
//2.子类要重写父类的虚函数 在父类的函数里加上虚函数virtual关键词

//动态多态的使用
//1.父类的指针或者引用, (执行)指向子类对象(Animal &animal)


//多态
class Animal {
public:
	//虚函数virtual关键词
	    virtual void speak() {
		cout << "动物在说话!" << endl;

	}
};
//猫类
class Cat :public Animal
{
public:
	//重新 函数返回值类型 函数名 参数列表 完全相同
	void speak()//子类的关键字 virtual可有可没有
	{
		cout << "小猫在说话" << endl;
	}
};
//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};


//执行说话函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话那么函数地址就不能提前绑定,需要在运行阶段绑定,地址晚绑定
void doSpeak(Animal &animal) {//Animal & animal =cat;父类引用子类
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
void test02() {
	cout << "sizeof Animal =" << sizeof(Animal) << endl;
}

int main() {
	//test01();
	test02();
}