#include<iostream>
using namespace std;

int main() {

//��1�⣺
	cout << "������������ߣ���λ��cm��: _";
	const int cm_m = 100;
	int height;
	cin >> height;
	cout << "����ת�����������Ϊ:" << height / cm_m << " m " << height % cm_m << " cm." << endl;

//��2�⣺
	const int chi_cun = 12;
	const double cun_mi = 0.0254;
	const double kg_pound = 2.2;
	double yingchi, yingcun, weight;
	cout << "������������ߣ�\nӢ�ߣ�";
	cin >> yingchi;
	cout << "Ӣ�磺";
	cin >> yingcun;
	cout << "��������������(��λ�ǰ�)��";
	cin >> weight;

	double height_yingcun = yingchi * chi_cun + yingcun;
	double height_mi = height_yingcun * cun_mi;
	double weight_kg = weight / kg_pound;
	cout << "�������Ϊ" << height_yingcun << "Ӣ�� �� " << height_mi << "�ף�����Ϊ" << weight_kg << "ǧ�ˡ�" << endl;
	double bmi = weight_kg / (height_mi * height_mi);
	cout << "�������㣬��������ָ��BMIΪ" << bmi << endl;

//��3�⣺
	int degrees, minutes, seconds;
	int s_m = 60;
	int m_d = 60;
	cout << "Enter a latitude in degrees��minutes��and seconds:" << endl;
	cout << "First, enter the degrees:";
	cin >> degrees;
	cout << "Next, enter the minutes of arc:";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc:";
	cin >> seconds;
	double latitude_degrees;
	latitude_degrees = (double)seconds / s_m / m_d + (double)minutes / m_d + degrees;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude_degrees << " degrees" << endl;

//��4��5��6��7���ǰ�����Ŀһ�������ǵ�λת������

	system("pause");
	return 0;
}