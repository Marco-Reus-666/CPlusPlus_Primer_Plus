//#include<iostream>
//#include<ctime>
//using namespace std;
//
//
//
//int main() {
//
//	cout << "����������Ҫ�ӳٵ�ʱ������λ����/s����";
//	float sec;
//	cin >> sec;
//	clock_t delay = sec * CLOCKS_PER_SEC;//5*1000
//	clock_t start = clock();
//	while (clock() - start < delay) {
//		//if ((clock() - start) > 0 && (clock() - start) % CLOCKS_PER_SEC == 0)//1000����������1000,2000,3000...
//		//	cout << "�� " << (clock() - start) / CLOCKS_PER_SEC  << " ��" << endl;
//	}
//	cout << "clock() = "<< clock()<<",����ʱ " << (clock() - start) / CLOCKS_PER_SEC << " �롣" << endl;
//
//	system("pause");
//	return 0;
//}