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
//	//cout.setf(ios_base::boolalpha);//��ʾtrue false
//	//num2 = 100;
//	//cout << "num2 = " << num2 << endl;
//	//cout << (num2 > 3) << endl;//
//	//cout << (num2 < 3) << endl;//
//	
//////5.1.2
//	//int arr1[size];//size����ȷ
//	//for (int i = 0; i < size; i++) {//size����ȷ
//	//	cout << i + 1 << " ";
//	//}
//
////5.1.8
//	//ǰ׺������ǰ׺�ݼ�����������������ȼ���ͬ��
//	//��׺��������׺�ݼ����ȼ���ͬ���Ҹ���ǰ׺�ͽ������������
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
//	//ǰ׺���� �� �������������
//	cout << "*++pt = " << *++pt << endl;//22.2 �൱��*(++pt)
//	cout << "*pt = " << *pt << endl;//22.2
//	cout << "++*pt = " << ++*pt << endl;//23.2 �൱��++(*pt)
//	cout << "*pt = " << *pt << endl;//23.2
//	cout << endl;
//
//	//��׺���� �� �������������
//	cout << "(*pt)++ = " << (*pt)++ << endl;//23.2 
//	cout << "*pt = " << *pt << endl;//24.2
//	cout << "*pt++ = " << *pt++ << endl;//24.2 �൱��*(pt++)
//	cout << "*pt = " << *pt << endl;//33.3
//	cout << endl;
//
//	//ǰ׺��������׺��������׺�ݼ���ǰ׺�ݼ���
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