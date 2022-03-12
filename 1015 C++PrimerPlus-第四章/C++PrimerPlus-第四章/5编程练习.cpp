#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>//要用strcpy()
#include<string>
#include<vector>//STL C++ 98
#include<array>//C++ 11
using namespace std;

struct Fishes{
	string type;
	int weight;
	float length;
};

struct CandyBar {
	char brand[80];
	float weight;
	int calorie;
};
int main() {

////复习题-13题：
//	cout << "请输入一个正整数：" << endl;
//	int num;
//	cin >> num;
//	int* arr_int = new int[num];
//
//	vector<int> v_int(num);
//
////15题：
//	Fishes* fish1 = new Fishes;
//	cout << fish1->type << fish1->weight << fish1->length << endl;
////14题：
//	cout << "hello,world." << endl;	//hello,world.
//	cout << (char*)"hello,world." << endl;	//hello,world.
//	cout << (int*)"hello,world." << endl;		//00007FF645A8AC28
//	cout << (int)(int*)"hello,world." << endl;//1168682024
//
////编程练习：
//	//第一题：
//	char name1[20], name2[25];
//	cout << "请输入name1:";
//	cin >> name1;//只能接收一个单词，遇到空格或回车符就会停止，并且会保留这个空格或回车符
//	cin.get();//消除结束符
//	cout << "name1 = " << name1 << endl;
//	cout << "请输入name2:";
//	cin.getline(name2,20);//可以接收整行，遇到回车符停止
//	cout << "name2 = " << name2 << endl;
//
//	string name3,name4;
//	cout << "请输入name3:";
//	cin>>name3;//只能接收一个单词，遇到空格或回车符就会停止，并且会保留这个空格或回车符
//	cin.get();//消除结束符
//	cout << "name3 = " << name3 << endl;
//	cout << "请输入name4:";
//	getline(cin, name4);//可以接收整行，遇到回车符停止
//	cout << "name4 = " << name4 << endl;

	//第三题：
	//char lastName[20];
	//char firstName[20];
	//char temp[20] = ", ";
	//char name[20];
	//cin.getline(lastName, 20);
	//cin.getline(firstName, 20);
	//strcat(temp, firstName);
	//strcpy(name, lastName);
	//strcat(name, temp);
	//cout << "name = " << name << endl;
	//string lastName, firstName, name;
	//getline(cin, lastName);
	//getline(cin, firstName);
	//name = lastName + ", " + firstName;
	//cout << "name = " << name << endl;

	////第五题：
	//CandyBar snack = { "Mocha Munch",2.3,350 };
	//cout << snack.brand << "," << snack.weight << "," << snack.calorie << endl;
	////snack.brand = "wangwang";//错误：表达式必须是可修改的左值 
	////因为结构体成员brand是一个字符数组，所以并不会复制字符串，而只是复制地址，因此这里要用strcpy() 
	//strcpy(snack.brand,"wangwang");
	////第六题： 
	//CandyBar candies[3]{
	//	{"lele"}
	//	,{"",2.6}
	//	,{"",0,360} };
	//cout << candies[0].brand << candies[1].weight << candies[2].calorie << endl;
	////第七题：
	//CandyBar candy0;
	//cout << "请输入名称：";
	//cin.getline(candy0.brand,80);
	//cout << "请输入直径：";
	//cin >> candy0.weight;
	//cout << "请输入重量：";
	//cin >> candy0.calorie;
	//cout << candy0.brand << candy0.weight << candy0.calorie << endl;
	////第八题：
	//CandyBar* candy1 = new CandyBar;
	//cout << "请输入名称：";
	//cin.getline(candy1->brand, 80);
	//cout << "请输入直径：";
	//cin >> candy1->weight;
	//cout << "请输入重量：";
	//cin >> candy1->calorie;
	//cout << candy1->brand << candy1->weight << candy1->calorie << endl;
	//delete candy1;//别忘了！！！
	////第九题：
	//CandyBar* candies2 = new CandyBar[3];
	////candies2->brand = "12le里";//因为结构体成员brand是一个字符数组，所以并不会复制字符串，而只是复制地址，
	//							 //并且会失去访问new出来的新空间的唯一途径，因此这里要用strcpy()
	//strcpy(candies2->brand,"12le里");//
	//(candies2 + 1)->weight = 125.6;
	//candies2[1].calorie = 110;
	//(candies2 + 2)->calorie=25.6;
	//cout << candies2->brand << (candies2 + 1)->weight << (candies2 + 2)->calorie << endl;
	//delete[] candies2;//别忘了！！！

	////第十题：
	//array<float, 3> arr_score;
	//float ave = 0;
	//for (int i = 0; i < arr_score.size(); i++) {
	//	cout << "请输入第" << i + 1 << "次成绩：";
	//	cin >> arr_score[i];
	//	ave += arr_score[i];
	//}
	//ave /= arr_score.size();
	//cout << "您一共输入了 " << arr_score.size() << " 次成绩，平均分是 " << ave << " 分。" <<  endl;

	system("pause");
	return 0;
}