////
//// Created by 之倾 on 2022/9/21.
////
//#include <iostream>
//
//using namespace std;
////制造饮品案例
//class AbstractDrink{
//public:
//    //煮水
//    virtual void Boil() =0;
//    //冲泡
//    virtual  void Brew() =0;
//    //倒入杯中
//    virtual  void PourInCup()=0;
//    //加料
//    virtual  void PutSomething()=0;
//    //制作
//    void makeDrink(){
//        Boil();
//        Brew();
//        PourInCup();
//        PutSomething();
//
//
//    }
//
//
//
//
//};
//
////制作咖啡
//class Coffee:public AbstractDrink{
//public:
//    //煮水
//    virtual void Boil(){
//        cout<<"煮农夫山泉"<<endl;
//    }
//    //冲泡
//    virtual  void Brew(){
//        cout<<"冲泡咖啡"<<endl;
//    }
//    //倒入杯中
//    virtual  void PourInCup(){
//        cout<<"倒入杯子中"<<endl;
//    }
//    //加料
//    virtual  void PutSomething(){
//        cout<<"加入糖和牛奶"<<endl;
//    }
//
//
//
//
//};
//
////煮茶
//class Tea:public AbstractDrink{
//public:
//    //煮水
//    virtual void Boil(){
//        cout<<"煮农夫山泉"<<endl;
//    }
//    //冲泡
//    virtual  void Brew(){
//        cout<<"冲泡茶叶"<<endl;
//    }
//    //倒入杯中
//    virtual  void PourInCup(){
//        cout<<"倒入杯子中"<<endl;
//    }
//    //加料
//    virtual  void PutSomething(){
//        cout<<"加入柠檬"<<endl;
//    }
//
//};
//
//void Dowork(AbstractDrink * abs){
//    abs->makeDrink();
//    delete abs;
//}
//
//
//
//void test01(){
//    //制作咖啡
//   // Dowork(new Coffee);
//    //制作茶
//    Dowork(new Tea);
//
//}
//
//
//
//
//int main() {
//  test01();
//}