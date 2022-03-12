#include<iostream>
//#include<string>
using namespace std;

//结构体声明：
struct Students {
	//string name = " ";//姓名
	int age;//年龄 = 0
};

//联合体声明：
union MyUnion
{
	char gender;//性别
	int num;//数量
};
//结构体声明：
struct MyStruct
{
	char gender;//性别
	int num;//数量
};


/*字节对齐：
struct S1
{
	char a;
	int b;
};
struct S2
{
	int a;
	char b;
};
struct S3
{
};*/
/*
int main() {
字节对齐：
	cout << "结构体S1的占用内存为：" << sizeof(S1) << endl; //值为8，字节对齐，在char之后会填充3个字节。 
	cout << "结构体S2的占用内存为：" << sizeof(S2) << endl; //值为8，字节对齐，在char之后会填充3个字节。 
	cout << "结构体S3的占用内存为：" << sizeof(S3) << endl; //值为1，空结构体也占内存
*/
/*
//1.cin.getline()
	char name2[20], name3[20], name4[20];

	cout << "请输入您的姓名" << endl;
	cin.getline(name2, 20, '_');//以'_'作为输入结束符
	cout << "你的姓名name2 = " << name2 << endl;

	cout << "请输入您的姓名" << endl;
	cin.getline(name3, 20);//以'\n'作为输入结束符
	cout << "你的姓名name3 = " << name3 << endl;

	cout << "请输入您的姓名" << endl;
	cin.getline(name4, 20);//以'\n'作为输入结束符
	cout << "你的姓名name4 = " << name4 << endl;


//2.cin.get()
	char name2[20], name3[20],name4[20];

	cout << "请输入您的姓名" << endl;
	cin.get(name2, 20,'_');//以'_'作为输入结束符
	cout << "你的姓名name2 = " << name2 << endl;

	cout << "请输入您的姓名" << endl;
	cin.get(name3, 20);//以'\n'作为输入结束符
	cout << "你的姓名name3 = " << name3 << endl;

	cout << "请输入您的姓名" << endl;
	cin.get(name4, 20);//以'\n'作为输入结束符
	cout << "你的姓名name4 = " << name4 << endl;
*/
/*
//2.cin.get()改进
	char name9[20], name10[20], name11[20];
	
	cout << "请输入您的姓名: \n";
	cin.get(name9, 20).get();//默认以换行符作为结束符，并且用get()把换行符被吃掉
	cout << "你的姓名name4 = " << name9 << endl;
	
	cout << "请输入您的姓名: \n";
	cin.get(name10, 20).get();//默认以换行符作为结束符，并且用get()把换行符被吃掉
	cout << "你的姓名name6 = " << name10 << endl;
	
	cout << "请输入您的姓名: \n";
	cin.get(name11, 20).get();//默认以换行符作为结束符，并且用get()把换行符被吃掉
	cout << "你的姓名name8 = " << name11 << endl;
*/
/*4.2.5 混个输入字符串和数字
	int age;
	char address[20];

	cout << "请输入您的年龄：" << endl;
	cin >> age;	
	cout << "请输入您的姓名：" << endl;
	cin.get();//先用.get()吃掉结束符
	cin.get(address, 20);
	cout << "地址：" << address << "\t年龄：" << age << "." << endl;
*/
/*C语言的字符串和C++的string类：
	char name1[20];
	string name2;
	cout << "请输入姓名1：" << endl;
	cin >> name1;
	cout << "请输入姓名2：" << endl;
	cin >> name2;
	cout << "name1 = " << name1 << "\nname2 = " << name2 << endl;
	cout << "name1[2] = " << name1[2] << "\nname2[2] = " << name2[2] << endl;
*/
/*string的赋值、拼接：
	string str1 = "Hello,123.";
	string str2, str3;
	//赋值：
	str2 = str1;
	cout << "str1 = " << str1 << "\nstr2 = " << str2 << endl;
	str2 = "你好呀，丁乐乐。";
	cout << "str2 = " << str2 << endl;
	//拼接：
	str3 = str1 + str2;
	cout << "str3 = " << str3 << endl;
	//附加：
	str1 += "---456789";
	cout << "str1 = " << str1 << endl;
	string str4 = "天地漫漫";
	str1 += str4;
	cout << "str1 = " << str1 << endl;
*/
/*读取整行：
	char name1[20];
	string name2;
	//C语言：
	cout << "请输入name1：" << endl;
	cin.getline(name1, 20);//或者cin.get(name1, 20).get();
	//C++：
	cout << "请输入name2：" << endl;
	getline(cin, name2);
*/
/*结构体赋值：
	Students stu1 = { "Reus",23 };
	Students stu2;
	stu2 = stu1;
	cout << "stu1.name = " << stu1.name << "; stu1.age = " << stu1.age << endl;
	cout << "stu2.name = " << stu2.name << "; stu2.age = " << stu2.age << endl;
*/
/*结构体数组：
	Students stu[3] = { {"Messi",23},{"Reus",25} };
	cout << "姓名：" << stu[0].name << "\t年龄：" << stu[0].age <<
			"\n姓名：" << stu[1].name << "\t年龄：" << stu[1].age <<
			"\n姓名：" << stu[2].name << "\t年龄：" << stu[2].age << endl;
*/
/*联合体/共用体union 和 结构体struct：

	//结构体的初始化（可以一次性给所有成员赋值）：
	MyStruct s1 = { 'M',12 };
	cout << "性别：" << s1.gender << "  数量：" << s1.num << endl;
	
	//联合体的初始化（一次只能给一个成员赋值）：
	MyUnion u1;
	//第一次赋值:
	u1.gender = 'A';
	cout << "性别：" << u1.gender << endl;//F
	cout << "数量：" << u1.num << endl;//-858993594（乱码）
	//第二次赋值:
	u1.num = 20;
	cout << "数量：" << u1.num << endl;//20
	cout << "性别：" << u1.gender << endl;//乱码

	cout << "结构体所占用内存的大小：" << sizeof(s1) << endl;//8，字节对齐，在char之后会填充3个字节。 
	cout << "联合体所占用内存的大小：" << sizeof(u1) << endl;//4，联合体的长度为最大成员的长度。


	system("pause");
	return 0;
}*/