//#include<iostream>
//#include<array>
//#include<cstring>
//#include<string>
//using namespace std;
//
//////第7题：
////struct Cars {
////	char manufacturer[20];//生产商
////	int productiveYear;//生产年份
////};
//
//////第7'题：
////struct Cars {
////	string manufacturer;//生产商
////	int productiveYear;//生产年份
////};
//
//int main() {
//
////复习题-第6题：
//	//int i = 1;
//	//while (i <= 64) {
//	//	cout << i << " ";
//	//	i *= 2;
//	//}
//	//cout << endl;
//
////编程练习：
//	////第1题：
//	//int num1, num2;
//	//cout << "请输入num1：";
//	//cin >> num1;
//	//cout << "请输入num2：";
//	//cin >> num2;
//	// 
//	//int sum = 0;
//	//for (int i = num1; i <= num2; i++) {
//	//	sum += i;
//	//}
//	//cout << "和sum = " << sum << "。" << endl;
//
//	////第2题：
//	//const int size = 101;//应该是101，不是100
//	//array<long double, size> arr;
//	//arr[0] = arr[1] = 1;
//	//for (int i = 2; i < size; i++) {
//	//	arr[i] = arr[i - 1] * i;
//	//}
//	//for (int i = 0; i < size; i++) {
//	//	cout << i << "! = " << arr[i] << endl;
//	//}
//
//	////第3题：
//	//float sum = 0;
//	//float num;
//	//cout << "请输入一个数字：";
//	//cin >> num;
//	//while (num != 0) {
//	//	sum += num;
//	//	cout << "\n当前输入的所有数的和 sum= " << sum << endl;
//	//	cout << "请输入一个数字：";
//	//	cin >> num;
//	//}
//	//if (!num)
//	//	cout << "num = " << num << "，程序结束。" << endl;
//
//	////第4题：
//	//float a_money = 100;
//	//float b_money = 100;
//	//int year;
//	//for (year = 1; a_money >= b_money; year++) {
//	//	a_money += 0.1 * 100;
//	//	b_money += b_money * 0.05;
//	//	cout<<year<<"年后：A的存款 " << a_money << "美元，B的存款为" << b_money << "美元;" << endl;
//	//}
//	//cout << --year << "年后，B的存款超过了A，此时A的存款为 " << a_money << "美元，而B的存款为" << b_money << "美元。" << endl;
//
//	////第5题：
//	//const char* months[12] = { "1月","2月","3月","4月",
//	//					"5月","6月","7月","8月",
//	//					"9月","10月","11月","12月" };//字符串常量，所以前面要加const
//	//int salesVolume[12] = { 1,2,5,6 };
//	////for (int i = 0; i < 12; i++) {
//	////	cout << "请输入" << i+1 << "月的销量：";
//	////	cin >> salesVolume[i];
//	////}
//	//for (int i = 0; i < 12; i++)
//	//	cout << months[i] << "销量：" << salesVolume[i] << ";" << endl;
//
//	////第6题：
//	//const char* months[12] = { "1月","2月","3月","4月",
//	//					"5月","6月","7月","8月",
//	//					"9月","10月","11月","12月" };
//	//int salesVolume[3][12] = {{1,2,3,4},{0,0,12,23,5},{0,0,0,0,0,25,65,84,15}  };//
//	////for (int i = 0; i < 3; i++) {
//	////	cout << "请输入第" << i + 1 << "年的销售量：" << endl;
//	////	for (int j = 0; j < 12; j++) {
//	////		cout<< "请输入" << j + 1 << "月的销量：";
//	////		cin >> salesVolume[i][j];
//	////	}
//	////}
//	//for (int i = 0; i < 3; i++) {
//	//	cout << "第" << i + 1 << "年的销售量如下：" << endl;
//	//	for (int j = 0; j < 12; j++) {
//	//		cout << months[j] << "销量：" << salesVolume[i][j] << ";" << endl;
//	//	}
//	//}
//
//	////第7题：
//	//cout << "How many cars do you sish to catalog? ";
//	//int num_of_car;
//	//cin >> num_of_car;
//	//cin.get();//消除结束符
//	//Cars* car = new Cars[num_of_car];
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << "Car #" << i + 1 << "：" << endl;
//	//	cout << "Please enter the make:";
//	//	//cin >> car[i].manufacturer;//只能读一个单词
//	//	cin.getline(car[i].manufacturer, 20);//用这个可以读一整行
//	//	cout << "Please enter the year made:";
//	//	cin >> car[i].productiveYear;
//	//	cin.get();//消除结束符
//	//}
//	//cout << "Here is  your collection:" << endl;
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << car[i].productiveYear << " " << car[i].manufacturer << endl;
//	//}
//	//delete[] car;
//
//	////第7'题：
//	//cout << "How many cars do you sish to catalog? ";
//	//int num_of_car;
//	//cin >> num_of_car;
//	//cin.get();//消除结束符
//	//Cars* car = new Cars[num_of_car];
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << "Car #" << i + 1 << "：" << endl;
//	//	cout << "Please enter the make:";
//	//	//cin >> car[i].manufacturer;//只能读一个单词
//	//	getline(cin,car[i].manufacturer);//用这个可以读一整行
//	//	cout << "Please enter the year made:";
//	//	cin >> car[i].productiveYear;
//	//	cin.get();//消除结束符
//	//}
//	//cout << "Here is  your collection:" << endl;
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << car[i].productiveYear << " " << car[i].manufacturer << endl;
//	//}
//	//delete[] car;
//
//	////第8题：
//	//char words[20];//字符数组
//	//int num_of_words = 0;
//	//cout << "请输入单词（以done作为结束的单词）：" << endl;
//	//while(strcmp("done",words)){
//	//	num_of_words++;
//	//	cin >> words;//读取一个单词
//	//	cin.get();//消除结束符
//	//}
//	//cout << "一共有" << num_of_words - 1 << "个单词。" << endl;
//
//	////第9题：
//	//string str;
//	//int num_of_words = 0;
//	//cout << "请输入单词（以done作为结束的单词）：" << endl;
//	//while(str != "done"){
//	//	num_of_words++;
//	//	cin >> str;//读取一个单词
//	//	cin.get();//消除结束符
//	//}
//	//cout << "一共有" << num_of_words - 1 << "个单词。" << endl;
//
//	//第10题：
//	cout << "请输入您要显示的行数：";
//	int num;
//	cin >> num;
//	cin.get();
//	for (int i = 1; i <= num; i++) {
//		for (int j = 1; j <= num-i; j++) {
//			cout << ". ";
//		}
//		for (int j = 1; j <= i; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}