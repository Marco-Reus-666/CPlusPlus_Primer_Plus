//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>//要用strcpy()
//#include<string>
//#include<vector>//STL C++ 98
//#include<array>//C++ 11
//using namespace std;
///**/
////定义结构体：
//struct Students {
//	int m;
//	double n;
//	char ch;
//};
////自定义函数：
//char* getName() {
//	char temp[80];
//	cout << "请输入您的姓名：" << endl;
//	cin >> temp;
//	char* name = new char[strlen(temp) + 1];//new一个char数组
//	strcpy(name, temp);
//	return name;
//}
//
//int main() {
///*
////获取变量的地址：
//	int age = 10;
//	int m = 20;
//	cout << "变量age = " << age << "；变量age的地址&age = " << &age << endl;
//	cout << "变量m = " << m << "；变量age的地址&m = " << (int)(&m) << endl;
//	cout << endl;
//
////指针的初始化：
//	int n = 26;
//	int* p = &n;
//	cout << "变量m的值为" << n << "；变量age的地址为" << (int)(&n) << endl;
//	cout << "p = " << (int)p << "；*p = " << *p << endl;
//	
//	*p = 35;
//	cout << "变量m的值为" << n << "；变量age的地址为" << (int)(&n) << endl;
//	cout << "p = " << (int)p << "；*p = " << *p << endl;
//
//	n = 12;
//	cout << "变量m的值为" << n << "；变量age的地址为" << (int)(&n) << endl;
//	cout << "p = " << (int)p << "；*p = " << *p << endl;
//	cout << endl;
//
////用new开辟内存空间：
//	int* p1 = new int; *p1 = 10;
//	int* p2 = new int(26);
//	double* p3 = new double(13.14);
//
//	cout << "*p1 = " << *p1 << "；&p1 = " << (int)p1 << endl;
//	cout << "*p2 = " << *p2 << "；&p2 = " << (int)p2 << endl;
//	cout << "*p3 = " << *p3 << "；&p3 = " << (int)p3 << endl;
//	cout << endl;
//
////用delete释放内存空间：
//	int* p5 = new int(55);
//	cout << "*p5 = " << *p5 << "；&p5 = " << (int)p5 << endl;
//	*p5 += 26;
//	cout << "*p5 = " << *p5 << "；&p5 = " << (int)p5 << endl;
//	delete p5;//这里只是释放p5指向的内存，不会删除指针p5本身，p5还可以指向别的内存块
//	
//	p5 = new int(23);//重新初始化
//	*p5 += 10;
//	cout << "*p5 = " << *p5 << "；&p5 = " << (int)p5 << endl;
//	delete p5;//再次释放p5指向的内存new int(23)
//	
//	*p5 = 26;//报错！！！C6001：使用未初始化的内存p5
//			   //delete之后，指针p5就相当于一个空指针，
//	int num1 = 26;
//	p5 = &num1;//重新初始化
//	cout << "*p5 = " << *p5 << "；&p5 = " << (int)p5 << endl;
//	delete p5;//报错！！！不能用delete释放声明变量所获得的内存
//						  //只能用delete来释放使用new分配的内存
//
//	p5 = new int(123);//重新初始化
//	*p5 += 10;
//	cout << "*p5 = " << *p5 << "；&p5 = " << (int)p5 << endl;
//	delete p5;//再次释放p5指向的内存new int(123)
//	cout << "*p5 = " << *p5 << "；&p5 = " << (int)p5 << endl;//会报错！！！C6001：使用未初始化的内存p5
//
//	int num = 22;
//	int* p6 = &num;
//	cout << "*p6 = " << *p6 << "；&p6 = " << (int)p6 << endl;
//	delete p6;//报错！！！不能用delete释放声明变量所获得的内存
//						  //只能用delete来释放使用new分配的内存
//	cout << endl;
//
////用new创建动态数组：
//	int* arr1 = new int[3];
//	arr1[0] = 1; arr1[1] = 2; arr1[2] = 3;
//	for (int i = 0; i < 3; i++) {
//		cout << arr1[i] << ", ";
//	}
//	cout << endl;
//	cout << endl;
//	int* arr1 = new int[3] = { 1,2,3 };//报错！！！
//
////指针和数组：
//	int arr2[10] = { 1,2,3 };
//	double arr3[10] = { 1.2,3.4,5.6 };
//	int* p11 = arr2;
//	double* p12 = &arr3[0];
//
//	cout << "arr2[0] = " << arr2[0] << "\t*p11 = " << *p11 << endl;
//	cout << endl;
//	cout << "arr2[1] = " << arr2[1] << "\t*(arr2 + 1) = " << *(arr2 + 1) << endl;
//	cout << endl;
//	cout << "arr3[1] = " << arr3[1] << "\t*(p12 + 1) = " << *(p12 + 1) << endl;
//	cout << endl;
//
//	cout << "sizeof(p11) = " << sizeof(p11) << endl;//8
//	cout << "sizeof(arr2) = " << sizeof(arr2) << endl;//40=4*10
//	cout << "sizeof(p12) = " << sizeof(p12) << endl;//8
//	cout << "sizeof(arr3) = " << sizeof(arr3) << endl;//80=8*10
//	cout << endl;
//
////指针和字符串：
//	char animal[20] = "bear";//字符串
//	const char* bird = "dog";//常量指针，指向的值固定
//	char* ps = animal;//指向char型的指针,这里指向字符串animal[]
//
//	cout << bird << " and " << animal << endl;
//	cout << "指针ps指向的内容为：" << ps << endl;
//	
//	cout << "字符串animal[]的地址为：" << (int)(int*)animal << endl;
//	cout << "指针ps的地址为：" << (int)(int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];//
//	strcpy(ps, animal);//把字符串的内容赋给ps指向的内存空间
//	//注意：不能写ps=animal; 这样只会把字符串的地址赋给ps，导致失去访问new出来的新空间的唯一途径
//	cout << "字符串animal[]的地址为：" << (int)(int*)animal << endl;
//	cout << "指针ps的地址为：" << (int)(int*)ps << endl;
//
////访问结构体成员：
//	Students stu1 = { 23,13.5,'M' };//声明+初始化一个结构体变量
//	Students* pt = &stu1;//结构体指针pt指向结构体变量stu1：
//
//	cout << "访问结构体变量的几种方式：" << endl;
//	cout << "① stu1.m = " << stu1.m << endl;
//	cout << "② pt->n = " << pt->n << endl;
//	cout << "③ (*pt).ch = " << (*pt).ch << endl;
//	cout << endl;
//
////new结构体：
//	Students* ps = new Students;//new一个Students结构体，并将其地址赋给指针ps
//	
//	ps->m = 20;
//	(*ps).n = 2.34;
//	ps->ch = 'F';
//
//	cout << "(*ps).m = " << (*ps).m << endl;
//	cout << "ps->n = " << ps->n << endl;
//	cout << "(*ps).ch = " << (*ps).ch << endl;
//
//	delete ps;//这个不要忘了！！！
//
////案例2：
//	char* ps;//char指针
//	ps = getName();
//	cout << "您输入的姓名为：" << ps << "，地址：" << (int*)ps << endl;
//	delete[] ps;//注意：这里应该释放字符数组，而不是delete ps;
//
//	ps = getName();
//	cout << "您输入的姓名为：" << ps << "，地址：" << (int*)ps << endl;
//	delete[] ps;//注意：这里应该释放字符数组，而不是delete ps;
//*/
////补充：指针数组&数组指针
//	int arr1[3] = { 1,2,3 };//数组
//	int* p1 = arr1;			//指向数组的指针，即数组指针
//
//	int a, b, c;
//	a = 1;
//	b = 2;
//	c = 3;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//指针数组，数组成员是三个指针
//	int* p2[3] = { &a,&b,&c };
//	//数组指针：指向一个数组的指针
//	int(*p3)[3] = &arr1;//p3相当于一个二维数组的地址
///*
////4.9 类型组合---案例1：
//	Students stu1;//创建1个结构体变量
//	stu1.m = 10;
//
//	Students* p1 = &stu1;//结构体指针p1指向结构体变量stu1
//	p1->n = 11;
//	(*p1).ch = 'M';
//
//	cout << "stu1.m = " << stu1.m << "\tstu1.n = " << p1->n << "\tstu1.ch = " << (*p1).ch << endl;
//	
//	Students stu[3] = {};//创建一个结构体数组
//	stu[0].m = 1;
//	stu[1].n = 2.3;
//	stu[2].ch = 'A';
//	for (int i = 0; i < 3; i++) {
//		cout << "stu[" << i << "].m = " << stu[i].m << "\tstu[" << i << "].n = " << stu[i].n
//			 << "\tstu[" << i << "].ch = " << stu[i].ch << endl;
//	}
//	cout << endl;
//	
////4.9 类型组合---案例2：
////结构体变量+①结构体指针：
//	Students s01, s02, s03;//创建三个结构体变量
//	s01.m = 2010;
//	Students* p1 = &s02;//①结构体指针
//	p1->m = 2012;
//	Students* p2 = &s03;//①结构体指针
//	(*p2).m = 2014;
//	cout << "结构体变量+结构体指针：\ns01.m = " << s01.m << "\ts02.m = " << p1->m << "\ts03.m = " << (*p2).m << endl;
//	cout << endl;
//
////②结构体数组+③指向结构体数组的指针：
//	Students stu[3] = {};//②结构体数组
//	stu[0].m = 2016;
//	stu[1].m = 2016;
//	stu[2].m = 2016;
//	Students* p3 = stu; //③指向结构体数组的指针
//	p3->m = 2018;
//	(p3 + 1)->m = 2018;
//	(p3 + 2)->m = 2018;
//	(*p3).m = 2015;
//	(*(p3 + 1)).m = 2015;
//	(*(p3 + 2)).m = 2015;
//	cout << "结构体数组+结构体指针：" << endl;
//	for (int i = 0; i < 3; i++) 
//		cout << "stu[" << i << "].m = " << stu[i].m << endl;
//	cout << endl;
//
////④结构体指针数组+⑤指向结构体指针数组的指针：
//	Students s04, s05, s06;//创建三个结构体变量
//	s04.m = 2001;	s05.m = 2003;	s06.m = 2005;
//	const Students* p[3] = { &s04, &s05, &s06 };//④结构体指针数组
//	//p[0]->m = 2002;//报错！！ 表达式必须是可修改的左值  常量指针：指向的内容值固定的，所以不能修改p[0]指向的s04的内容
//	cout << "s04.m = " << p[0]->m << "\ts05.m = " << (*p[1]).m << "\ts06.m = " << (*p[2]).m << endl;
//	const Students** ppa = p;//⑤指向结构体指针数组的指针
//	cout << "s04.m = " << (*ppa)->m << "\ts05.m = " << (*(ppa + 1))->m;
//	auto ppb = p;//C++ 11中的自动类型推理
//	cout << "\ts06.m = " << (*(ppb + 2))->m << endl;
//
////4.10数组的替代品：
//	//original C++
//	double a1[4] = { 1.2,2.4,3.6,4.8 };
//	//C++ 98 STL:
//	vector<double> a2(4);
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//	//C++ 11
//	array<double, 4>a3 = { 3.14,2.72,1.62,1.41 };
//	array<double, 4>a4;
//	a4 = a3;
//
//	cout << "a1[2] = " << a1[2] << ", &a1[2] = " << &a1[2] << endl;
//	cout << "a2[2] = " << a2[2] << ", &a2[2] = " << &a2[2] << endl;
//	cout << "a3[2] = " << a3[2] << ", &a3[2] = " << &a3[2] << endl;
//	cout << "a4[2] = " << a4[2] << ", &a4[2] = " << &a4[2] << endl;
//	cout << endl;
//
//	a1[-2] = 20.2;//C++不检查这种越级错误，所以这样写不安全
//	a2.at(2) = 1.0 / 3.0;
//	a3.at(2) = 2.56;
//	cout << "a2[2] = " << a2[2] << ", &a2[2] = " << &a2[2] << endl;
//	cout << "a3[2] = " << a3[2] << ", &a3[2] = " << &a3[2] << endl;
//	cout << "a4[2] = " << a4[2] << ", &a4[2] = " << &a4[2] << endl;
//*/
//	system("pause");
//	return 0;
//}/**/