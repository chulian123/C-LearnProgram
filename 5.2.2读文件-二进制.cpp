//
// Created by 之倾 on 2022/9/23.
//
//#include <iostream>
//#include <fstream>
//using namespace std;
////二进制的文件读取
//
//class Person{
//public:
//    char m_name[64];
//    int m_age;
//};
//void test01(){
//    ifstream  ifs;
//    ifs.open("person.txt",ios::in | ios::binary);
//    if(!ifs.is_open()){
//        cout<<"文件打开失败"<<endl;
//        return;
//    }
//
//    Person p;
//    ifs.read((char *)&p,sizeof (Person));
//    cout<<"姓名："<<p.m_name<<"年龄:"<<p.m_age<<endl;
//    ifs.close();
//}
//
//int main() {
//    test01();
//}