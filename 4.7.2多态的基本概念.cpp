#include <iostream>
using namespace std;
//�ܽ�:
//��̬��̬��������
//1.�м̳й�ϵ(class Cat :public Animal,class Dog :public Animal)
//2.����Ҫ��д������麯�� �ڸ���ĺ���������麯��virtual�ؼ���

//��̬��̬��ʹ��
//1.�����ָ���������, (ִ��)ָ���������(Animal &animal)


//��̬
class Animal {
public:
	//�麯��virtual�ؼ���
	    virtual void speak() {
		cout << "������˵��!" << endl;

	}
};
//è��
class Cat :public Animal
{
public:
	//���� ��������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()//����Ĺؼ��� virtual���п�û��
	{
		cout << "Сè��˵��" << endl;
	}
};
//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};


//ִ��˵������
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵����ô������ַ�Ͳ�����ǰ��,��Ҫ�����н׶ΰ�,��ַ���
void doSpeak(Animal &animal) {//Animal & animal =cat;������������
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