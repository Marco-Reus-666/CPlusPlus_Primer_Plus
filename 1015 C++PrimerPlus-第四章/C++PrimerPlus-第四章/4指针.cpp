//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>//Ҫ��strcpy()
//#include<string>
//#include<vector>//STL C++ 98
//#include<array>//C++ 11
//using namespace std;
///**/
////����ṹ�壺
//struct Students {
//	int m;
//	double n;
//	char ch;
//};
////�Զ��庯����
//char* getName() {
//	char temp[80];
//	cout << "����������������" << endl;
//	cin >> temp;
//	char* name = new char[strlen(temp) + 1];//newһ��char����
//	strcpy(name, temp);
//	return name;
//}
//
//int main() {
///*
////��ȡ�����ĵ�ַ��
//	int age = 10;
//	int m = 20;
//	cout << "����age = " << age << "������age�ĵ�ַ&age = " << &age << endl;
//	cout << "����m = " << m << "������age�ĵ�ַ&m = " << (int)(&m) << endl;
//	cout << endl;
//
////ָ��ĳ�ʼ����
//	int n = 26;
//	int* p = &n;
//	cout << "����m��ֵΪ" << n << "������age�ĵ�ַΪ" << (int)(&n) << endl;
//	cout << "p = " << (int)p << "��*p = " << *p << endl;
//	
//	*p = 35;
//	cout << "����m��ֵΪ" << n << "������age�ĵ�ַΪ" << (int)(&n) << endl;
//	cout << "p = " << (int)p << "��*p = " << *p << endl;
//
//	n = 12;
//	cout << "����m��ֵΪ" << n << "������age�ĵ�ַΪ" << (int)(&n) << endl;
//	cout << "p = " << (int)p << "��*p = " << *p << endl;
//	cout << endl;
//
////��new�����ڴ�ռ䣺
//	int* p1 = new int; *p1 = 10;
//	int* p2 = new int(26);
//	double* p3 = new double(13.14);
//
//	cout << "*p1 = " << *p1 << "��&p1 = " << (int)p1 << endl;
//	cout << "*p2 = " << *p2 << "��&p2 = " << (int)p2 << endl;
//	cout << "*p3 = " << *p3 << "��&p3 = " << (int)p3 << endl;
//	cout << endl;
//
////��delete�ͷ��ڴ�ռ䣺
//	int* p5 = new int(55);
//	cout << "*p5 = " << *p5 << "��&p5 = " << (int)p5 << endl;
//	*p5 += 26;
//	cout << "*p5 = " << *p5 << "��&p5 = " << (int)p5 << endl;
//	delete p5;//����ֻ���ͷ�p5ָ����ڴ棬����ɾ��ָ��p5����p5������ָ�����ڴ��
//	
//	p5 = new int(23);//���³�ʼ��
//	*p5 += 10;
//	cout << "*p5 = " << *p5 << "��&p5 = " << (int)p5 << endl;
//	delete p5;//�ٴ��ͷ�p5ָ����ڴ�new int(23)
//	
//	*p5 = 26;//��������C6001��ʹ��δ��ʼ�����ڴ�p5
//			   //delete֮��ָ��p5���൱��һ����ָ�룬
//	int num1 = 26;
//	p5 = &num1;//���³�ʼ��
//	cout << "*p5 = " << *p5 << "��&p5 = " << (int)p5 << endl;
//	delete p5;//��������������delete�ͷ�������������õ��ڴ�
//						  //ֻ����delete���ͷ�ʹ��new������ڴ�
//
//	p5 = new int(123);//���³�ʼ��
//	*p5 += 10;
//	cout << "*p5 = " << *p5 << "��&p5 = " << (int)p5 << endl;
//	delete p5;//�ٴ��ͷ�p5ָ����ڴ�new int(123)
//	cout << "*p5 = " << *p5 << "��&p5 = " << (int)p5 << endl;//�ᱨ������C6001��ʹ��δ��ʼ�����ڴ�p5
//
//	int num = 22;
//	int* p6 = &num;
//	cout << "*p6 = " << *p6 << "��&p6 = " << (int)p6 << endl;
//	delete p6;//��������������delete�ͷ�������������õ��ڴ�
//						  //ֻ����delete���ͷ�ʹ��new������ڴ�
//	cout << endl;
//
////��new������̬���飺
//	int* arr1 = new int[3];
//	arr1[0] = 1; arr1[1] = 2; arr1[2] = 3;
//	for (int i = 0; i < 3; i++) {
//		cout << arr1[i] << ", ";
//	}
//	cout << endl;
//	cout << endl;
//	int* arr1 = new int[3] = { 1,2,3 };//��������
//
////ָ������飺
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
////ָ����ַ�����
//	char animal[20] = "bear";//�ַ���
//	const char* bird = "dog";//����ָ�룬ָ���ֵ�̶�
//	char* ps = animal;//ָ��char�͵�ָ��,����ָ���ַ���animal[]
//
//	cout << bird << " and " << animal << endl;
//	cout << "ָ��psָ�������Ϊ��" << ps << endl;
//	
//	cout << "�ַ���animal[]�ĵ�ַΪ��" << (int)(int*)animal << endl;
//	cout << "ָ��ps�ĵ�ַΪ��" << (int)(int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];//
//	strcpy(ps, animal);//���ַ��������ݸ���psָ����ڴ�ռ�
//	//ע�⣺����дps=animal; ����ֻ����ַ����ĵ�ַ����ps������ʧȥ����new�������¿ռ��Ψһ;��
//	cout << "�ַ���animal[]�ĵ�ַΪ��" << (int)(int*)animal << endl;
//	cout << "ָ��ps�ĵ�ַΪ��" << (int)(int*)ps << endl;
//
////���ʽṹ���Ա��
//	Students stu1 = { 23,13.5,'M' };//����+��ʼ��һ���ṹ�����
//	Students* pt = &stu1;//�ṹ��ָ��ptָ��ṹ�����stu1��
//
//	cout << "���ʽṹ������ļ��ַ�ʽ��" << endl;
//	cout << "�� stu1.m = " << stu1.m << endl;
//	cout << "�� pt->n = " << pt->n << endl;
//	cout << "�� (*pt).ch = " << (*pt).ch << endl;
//	cout << endl;
//
////new�ṹ�壺
//	Students* ps = new Students;//newһ��Students�ṹ�壬�������ַ����ָ��ps
//	
//	ps->m = 20;
//	(*ps).n = 2.34;
//	ps->ch = 'F';
//
//	cout << "(*ps).m = " << (*ps).m << endl;
//	cout << "ps->n = " << ps->n << endl;
//	cout << "(*ps).ch = " << (*ps).ch << endl;
//
//	delete ps;//�����Ҫ���ˣ�����
//
////����2��
//	char* ps;//charָ��
//	ps = getName();
//	cout << "�����������Ϊ��" << ps << "����ַ��" << (int*)ps << endl;
//	delete[] ps;//ע�⣺����Ӧ���ͷ��ַ����飬������delete ps;
//
//	ps = getName();
//	cout << "�����������Ϊ��" << ps << "����ַ��" << (int*)ps << endl;
//	delete[] ps;//ע�⣺����Ӧ���ͷ��ַ����飬������delete ps;
//*/
////���䣺ָ������&����ָ��
//	int arr1[3] = { 1,2,3 };//����
//	int* p1 = arr1;			//ָ�������ָ�룬������ָ��
//
//	int a, b, c;
//	a = 1;
//	b = 2;
//	c = 3;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//ָ�����飬�����Ա������ָ��
//	int* p2[3] = { &a,&b,&c };
//	//����ָ�룺ָ��һ�������ָ��
//	int(*p3)[3] = &arr1;//p3�൱��һ����ά����ĵ�ַ
///*
////4.9 �������---����1��
//	Students stu1;//����1���ṹ�����
//	stu1.m = 10;
//
//	Students* p1 = &stu1;//�ṹ��ָ��p1ָ��ṹ�����stu1
//	p1->n = 11;
//	(*p1).ch = 'M';
//
//	cout << "stu1.m = " << stu1.m << "\tstu1.n = " << p1->n << "\tstu1.ch = " << (*p1).ch << endl;
//	
//	Students stu[3] = {};//����һ���ṹ������
//	stu[0].m = 1;
//	stu[1].n = 2.3;
//	stu[2].ch = 'A';
//	for (int i = 0; i < 3; i++) {
//		cout << "stu[" << i << "].m = " << stu[i].m << "\tstu[" << i << "].n = " << stu[i].n
//			 << "\tstu[" << i << "].ch = " << stu[i].ch << endl;
//	}
//	cout << endl;
//	
////4.9 �������---����2��
////�ṹ�����+�ٽṹ��ָ�룺
//	Students s01, s02, s03;//���������ṹ�����
//	s01.m = 2010;
//	Students* p1 = &s02;//�ٽṹ��ָ��
//	p1->m = 2012;
//	Students* p2 = &s03;//�ٽṹ��ָ��
//	(*p2).m = 2014;
//	cout << "�ṹ�����+�ṹ��ָ�룺\ns01.m = " << s01.m << "\ts02.m = " << p1->m << "\ts03.m = " << (*p2).m << endl;
//	cout << endl;
//
////�ڽṹ������+��ָ��ṹ�������ָ�룺
//	Students stu[3] = {};//�ڽṹ������
//	stu[0].m = 2016;
//	stu[1].m = 2016;
//	stu[2].m = 2016;
//	Students* p3 = stu; //��ָ��ṹ�������ָ��
//	p3->m = 2018;
//	(p3 + 1)->m = 2018;
//	(p3 + 2)->m = 2018;
//	(*p3).m = 2015;
//	(*(p3 + 1)).m = 2015;
//	(*(p3 + 2)).m = 2015;
//	cout << "�ṹ������+�ṹ��ָ�룺" << endl;
//	for (int i = 0; i < 3; i++) 
//		cout << "stu[" << i << "].m = " << stu[i].m << endl;
//	cout << endl;
//
////�ܽṹ��ָ������+��ָ��ṹ��ָ�������ָ�룺
//	Students s04, s05, s06;//���������ṹ�����
//	s04.m = 2001;	s05.m = 2003;	s06.m = 2005;
//	const Students* p[3] = { &s04, &s05, &s06 };//�ܽṹ��ָ������
//	//p[0]->m = 2002;//������ ���ʽ�����ǿ��޸ĵ���ֵ  ����ָ�룺ָ�������ֵ�̶��ģ����Բ����޸�p[0]ָ���s04������
//	cout << "s04.m = " << p[0]->m << "\ts05.m = " << (*p[1]).m << "\ts06.m = " << (*p[2]).m << endl;
//	const Students** ppa = p;//��ָ��ṹ��ָ�������ָ��
//	cout << "s04.m = " << (*ppa)->m << "\ts05.m = " << (*(ppa + 1))->m;
//	auto ppb = p;//C++ 11�е��Զ���������
//	cout << "\ts06.m = " << (*(ppb + 2))->m << endl;
//
////4.10��������Ʒ��
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
//	a1[-2] = 20.2;//C++���������Խ��������������д����ȫ
//	a2.at(2) = 1.0 / 3.0;
//	a3.at(2) = 2.56;
//	cout << "a2[2] = " << a2[2] << ", &a2[2] = " << &a2[2] << endl;
//	cout << "a3[2] = " << a3[2] << ", &a3[2] = " << &a3[2] << endl;
//	cout << "a4[2] = " << a4[2] << ", &a4[2] = " << &a4[2] << endl;
//*/
//	system("pause");
//	return 0;
//}/**/