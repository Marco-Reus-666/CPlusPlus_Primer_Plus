class Person4 {

public:
	int age;

public:
	Person4(int age) {
		this->age = age;
	}
	Person4& personAddAge(Person4 p) {
		this->age += p.age;
		//返回对象本身
		return *this;//返回的是一个地址
	}
};

#include<iostream>
using std::cout; using std::endl;
int main(){
//this指针---在类的非静态成员函数中返回对象本身，可使用return *this
	Person4 p1(10);
	cout << p1.age << endl;//10
	cout << p1.personAddAge(p1).age << endl;//10+10=20
	cout << p1.age << endl;//20
	cout << p1.personAddAge(p1).personAddAge(p1).age << endl;//20+20+20=60
	cout << p1.age << endl;//60
	cout << p1.personAddAge(p1).age << endl;//60+60=120

	p1.age = 10;
	Person4 p2(10);//10
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);//10+10*3=40
	cout << "p2.age = " << p2.age << endl;//40

	system("pause");
	return 0;
}