//#include<iostream>
//#include<array>
//#include<cstring>
//#include<string>
//using namespace std;
//
//////��7�⣺
////struct Cars {
////	char manufacturer[20];//������
////	int productiveYear;//�������
////};
//
//////��7'�⣺
////struct Cars {
////	string manufacturer;//������
////	int productiveYear;//�������
////};
//
//int main() {
//
////��ϰ��-��6�⣺
//	//int i = 1;
//	//while (i <= 64) {
//	//	cout << i << " ";
//	//	i *= 2;
//	//}
//	//cout << endl;
//
////�����ϰ��
//	////��1�⣺
//	//int num1, num2;
//	//cout << "������num1��";
//	//cin >> num1;
//	//cout << "������num2��";
//	//cin >> num2;
//	// 
//	//int sum = 0;
//	//for (int i = num1; i <= num2; i++) {
//	//	sum += i;
//	//}
//	//cout << "��sum = " << sum << "��" << endl;
//
//	////��2�⣺
//	//const int size = 101;//Ӧ����101������100
//	//array<long double, size> arr;
//	//arr[0] = arr[1] = 1;
//	//for (int i = 2; i < size; i++) {
//	//	arr[i] = arr[i - 1] * i;
//	//}
//	//for (int i = 0; i < size; i++) {
//	//	cout << i << "! = " << arr[i] << endl;
//	//}
//
//	////��3�⣺
//	//float sum = 0;
//	//float num;
//	//cout << "������һ�����֣�";
//	//cin >> num;
//	//while (num != 0) {
//	//	sum += num;
//	//	cout << "\n��ǰ������������ĺ� sum= " << sum << endl;
//	//	cout << "������һ�����֣�";
//	//	cin >> num;
//	//}
//	//if (!num)
//	//	cout << "num = " << num << "�����������" << endl;
//
//	////��4�⣺
//	//float a_money = 100;
//	//float b_money = 100;
//	//int year;
//	//for (year = 1; a_money >= b_money; year++) {
//	//	a_money += 0.1 * 100;
//	//	b_money += b_money * 0.05;
//	//	cout<<year<<"���A�Ĵ�� " << a_money << "��Ԫ��B�Ĵ��Ϊ" << b_money << "��Ԫ;" << endl;
//	//}
//	//cout << --year << "���B�Ĵ�����A����ʱA�Ĵ��Ϊ " << a_money << "��Ԫ����B�Ĵ��Ϊ" << b_money << "��Ԫ��" << endl;
//
//	////��5�⣺
//	//const char* months[12] = { "1��","2��","3��","4��",
//	//					"5��","6��","7��","8��",
//	//					"9��","10��","11��","12��" };//�ַ�������������ǰ��Ҫ��const
//	//int salesVolume[12] = { 1,2,5,6 };
//	////for (int i = 0; i < 12; i++) {
//	////	cout << "������" << i+1 << "�µ�������";
//	////	cin >> salesVolume[i];
//	////}
//	//for (int i = 0; i < 12; i++)
//	//	cout << months[i] << "������" << salesVolume[i] << ";" << endl;
//
//	////��6�⣺
//	//const char* months[12] = { "1��","2��","3��","4��",
//	//					"5��","6��","7��","8��",
//	//					"9��","10��","11��","12��" };
//	//int salesVolume[3][12] = {{1,2,3,4},{0,0,12,23,5},{0,0,0,0,0,25,65,84,15}  };//
//	////for (int i = 0; i < 3; i++) {
//	////	cout << "�������" << i + 1 << "�����������" << endl;
//	////	for (int j = 0; j < 12; j++) {
//	////		cout<< "������" << j + 1 << "�µ�������";
//	////		cin >> salesVolume[i][j];
//	////	}
//	////}
//	//for (int i = 0; i < 3; i++) {
//	//	cout << "��" << i + 1 << "������������£�" << endl;
//	//	for (int j = 0; j < 12; j++) {
//	//		cout << months[j] << "������" << salesVolume[i][j] << ";" << endl;
//	//	}
//	//}
//
//	////��7�⣺
//	//cout << "How many cars do you sish to catalog? ";
//	//int num_of_car;
//	//cin >> num_of_car;
//	//cin.get();//����������
//	//Cars* car = new Cars[num_of_car];
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << "Car #" << i + 1 << "��" << endl;
//	//	cout << "Please enter the make:";
//	//	//cin >> car[i].manufacturer;//ֻ�ܶ�һ������
//	//	cin.getline(car[i].manufacturer, 20);//��������Զ�һ����
//	//	cout << "Please enter the year made:";
//	//	cin >> car[i].productiveYear;
//	//	cin.get();//����������
//	//}
//	//cout << "Here is  your collection:" << endl;
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << car[i].productiveYear << " " << car[i].manufacturer << endl;
//	//}
//	//delete[] car;
//
//	////��7'�⣺
//	//cout << "How many cars do you sish to catalog? ";
//	//int num_of_car;
//	//cin >> num_of_car;
//	//cin.get();//����������
//	//Cars* car = new Cars[num_of_car];
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << "Car #" << i + 1 << "��" << endl;
//	//	cout << "Please enter the make:";
//	//	//cin >> car[i].manufacturer;//ֻ�ܶ�һ������
//	//	getline(cin,car[i].manufacturer);//��������Զ�һ����
//	//	cout << "Please enter the year made:";
//	//	cin >> car[i].productiveYear;
//	//	cin.get();//����������
//	//}
//	//cout << "Here is  your collection:" << endl;
//	//for (int i = 0; i < num_of_car; i++) {
//	//	cout << car[i].productiveYear << " " << car[i].manufacturer << endl;
//	//}
//	//delete[] car;
//
//	////��8�⣺
//	//char words[20];//�ַ�����
//	//int num_of_words = 0;
//	//cout << "�����뵥�ʣ���done��Ϊ�����ĵ��ʣ���" << endl;
//	//while(strcmp("done",words)){
//	//	num_of_words++;
//	//	cin >> words;//��ȡһ������
//	//	cin.get();//����������
//	//}
//	//cout << "һ����" << num_of_words - 1 << "�����ʡ�" << endl;
//
//	////��9�⣺
//	//string str;
//	//int num_of_words = 0;
//	//cout << "�����뵥�ʣ���done��Ϊ�����ĵ��ʣ���" << endl;
//	//while(str != "done"){
//	//	num_of_words++;
//	//	cin >> str;//��ȡһ������
//	//	cin.get();//����������
//	//}
//	//cout << "һ����" << num_of_words - 1 << "�����ʡ�" << endl;
//
//	//��10�⣺
//	cout << "��������Ҫ��ʾ��������";
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