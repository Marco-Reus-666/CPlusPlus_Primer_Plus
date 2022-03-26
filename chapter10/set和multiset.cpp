#include<iostream>
#include<string>
#include<set>
using std::cout; using std::endl;  using std::string; using std::set; using std::multiset;
//3.8.8 自定义数据类型
class Person {
public:
	string name;
	int age;
	int height;

	Person( string name,  int age,  int height) {
		this->name = name;
		this->age = age;
		this->height = height;
	}
};
//3.8.8 利用仿函数自定义排序规则:按年龄从大到小降序排列
class MySort1 {

public:
	bool operator()(const Person& p1, const Person& p2) const{//记得加const
		if (p1.age > p2.age) {
			return true;
		}
		else {
			return false;
		}
	}
};
//3.8.8 打印set<Person,MySort1> s;
void printSet_i(set<Person, MySort1> s) {
	for (set<Person, MySort1>::iterator it = s.begin(); it != s.end(); it++) {
		//cout << "姓名：" << it->name << "\t年龄：" << it->age << "\t身高：" << it->height << endl;
		cout << "姓名：" << (*it).name << "\t年龄：" << (*it).age << "\t身高：" << (*it).height << endl;
	}
	cout << endl;
}
//3.8.8 打印multiset<Person,MySort1> s;
void printSet_i(multiset<Person, MySort1> s) {
	for (multiset<Person, MySort1>::iterator it = s.begin(); it != s.end(); it++) {
		//cout << "姓名：" << it->name << "\t年龄：" << it->age << "\t身高：" << it->height << endl;
		cout << "姓名：" << (*it).name << "\t年龄：" << (*it).age << "\t身高：" << (*it).height << endl;
	}
	cout << endl;
}

int main() {

//set容器存放自定义数据类型：
	//对于自定义数据类型，set必须指定排序规则才可以插入数据
	Person p1("Tom", 23, 175);
	Person p2("Jerry", 26, 163);//26 25
	Person p3("Reus", 28, 185);
	Person p4("Lucas", 26, 177);//26 29
	Person p5("Messi", 26, 173);

	set<Person,MySort1> s3;
	s3.insert(p1);
	s3.insert(p2);
	s3.insert(p3);
	s3.insert(p4);
	s3.insert(p5);
	
	printSet_i(s3);//
	
	//因为set容器不允许有重复的数据，所以假入插入的数据里有年龄相同的元素就会插入失败，
	//上面第287和289行如果把年龄改成26，最终就只会输出三个人的信息，所以下面又重新用multiset容器来做了一次测试
	Person p11("Tom", 23, 175);
	Person p12("Jerry", 26, 163);//26
	Person p13("Reus", 28, 185);
	Person p14("Lucas", 26, 177);//26
	Person p15("Messi", 26, 173);

	multiset<Person, MySort1> s4;
	s4.insert(p11);
	s4.insert(p12);
	s4.insert(p13);
	s4.insert(p14);
	s4.insert(p15);

	printSet_i(s4);//

	//system("pause");
	return 0;
}

