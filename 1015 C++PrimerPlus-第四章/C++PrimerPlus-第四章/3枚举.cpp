#include<iostream>
#include<string>
using namespace std;

/*����ö�٣�
enum MyEnum0 //ö����ΪMyEnum0
{
	red, orange, yellow, green, blue, purple  //Ĭ�ϵ�һ��ö����Ϊ0������û����ʼ����ö������ǰ��Ĵ�1:
											  //red = 0, orange = 1, yellow = 2, green = 3, blue = 4, purple = 5 
};
enum MyEnum1 //ö����ΪMyEnum1
{
	one = 1, two = 2, four = 4, eight = 8  //���û�зֺţ�Ҳ������pi=3.14��������ֻ���������������Ǹ�����
};
enum MyEnum2 //ö����ΪMyEnum2
{
	first, second = 100, third  //Ĭ�ϵ�һ��ö����Ϊ0������û����ʼ����ö������ǰ��Ĵ�1��first = 0, second = 100, third = 101
};
enum        //����ʡ��ö�����͵�����
{
	zero, null = 0, one, four = 4  //���Դ������ֵ��ͬ��ö������zero = null = one = 0, four = 4
};
*/
/*
int main() {

//��ö�����������������͵ı�����
	MyEnum0 band;//band��ö�ٱ�����

//����ö�٣���ֻ�����˸�ֵ����������Ԣ�ö�ٲ��ܽ����������㣡����
	
	//�ٸ�ö�ٱ���band��ֵʱ��ֻ�ܸ�MyEnum0ȡֵ��Χ(0~7)���ڵ�ֵ
	band = blue;//blue��ö��MyEnum0����
	//band = 6;//�������ܽ�int���͵�ֵ���䵽"MyEnum0"���͵�ʵ��
	band = (MyEnum0)6;//������ǿ������ת������6��int����ת����"MyEnum0"����
	//band = (MyEnum0)20;//20�Ѿ������˷�Χ����Ȼû���������Ϲ棬�����ĺ���ǲ�ȷ����
	
	//��ö�ٲ��ܽ����������㣺
	//++band;//��������ᱨ��ö�������ϵĴ˲�����Ҫ�������û���������������
	//band = orange + red;//�������ܽ�int���͵�ֵ���䵽"MyEnum0"���͵�ʵ��
	band = (MyEnum0)(orange + red);//��ö����orange��red������int���ͣ������������㣬Ȼ����ת����"MyEnum0"���͸���band
	int num = blue;
	num = orange + red;//��ö����orange��red������int���ͣ�������������





	system("pause");
	return 0;
}*/