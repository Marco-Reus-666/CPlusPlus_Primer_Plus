#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>//Ҫ��strcpy()
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

////��ϰ��-13�⣺
//	cout << "������һ����������" << endl;
//	int num;
//	cin >> num;
//	int* arr_int = new int[num];
//
//	vector<int> v_int(num);
//
////15�⣺
//	Fishes* fish1 = new Fishes;
//	cout << fish1->type << fish1->weight << fish1->length << endl;
////14�⣺
//	cout << "hello,world." << endl;	//hello,world.
//	cout << (char*)"hello,world." << endl;	//hello,world.
//	cout << (int*)"hello,world." << endl;		//00007FF645A8AC28
//	cout << (int)(int*)"hello,world." << endl;//1168682024
//
////�����ϰ��
//	//��һ�⣺
//	char name1[20], name2[25];
//	cout << "������name1:";
//	cin >> name1;//ֻ�ܽ���һ�����ʣ������ո��س����ͻ�ֹͣ�����һᱣ������ո��س���
//	cin.get();//����������
//	cout << "name1 = " << name1 << endl;
//	cout << "������name2:";
//	cin.getline(name2,20);//���Խ������У������س���ֹͣ
//	cout << "name2 = " << name2 << endl;
//
//	string name3,name4;
//	cout << "������name3:";
//	cin>>name3;//ֻ�ܽ���һ�����ʣ������ո��س����ͻ�ֹͣ�����һᱣ������ո��س���
//	cin.get();//����������
//	cout << "name3 = " << name3 << endl;
//	cout << "������name4:";
//	getline(cin, name4);//���Խ������У������س���ֹͣ
//	cout << "name4 = " << name4 << endl;

	//�����⣺
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

	////�����⣺
	//CandyBar snack = { "Mocha Munch",2.3,350 };
	//cout << snack.brand << "," << snack.weight << "," << snack.calorie << endl;
	////snack.brand = "wangwang";//���󣺱��ʽ�����ǿ��޸ĵ���ֵ 
	////��Ϊ�ṹ���Աbrand��һ���ַ����飬���Բ����Ḵ���ַ�������ֻ�Ǹ��Ƶ�ַ���������Ҫ��strcpy() 
	//strcpy(snack.brand,"wangwang");
	////�����⣺ 
	//CandyBar candies[3]{
	//	{"lele"}
	//	,{"",2.6}
	//	,{"",0,360} };
	//cout << candies[0].brand << candies[1].weight << candies[2].calorie << endl;
	////�����⣺
	//CandyBar candy0;
	//cout << "���������ƣ�";
	//cin.getline(candy0.brand,80);
	//cout << "������ֱ����";
	//cin >> candy0.weight;
	//cout << "������������";
	//cin >> candy0.calorie;
	//cout << candy0.brand << candy0.weight << candy0.calorie << endl;
	////�ڰ��⣺
	//CandyBar* candy1 = new CandyBar;
	//cout << "���������ƣ�";
	//cin.getline(candy1->brand, 80);
	//cout << "������ֱ����";
	//cin >> candy1->weight;
	//cout << "������������";
	//cin >> candy1->calorie;
	//cout << candy1->brand << candy1->weight << candy1->calorie << endl;
	//delete candy1;//�����ˣ�����
	////�ھ��⣺
	//CandyBar* candies2 = new CandyBar[3];
	////candies2->brand = "12le��";//��Ϊ�ṹ���Աbrand��һ���ַ����飬���Բ����Ḵ���ַ�������ֻ�Ǹ��Ƶ�ַ��
	//							 //���һ�ʧȥ����new�������¿ռ��Ψһ;�����������Ҫ��strcpy()
	//strcpy(candies2->brand,"12le��");//
	//(candies2 + 1)->weight = 125.6;
	//candies2[1].calorie = 110;
	//(candies2 + 2)->calorie=25.6;
	//cout << candies2->brand << (candies2 + 1)->weight << (candies2 + 2)->calorie << endl;
	//delete[] candies2;//�����ˣ�����

	////��ʮ�⣺
	//array<float, 3> arr_score;
	//float ave = 0;
	//for (int i = 0; i < arr_score.size(); i++) {
	//	cout << "�������" << i + 1 << "�γɼ���";
	//	cin >> arr_score[i];
	//	ave += arr_score[i];
	//}
	//ave /= arr_score.size();
	//cout << "��һ�������� " << arr_score.size() << " �γɼ���ƽ������ " << ave << " �֡�" <<  endl;

	system("pause");
	return 0;
}