//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	//char ch;
//	//cin.get(ch);
//	//while (ch != '.') {
//
//	//	if (ch == '\n')
//	//		cout << ch;
//	//	else
//	//		//cout << ch + 1;//ch + 1输出的是int型，因为ch加1后就会强制转换成int型
//	//		cout << ++ch;//++ch输出的是char型，即字符
//	//	cin.get(ch);
//	//}
//
//
//
// 	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;

const int size = 10;

int main() {
	//5.1.2
	int arr1[size];//size不明确
	for (int i = 0; i < size; i++) {//size不明确
		cout << i + 1 << " ";
	}

	system("pause");
	return 0;
}