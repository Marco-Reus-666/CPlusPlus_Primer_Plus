#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<set>
#include<functional>
using std::cout; using std::endl; using std::string; using std::vector; using std::iterator; using std::list; using std::set;
using std::greater;
//自定义数据类型：
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



//自定义排序规则：(全局函数)
bool mySort0(int a, int b){//降序
    if(a > b)
        return 1;
    else    return 0;
}
bool mySort1(const Person& p1, const Person& p2){//降序
    if(p1.age > p2.age)//按年龄降序
        return 1;
    else if(p1.age == p2.age){//如果年龄相等，就按身高升序
        return p1.height < p2.height;
    }
    else    
        return 0;
}
//自定义排序规则：(仿函数)
class mySort2{
public:
    //重载函数调用运算符()
    bool operator()(int a, int b){
        return a > b;
    }
    bool operator()(const Person& p1, const Person& p2) {//const
        if(p1.age > p2.age)//按年龄降序
            return 1;
        else if(p1.age == p2.age){//如果年龄相等，就按身高升序
            return p1.height < p2.height;
        }
        else    
            return 0;
    }
};

//使用模板打印任何容器的所有数据:
//版本1：用auto自动推断迭代器的类型
template<class T>
void print1(const T & t){
    for(auto it = t.begin(); it != t.end(); it++)//auto it = begin(t); it != end(t); it++
        cout << *it << ", ";
    cout << endl;
}
//版本2：用class T::const_iterator 来表示具体类型的迭代器
template<class T>
void print2(const T & t){
    for(class T::const_iterator it = t.begin(); it != t.end(); it++)// 
        cout << *it << ", ";
    cout << endl;
}
void printVector(vector<int> & v);
void printVector(vector<Person> & v);
void printList(list<int> & L);
void printList(list<Person> & L);

void printSet(set<int> & s);
void printSet(set<int, mySort2> & s);
void printSet(set<Person, mySort2> & s);

int main(){
//自定义数据类型：
    Person p1("abc",23,176);
    Person p2("def",26,180);// 29
    Person p3("ijk",26,171);//32 
    Person p4("opq",26,165);
    Person p5("xyz",22,163);

//vector容器自定义排序：
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(9);
    v1.push_back(26);
    v1.push_back(6);
    v1.push_back(10);
    print1(v1);//3, 9, 26, 6, 10,
    //print2(v1);
    //printVector(v1);
    sort(v1.begin(), v1.end());//默认升序排序
    print1(v1);//3, 6, 9, 10, 26,
    sort(v1.begin(), v1.end(), mySort2());//降序排列mySort0
    //sort(v1.begin(), v1.end(), greater<>());//降序排列,使用内建函数对象（仿函数）,就不用自己写排序规则了
    print1(v1);//26, 10, 9, 6, 3,

    vector<Person> v2;
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    v2.push_back(p4);
    v2.push_back(p5);
    //print1(v2);//3, 9, 26, 6, 10,
    //print2(v1);
    printVector(v2); cout << "-----------" << endl;
    sort(v2.begin(), v2.end(), mySort2());//默认排序不能用，必须指明排序规则mySort1
    printVector(v2);


//list容器自定义排序：
    list<int> L;
    L.push_back(2);
    L.push_back(5);
    L.push_back(8);
    L.push_front(3);
    L.push_front(6);
    L.push_front(9);
    print1(L);//9, 6, 3, 2, 5, 8
    //print2(L);
    //printList(L);
    L.sort();//默认升序排序
    print1(L);//2, 3, 5, 6, 8, 9,
    L.sort(mySort2());//降序排列mySort0
    //L.sort(greater<>()); //降序排列,使用内建函数对象（仿函数）,就不用自己写排序规则了
    print1(L);//9, 8, 6, 5, 3, 2, 
    list<Person> L2;
    L2.push_back(p1);
    L2.push_back(p2);
    L2.push_back(p3);
    L2.push_back(p4);
    L2.push_back(p5);
    printList(L2); cout << "-----------" << endl;
    L2.sort(mySort2());//mySort1
    printList(L2);

//set容器自定义排序：(自动排序，如果要自定义排序，就要利用仿函数，即重载函数调用运算符())
    set<int> s1;
    s1.insert(3);
    s1.insert(8);
    s1.insert(4);
    s1.insert(6);
    print1(s1);//3, 4, 6, 8, 
    //print2(s1);//
    //printSet(s1);//

    set<int,mySort2> s2;
    s2.insert(3);
    s2.insert(8);
    s2.insert(4);
    s2.insert(6);
    print1(s2);//8, 6, 4, 3, 
    //print2(s2);//
    //printSet(s2);//

    set<Person,mySort2> s3;//如果容器中存储的是自定义数据类型，在创建容器的时候就要指明自定义的排序规则
    s3.insert(p1);
    s3.insert(p3);
    s3.insert(p4);
    s3.insert(p2);
    s3.insert(p5);
    printSet(s3);//

    return 0;
}

void printVector(vector<int> & v){
    for(vector<int>::iterator it = begin(v); it != end(v); it++)//vector<int>::iterator it = v.begin(); it != v.end(); it++
        cout << *it << ", ";
    cout << endl;
}
void printList(list<int> & L){
    for(list<int>::iterator it = L.begin(); it != L.end(); it++)
        cout << *it << ", ";
    cout << endl;
}
void printSet(set<int> & s){
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << ", ";
    cout << endl;
}
void printSet(set<int, mySort2> & s){
    for(set<int, mySort2>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << ", ";
    cout << endl;
}
void printSet(set<Person,mySort2> & s){
    for(set<Person,mySort2>::iterator it = s.begin(); it != s.end(); it++){
        cout << "姓名：" << it->name << "；年龄：" << it->age << "；身高：" << it->height << endl;
    }
}
void printVector(vector<Person> & v){
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++){
        cout << "姓名：" << it->name << "；年龄：" << it->age << "；身高：" << it->height << endl;
    }
}
void printList(list<Person> & L){
    for(list<Person>::iterator it = L.begin(); it != L.end(); it++){
        cout << "姓名：" << it->name << "；年龄：" << it->age << "；身高：" << it->height << endl;
    }
}

