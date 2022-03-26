#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
using std::cout; using std::endl; using std::string; using std::vector; using std::iterator; 
using std::for_each; using std::find; using std::find_if; using std::max; using std::min;

// //打印函数：全局函数
// void myPrint0(int val){
//     cout << val << ", ";
// }
// //打印函数：函数对象（仿函数）
// class myPrint1{
// public:
//     void operator()(int val){
//         cout << val << ", ";
//     }
// };
// //打印模板1：
// template<class T>
// void myPrint2(T & t){
//     for(auto it = t.begin(); it != t.end(); it++){//auto it
//         cout << (*it) << ", ";
//     }
//     cout << endl;
// }
// //打印模板2：
// template<class T>
// void myPrint3(T & t){
//     for(class T::const_iterator it = t.begin(); it != t.end(); it++){//class T::const_iterator
//         cout << (*it) << ", ";
//     }
//     cout << endl;
// }

// int main(){
// //遍历算法测试：
//     vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9 };
//     //myPrint2(v1);
//     //myPrint3(v1);
//     //for_each(v1.begin(), v1.end(), myPrint0);//普通函数 
//     for_each(v1.begin(), v1.end(), myPrint1());//函数对象（仿函数） 
//     cout << endl;

// //查找算法测试：



//     return 0;
// }

//5.2.4 & 5.2.5 & 5.2.6
/**/
//自定义数据类型：
// class Person {
// public:
// 	string name;
// 	int age;
// 	int height;

// 	Person(string name, int age, int height) {
// 		this->name = name;
// 		this->age = age;
// 		this->height = height;
// 	}
// 	//重载等于==运算符
// 	bool operator==(const Person& p) {
// 		if (this->name == p.name && this->age == p.age && this->height == p.height)
// 			return 1;
// 		else
// 			return 0;
// 	}

// };

// class FindGreater3 {
// public:

// 	bool operator()( int val) {
// 		if (val >= 3)//条件：找≥3的元素
// 			return 1;
// 		else
// 			return 0;
// 	}
// };
// bool FindGreater3_1(int val){
//     if (val >= 3)//条件：找≥3的元素
// 			return 1;
// 		else
// 			return 0;
// }
// class FindPerson {
// public:
// 	bool operator()(const Person& p) {
// 		if (p.age > 26)//条件：找＞26岁的人
// 			return 1;
// 		else
// 			return 0;
// 	}
// };
// bool FindPerson_1(const Person& p) {
//     if (p.age > 26)//条件：找＞26岁的人
//         return 1;
//     else
//         return 0;
// }
// int main(){

// 	vector<int> v3;
// 	for (int i = 0; i < 5; i++) {
// 		v3.push_back(i + 1);
// 	}

// 	Person p1("Tom", 23, 175);
// 	Person p2("Jerry", 25, 163);//26
// 	Person p3("Reus", 28, 185);
// 	Person p4("Lucas", 29, 177);//26
// 	Person p5("Messi", 26, 173);

// 	vector<Person> v4;
// 	v4.push_back(p1);
// 	v4.push_back(p2);
// 	v4.push_back(p3);
// 	v4.push_back(p4);
// 	v4.push_back(p5);

// //5.2.4 binary_search
// 	cout << "binary_search(找int 3)：";
// 	if (binary_search(v3.begin(), v3.end(), 3))//返回值是bool类型
// 		cout << "找到了" << endl;
// 	else
// 		cout << "没找到！！！" << endl;

// //5.2.5 count
// 	//内置数据类型：
// 	v3.push_back(3);
// 	v3.push_back(2);
// 	v3.push_back(3);
// 	cout << "元素2的个数：" << count(v3.begin(), v3.end(), 2) << endl;//2
// 	cout << "元素3的个数：" << count(v3.begin(), v3.end(), 3) << endl;//3

// 	//自定义数据类型：
// 	Person p6("Reus", 28, 185);
// 	Person p7("Reus", 28, 185);
// 	Person p8("Reus", 27, 185);
// 	v4.push_back(p6);
// 	v4.push_back(p7);
// 	//v4.push_back(p8);
// 	cout << "元素p6的个数：" << count(v4.begin(), v4.end(), p6) << endl;//3
// 	cout << "元素p5的个数：" << count(v4.begin(), v4.end(), p5) << endl;//1
// 	cout << "元素p8的个数：" << count(v4.begin(), v4.end(), p8) << endl;//0

// //5.2.6 count_if
// 	//内置数据类型：
// 	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
// 		cout << *it << " ";
// 	}
// 	cout << endl;//1 2 3 4 5 3 2 3
		
// 	cout << ">=3的元素个数：" << count_if(v3.begin(), v3.end(), FindGreater3_1) << endl;//5 FindGreater3()
		
// 	//自定义数据类型：
// 	for (vector<Person>::iterator it = v4.begin(); it != v4.end(); it ++ ) {
// 		cout << "姓名：" << it->name << "\t年龄：" << it->age << "\t身高：" << it->height << endl;
// 	}//结果如下：
// 	//姓名：Tom       年龄：23        身高：175
// 	//姓名：Jerry     年龄：25        身高：163
// 	//姓名：Reus      年龄：28        身高：185
// 	//姓名：Lucas     年龄：29        身高：177
// 	//姓名：Messi     年龄：26        身高：173
// 	//姓名：Reus      年龄：28        身高：185
// 	//姓名：Reus      年龄：28        身高：185
// 	cout << "年龄大于26岁的人数：" << count_if(v4.begin(), v4.end(), FindPerson_1) << endl;//4 FindPerson()

// 	//system("pause");
// 	return 0;
// }

//5.4 常用拷贝和替换算法：
//打印vector<int> v
void printVectors(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}
//5.4.3 replace_if
class FindVec {
public:
	bool operator()(int val) {//谓词
		if (val > 50)//条件：大于50的元素
			return 1;
		else
			return 0;
	}
};
bool FindVec1(int val){
    if (val > 50)//条件：大于50的元素
        return 1;
    else
        return 0;
}
int main() {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(60);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(20);
	printVectors(v1);//10 60 30 40 50 20

//5.4.1 copy 
	vector<int> v2;
	v2.resize(v1.size());//重新开辟空间
	copy(v1.begin(), v1.end(), v2.begin());
	printVectors(v2);//10 60 30 40 50 20

//5.4.2 replace
	replace(v2.begin(), v2.end(), 30, 26);
	printVectors(v2);//10 60 26 40 50 20
	v2.push_back(40);
	replace(v2.begin(), v2.end(), 40, 26);
	printVectors(v2);//10 60 26 26 50 20 26
	replace(v2.begin(), v2.end(), 25, 26);//容器中没有25，就不替换了
	printVectors(v2);//10 60 26 26 50 20 26

//5.4.3 replace_if
	vector<int> v3;
	v3.resize(v2.size());
	copy(v2.begin(), v2.end(), v3.begin());
	printVectors(v3);//10 60 26 26 50 20 26
	replace_if(v3.begin(), v3.end(), FindVec1, 100);//FindVec(),
	printVectors(v3);//10 100 26 26 50 20 26

//5.4.4 swap
	vector<int> v4;
	for (int i = 0; i < 5; i++) {
		v4.push_back(i + 1);
	}
	swap(v3, v4);
	printVectors(v3);//1 2 3 4 5
	printVectors(v4);//10 100 26 26 50 20 26


//5.5.1
    vector<int> v11;
	v11.push_back(10);
	v11.push_back(60);
	v11.push_back(30);
	v11.push_back(40);
	v11.push_back(50);
	v11.push_back(20);
	printVectors(v11);//10 60 30 40 50 20

//5.5.1 accumulate
	cout << "总和（初始值为1）：" << accumulate(v11.begin(), v11.end(), 1) << endl;//211
	cout << "总和（初始值为10）：" << accumulate(v11.begin(), v11.end(), 10) << endl;//220

    cout << "max(26,27) = " << max(26,27) << endl;
    
	//system("pause");
	return 0;
}
