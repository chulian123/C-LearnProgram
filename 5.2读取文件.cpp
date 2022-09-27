//
// Created by 之倾 on 2022/9/23.
//

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void test01(){
//    //1.包含头文件
//
//    //2.创造一个流对象
//    ifstream  ifs;
//    //3.打开文件并且判断是否打开成功
//    ifs.open("test.txt",ios::in);
//
//    if(!ifs.is_open()) {
//        cout<<"文件打开失败了"<<endl;
//        return;
//
//    }

    //4，读数据
    //第一种
//第二种
//   char buf[1024] ={0};
//    while (ifs.getline(buf,sizeof(buf))){
//        cout<<buf<<endl;
//    }
//第三种
//    string buf;
//    while (getline(ifs,buf)){
//        cout<<buf<<endl;
//    }

//第四种 不推荐使用
// char  c;
//    while ( (c=ifs.get())!=EOF )//EOF文件结尾标识
//    {
//        cout<<c;
//    }

    //5.关闭文件
//    ifs.close();
//}
//
//
//int main() {
//     test01();
//}