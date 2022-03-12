//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//////5.5.1 5.5.2
////	char ch;
////	int count = 0;
////	//cin >> ch;//5.5.1
////	cin.get(ch);//5.5.2
////	while (ch != '#') {//#作为结束符
////		cout << ch;
////		count++;
////		//cin >> ch;//5.5.1
////		cin.get(ch);//5.5.2
////	}
////	cout << "共输入了 " << count << " 个字符。" << endl;
//
//////5.5.4 5.5.5
////	//程序1：
////	char ch;
////	int count = 0;
////	cin.get(ch);
////	while (cin.fail() == false) {//判断是否到达文件尾 
////   //while判断条件用 cin.eof() == false 也可以
////		cout << ch;
////		count++;
////		cin.get(ch);
////	}
////	cout << "共输入了 " << count << " 个字符。" << endl;
//
//	////程序2：
//	//char ch;
//	//int count = 0;
//	//while (cin.get(ch)) {//判断是否到达文件尾 
//	//	
//	//	cout << ch;
//	//	count++;
//	//}
//	//cout << "共输入了 " << count << " 个字符。" << endl;
//
//	////程序3：
//	//int ch;
//	//int count = 0;
//	//while ((ch = cin.get()) != EOF) {
//	//	cout.put(char(ch));
//	//	count++;
//	//}
//	//cout << "共输入了 " << count << " 个字符。" << endl;
//
////5.6
//	//字符串指针数组：
//	const char* cities[5] = { "beijing","tianjin","xi'an","nanjing","xiamen" };
//	
//	//字符数组：
//	char cities2[5][20]{ "beijing","tianjin","xi'an","nanjing","xiamen" };
//
//	//string对象数组：
//	const string cities3[5]={ "beijing","tianjin","xi'an","nanjing","xiamen" };
//
//
//	system("pause");
//	return 0;
//}