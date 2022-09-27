//
// Created by 之倾 on 2022/9/20.
//
#include <iostream>

//using namespace std;
//分别利用两个普通写法和多态写法技术来实现计算机

//普通写法
//class Calculator{
//public:
//    int getResult(string oper){
//        if(oper=="+"){
//            return m_num1+m_num2;
//
//        } else if(oper == "-"){
//            return m_num1-m_num2;
//        }
//        else if(oper == "*"){
//            return m_num1*m_num2;
//        }
//
//    }
//
//
//
//    int m_num1;//操作数字
//    int m_num2;
//};
//void test01(){
//    //创建一个计算机对象
//    Calculator c;
//    c.m_num1=10;
//    c.m_num2=20;
//    cout<<c.m_num1<<"+"<<c.m_num2<<"="<<c.getResult( "+")<<endl;
//    cout<<c.m_num1<<"-"<<c.m_num2<<"="<<c.getResult( "-")<<endl;
//    cout<<c.m_num1<<"*"<<c.m_num2<<"="<<c.getResult( "*")<<endl;
//
//}

//多态实现计算机类
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
//实现计算机抽象类
//class AbstractCalculator{
//public:
//    virtual int GetResult(){//写多态函数需要在父类加上virtual关键词
//        return 0;
//    }
//    int m_num1;
//    int m_num2;
//};
//加分运算的类
//class AddCalculator:public AbstractCalculator{
//public:
//      int GetResult(){
//          return m_num1 + m_num2;
//      }
//
//};
//减发计算机类
//class SubCalculator:public AbstractCalculator{
//public:
//    int GetResult(){
//        return m_num1 - m_num2;
//    }
//
//};
// 乘法
//class MuCalculator:public AbstractCalculator{
//public:
//    int GetResult(){
//        return m_num1 * m_num2;
//    }
//
//};
//void test02(){
//    //多态的使用条件
//    //父类的指针或者引向子类对象
//    AbstractCalculator * abc = new AddCalculator;
//    abc->m_num1=10;
//    abc->m_num2=20;
//    cout<<abc->m_num1<<"+"<<abc->m_num2<<"="<<abc->GetResult()<<endl;
//    //用完后需要销毁
//    delete abc;
//
//    //减法运算
//    abc =new SubCalculator;
//    abc->m_num1=10;
//    abc->m_num2=20;
//    cout<<abc->m_num1<<"-"<<abc->m_num2<<"="<<abc->GetResult()<<endl;
//    //用完后需要销毁
//    delete abc;
//    //乘法
//    abc =new MuCalculator;
//    abc->m_num1=10;
//    abc->m_num2=20;
//    cout<<abc->m_num1<<"*"<<abc->m_num2<<"="<<abc->GetResult()<<endl;
//    //用完后需要销毁
//    delete abc;
//
//
//}
//int main() {
//    //test01();
//    test02();
//}