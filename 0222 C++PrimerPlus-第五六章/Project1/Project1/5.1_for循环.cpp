//#include<iostream>
//
//using namespace std;
//
//
////const int size = 10;
//#define size 10
//int main() {
//
//////5.1.1
//	//int num1;
//	//cout << (num1 = 100) << endl;//
//	//cout << "num1 = " << num1 << endl; 
//	//cout << (num1 > 3) << endl;//
//	//cout << (num1 < 3) << endl;//
//	//cout << endl;
//
//	//int num2;
//	//cout.setf(ios_base::boolalpha);//显示true false
//	//num2 = 100;
//	//cout << "num2 = " << num2 << endl;
//	//cout << (num2 > 3) << endl;//
//	//cout << (num2 < 3) << endl;//
//	
//////5.1.2
//	//int arr1[size];//size不明确
//	//for (int i = 0; i < size; i++) {//size不明确
//	//	cout << i + 1 << " ";
//	//}
//
////5.1.8
//	//前缀递增、前缀递减、解引用运算符优先级相同：
//	//后缀递增、后缀递减优先级相同，且高于前缀和解引用运算符。
//	
//	double arr[5] = { 11.1,22.2,33.3,44.4,55.5 };
//	double* pt = arr;
//	for (int i = 0; i < 5; i++) {
//		cout << *(pt + i) << ", ";
//	}
//	cout << "\n" << endl;		//11.1, 22.2, 33.3, 44.4, 55.5
//
//	cout << "*pt = " << *pt << "\n" << endl;//11.1
//
//	//前缀递增 和 解引用运算符：
//	cout << "*++pt = " << *++pt << endl;//22.2 相当于*(++pt)
//	cout << "*pt = " << *pt << endl;//22.2
//	cout << "++*pt = " << ++*pt << endl;//23.2 相当于++(*pt)
//	cout << "*pt = " << *pt << endl;//23.2
//	cout << endl;
//
//	//后缀递增 和 解引用运算符：
//	cout << "(*pt)++ = " << (*pt)++ << endl;//23.2 
//	cout << "*pt = " << *pt << endl;//24.2
//	cout << "*pt++ = " << *pt++ << endl;//24.2 相当于*(pt++)
//	cout << "*pt = " << *pt << endl;//33.3
//	cout << endl;
//
//	//前缀递增、后缀递增、后缀递减、前缀递减：
//	++pt;
//	cout << "*pt = " << *pt << endl;//44.4
//	pt++;
//	cout << "*pt = " << *pt << endl;//55.5
//	pt--;
//	cout << "*pt = " << *pt << endl;//44.4
//	--pt;
//	cout << "*pt = " << *pt << endl;//33.3
//	cout << endl;
//
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << ", ";
//	}
//	cout << endl;					//11.1, 24.2, 33.3, 44.4, 55.5
//
//
//	system("pause");
//	return 0;
//}