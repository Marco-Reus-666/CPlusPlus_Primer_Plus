#include<iostream>
using namespace std;

int main() {

//第1题：
	cout << "请输入您的身高（单位是cm）: _";
	const int cm_m = 100;
	int height;
	cin >> height;
	cout << "经过转换，您的身高为:" << height / cm_m << " m " << height % cm_m << " cm." << endl;

//第2题：
	const int chi_cun = 12;
	const double cun_mi = 0.0254;
	const double kg_pound = 2.2;
	double yingchi, yingcun, weight;
	cout << "请输入您的身高：\n英尺：";
	cin >> yingchi;
	cout << "英寸：";
	cin >> yingcun;
	cout << "请输入您的体重(单位是磅)：";
	cin >> weight;

	double height_yingcun = yingchi * chi_cun + yingcun;
	double height_mi = height_yingcun * cun_mi;
	double weight_kg = weight / kg_pound;
	cout << "您的身高为" << height_yingcun << "英寸 或 " << height_mi << "米；体重为" << weight_kg << "千克。" << endl;
	double bmi = weight_kg / (height_mi * height_mi);
	cout << "经过计算，您的体重指数BMI为" << bmi << endl;

//第3题：
	int degrees, minutes, seconds;
	int s_m = 60;
	int m_d = 60;
	cout << "Enter a latitude in degrees，minutes，and seconds:" << endl;
	cout << "First, enter the degrees:";
	cin >> degrees;
	cout << "Next, enter the minutes of arc:";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc:";
	cin >> seconds;
	double latitude_degrees;
	latitude_degrees = (double)seconds / s_m / m_d + (double)minutes / m_d + degrees;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude_degrees << " degrees" << endl;

//第4、5、6、7题和前面的题目一样，都是单位转换的题

	system("pause");
	return 0;
}