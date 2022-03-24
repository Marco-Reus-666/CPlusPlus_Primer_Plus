#include<string>
using std::string;

//具体化的模板：
class Person {
public:
	string name;
	int age;

	void setInfo(string name, int age) {
		this->name = name;
		this->age = age;
	}
    //初始化类对象可以写个类的有参构造函数 + this指针
    
};

template<class T>
bool isEqual(T &a,T &b) {
	if (a == b)
		return 1;
	else
		return 0;
}
//假如把Person类作为参数传入模板，模板的局限性就体现出来了
//所以要为Person类专门提供一个具体化的模板
template<> 
bool isEqual(Person& p1, Person& p2) {
	if ((p1.age == p2.age) && (p1.name == p2.name))
		return 1;
	else
		return 0;
}

#include<iostream>
using std::cout; using std::endl;
int main() {

//具体化的模板---测试：
	cout << "开始具体化模板的测试：" << endl;
	int m, n;
	m = 10;
	n = 9;
	cout << isEqual(m, n) << endl;//
	Person p1;
	p1.setInfo("Tom",10);
	Person p2;
	p2.setInfo("Tom", 10);
	cout << isEqual(p1, p2) << endl;//

	system("pause");
	return 0;
}
