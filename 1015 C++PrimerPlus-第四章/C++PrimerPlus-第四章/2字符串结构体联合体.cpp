#include<iostream>
//#include<string>
using namespace std;

//�ṹ��������
struct Students {
	//string name = " ";//����
	int age;//���� = 0
};

//������������
union MyUnion
{
	char gender;//�Ա�
	int num;//����
};
//�ṹ��������
struct MyStruct
{
	char gender;//�Ա�
	int num;//����
};


/*�ֽڶ��룺
struct S1
{
	char a;
	int b;
};
struct S2
{
	int a;
	char b;
};
struct S3
{
};*/
/*
int main() {
�ֽڶ��룺
	cout << "�ṹ��S1��ռ���ڴ�Ϊ��" << sizeof(S1) << endl; //ֵΪ8���ֽڶ��룬��char֮������3���ֽڡ� 
	cout << "�ṹ��S2��ռ���ڴ�Ϊ��" << sizeof(S2) << endl; //ֵΪ8���ֽڶ��룬��char֮������3���ֽڡ� 
	cout << "�ṹ��S3��ռ���ڴ�Ϊ��" << sizeof(S3) << endl; //ֵΪ1���սṹ��Ҳռ�ڴ�
*/
/*
//1.cin.getline()
	char name2[20], name3[20], name4[20];

	cout << "��������������" << endl;
	cin.getline(name2, 20, '_');//��'_'��Ϊ���������
	cout << "�������name2 = " << name2 << endl;

	cout << "��������������" << endl;
	cin.getline(name3, 20);//��'\n'��Ϊ���������
	cout << "�������name3 = " << name3 << endl;

	cout << "��������������" << endl;
	cin.getline(name4, 20);//��'\n'��Ϊ���������
	cout << "�������name4 = " << name4 << endl;


//2.cin.get()
	char name2[20], name3[20],name4[20];

	cout << "��������������" << endl;
	cin.get(name2, 20,'_');//��'_'��Ϊ���������
	cout << "�������name2 = " << name2 << endl;

	cout << "��������������" << endl;
	cin.get(name3, 20);//��'\n'��Ϊ���������
	cout << "�������name3 = " << name3 << endl;

	cout << "��������������" << endl;
	cin.get(name4, 20);//��'\n'��Ϊ���������
	cout << "�������name4 = " << name4 << endl;
*/
/*
//2.cin.get()�Ľ�
	char name9[20], name10[20], name11[20];
	
	cout << "��������������: \n";
	cin.get(name9, 20).get();//Ĭ���Ի��з���Ϊ��������������get()�ѻ��з����Ե�
	cout << "�������name4 = " << name9 << endl;
	
	cout << "��������������: \n";
	cin.get(name10, 20).get();//Ĭ���Ի��з���Ϊ��������������get()�ѻ��з����Ե�
	cout << "�������name6 = " << name10 << endl;
	
	cout << "��������������: \n";
	cin.get(name11, 20).get();//Ĭ���Ի��з���Ϊ��������������get()�ѻ��з����Ե�
	cout << "�������name8 = " << name11 << endl;
*/
/*4.2.5 ��������ַ���������
	int age;
	char address[20];

	cout << "�������������䣺" << endl;
	cin >> age;	
	cout << "����������������" << endl;
	cin.get();//����.get()�Ե�������
	cin.get(address, 20);
	cout << "��ַ��" << address << "\t���䣺" << age << "." << endl;
*/
/*C���Ե��ַ�����C++��string�ࣺ
	char name1[20];
	string name2;
	cout << "����������1��" << endl;
	cin >> name1;
	cout << "����������2��" << endl;
	cin >> name2;
	cout << "name1 = " << name1 << "\nname2 = " << name2 << endl;
	cout << "name1[2] = " << name1[2] << "\nname2[2] = " << name2[2] << endl;
*/
/*string�ĸ�ֵ��ƴ�ӣ�
	string str1 = "Hello,123.";
	string str2, str3;
	//��ֵ��
	str2 = str1;
	cout << "str1 = " << str1 << "\nstr2 = " << str2 << endl;
	str2 = "���ѽ�������֡�";
	cout << "str2 = " << str2 << endl;
	//ƴ�ӣ�
	str3 = str1 + str2;
	cout << "str3 = " << str3 << endl;
	//���ӣ�
	str1 += "---456789";
	cout << "str1 = " << str1 << endl;
	string str4 = "�������";
	str1 += str4;
	cout << "str1 = " << str1 << endl;
*/
/*��ȡ���У�
	char name1[20];
	string name2;
	//C���ԣ�
	cout << "������name1��" << endl;
	cin.getline(name1, 20);//����cin.get(name1, 20).get();
	//C++��
	cout << "������name2��" << endl;
	getline(cin, name2);
*/
/*�ṹ�帳ֵ��
	Students stu1 = { "Reus",23 };
	Students stu2;
	stu2 = stu1;
	cout << "stu1.name = " << stu1.name << "; stu1.age = " << stu1.age << endl;
	cout << "stu2.name = " << stu2.name << "; stu2.age = " << stu2.age << endl;
*/
/*�ṹ�����飺
	Students stu[3] = { {"Messi",23},{"Reus",25} };
	cout << "������" << stu[0].name << "\t���䣺" << stu[0].age <<
			"\n������" << stu[1].name << "\t���䣺" << stu[1].age <<
			"\n������" << stu[2].name << "\t���䣺" << stu[2].age << endl;
*/
/*������/������union �� �ṹ��struct��

	//�ṹ��ĳ�ʼ��������һ���Ը����г�Ա��ֵ����
	MyStruct s1 = { 'M',12 };
	cout << "�Ա�" << s1.gender << "  ������" << s1.num << endl;
	
	//������ĳ�ʼ����һ��ֻ�ܸ�һ����Ա��ֵ����
	MyUnion u1;
	//��һ�θ�ֵ:
	u1.gender = 'A';
	cout << "�Ա�" << u1.gender << endl;//F
	cout << "������" << u1.num << endl;//-858993594�����룩
	//�ڶ��θ�ֵ:
	u1.num = 20;
	cout << "������" << u1.num << endl;//20
	cout << "�Ա�" << u1.gender << endl;//����

	cout << "�ṹ����ռ���ڴ�Ĵ�С��" << sizeof(s1) << endl;//8���ֽڶ��룬��char֮������3���ֽڡ� 
	cout << "��������ռ���ڴ�Ĵ�С��" << sizeof(u1) << endl;//4��������ĳ���Ϊ����Ա�ĳ��ȡ�


	system("pause");
	return 0;
}*/