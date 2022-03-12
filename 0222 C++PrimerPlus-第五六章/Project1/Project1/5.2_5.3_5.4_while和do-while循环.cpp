//#include<iostream>
//#include<ctime>
//using namespace std;
//
//
//
//int main() {
//
//	cout << "请输入您想要延迟的时长（单位：秒/s）：";
//	float sec;
//	cin >> sec;
//	clock_t delay = sec * CLOCKS_PER_SEC;//5*1000
//	clock_t start = clock();
//	while (clock() - start < delay) {
//		//if ((clock() - start) > 0 && (clock() - start) % CLOCKS_PER_SEC == 0)//1000的整数倍：1000,2000,3000...
//		//	cout << "第 " << (clock() - start) / CLOCKS_PER_SEC  << " 秒" << endl;
//	}
//	cout << "clock() = "<< clock()<<",共计时 " << (clock() - start) / CLOCKS_PER_SEC << " 秒。" << endl;
//
//	system("pause");
//	return 0;
//}