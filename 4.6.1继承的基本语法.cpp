﻿//#include <iostream>
//using namespace std;
////普通实现的页面
//
////java页面
////class Java {
////public:
////	void header() {
////		cout << "首页,公开课,登录,注册...(公共头部)" << endl;
////	}
////	void footer() {
////		cout << "帮助中心,交流合作,站内地图...(公共低部)" << endl;
////	}
////	void letf() {
////		cout << "java python C++...(公共分类列表)" << endl;
////	}
////	void content() {
////		cout << "java学科视频" << endl;
////	}
////};
////
////
//////python页面
////class Python {
////public:
////	void header() {
////		cout << "首页,公开课,登录,注册...(公共头部)" << endl;
////	}
////	void footer() {
////		cout << "帮助中心,交流合作,站内地图...(公共低部)" << endl;
////	}
////	void letf() {
////		cout << "java python C++...(公共分类列表)" << endl;
////	}
////	void content() {
////		cout << "Python学科视频" << endl;
////	}
////};
//////C页面
////class C {
////public:
////	void header() {
////		cout << "首页,公开课,登录,注册...(公共头部)" << endl;
////	}
////	void footer() {
////		cout << "帮助中心,交流合作,站内地图...(公共低部)" << endl;
////	}
////	void letf() {
////		cout << "java python C++...(公共分类列表)" << endl;
////	}
////	void content() {
////		cout << "C++学科视频" << endl;
////	}
////};
//
//
////继承的好处 减少重复代码
////语法:class子类:继承方式 父类
//// 子类 也称为派生类
//// 父类 也称为基类
//
////公共页面 
//class BasePage {
//public:
//		void header() {
//		cout << "首页,公开课,登录,注册...(公共头部)" << endl;
//	}
//	void footer() {
//		cout << "帮助中心,交流合作,站内地图...(公共低部)" << endl;
//	}
//	void letf() {
//		cout << "java python C++...(公共分类列表)" << endl;
//	}
//	void content() {
//		cout << "java学科视频" << endl;
//	}
//	
//
//};
////Java页面
//class Java : public BasePage {
//public:
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//
//};
////Python页面
//class Python : public BasePage {
//public:
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//
//};
////C++页面
//class C : public BasePage {
//public:
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//
//};
//
//void test01() {
//	cout << "Java下载视频页面如下:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.letf();
//	ja.content();
//	cout << "---------------------" << endl;
//	cout << "Python下载视频页面如下:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.letf();
//	py.content();
//	cout << "---------------------" << endl;
//	cout << "C++下载视频页面如下:" << endl;
//	C c;
//	c.header();
//	c.footer();
//	c.letf();
//	c.content();
//}
//
//
//int main() {
//	test01();
//}