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
////	while (ch != '#') {//#��Ϊ������
////		cout << ch;
////		count++;
////		//cin >> ch;//5.5.1
////		cin.get(ch);//5.5.2
////	}
////	cout << "�������� " << count << " ���ַ���" << endl;
//
//////5.5.4 5.5.5
////	//����1��
////	char ch;
////	int count = 0;
////	cin.get(ch);
////	while (cin.fail() == false) {//�ж��Ƿ񵽴��ļ�β 
////   //while�ж������� cin.eof() == false Ҳ����
////		cout << ch;
////		count++;
////		cin.get(ch);
////	}
////	cout << "�������� " << count << " ���ַ���" << endl;
//
//	////����2��
//	//char ch;
//	//int count = 0;
//	//while (cin.get(ch)) {//�ж��Ƿ񵽴��ļ�β 
//	//	
//	//	cout << ch;
//	//	count++;
//	//}
//	//cout << "�������� " << count << " ���ַ���" << endl;
//
//	////����3��
//	//int ch;
//	//int count = 0;
//	//while ((ch = cin.get()) != EOF) {
//	//	cout.put(char(ch));
//	//	count++;
//	//}
//	//cout << "�������� " << count << " ���ַ���" << endl;
//
////5.6
//	//�ַ���ָ�����飺
//	const char* cities[5] = { "beijing","tianjin","xi'an","nanjing","xiamen" };
//	
//	//�ַ����飺
//	char cities2[5][20]{ "beijing","tianjin","xi'an","nanjing","xiamen" };
//
//	//string�������飺
//	const string cities3[5]={ "beijing","tianjin","xi'an","nanjing","xiamen" };
//
//
//	system("pause");
//	return 0;
//}