#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout; using std::endl; using std::vector; using std::for_each; using std::string;

class Person{
    string name;
    int age;
public:
    Person(){}
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    void showPerson(){
        cout << "姓名：" << this->name << "； 年龄：" << this->age << endl;
    }
    ~Person(){}
};
void myPrint(int val){
    cout << val << ", ";
}
int main(){
//容器中存放内置数据类型： 
    vector<int> v1;
    v1.push_back(10);//尾插法
    v1.push_back(20);
    v1.push_back(30);

    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
        cout << *it << ", ";
    cout << endl;

    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;

//容器中存放自定义数据类型：
    Person p1("abc", 20);
    Person p2("xyz", 26);
    Person p3("lmn", 23);
    vector<Person> v2;
    v2.push_back(p1);
    v2.push_back(p3);
    v2.push_back(p2);

    for(vector<Person>::iterator it = v2.begin(); it != v2.end(); it++){
        (*it).showPerson();
    }

//用vector创建一维、二维数组并初始化：
    //一维数组：
    //vector<int> v3(10);//指定一维数组v3长度为10，未设定初始值，默认的初始值是0
    vector<int> v3(10,6);//指定一维数组v3长度为10，并将所有元素初始化为6
    cout << "一维数组的元素值：";
    for_each(v3.begin(), v3.end(), myPrint);//6
    cout << endl;

    //二维数组：
    vector< vector<int> > v4(10);//指定二维数组的行数为10，列数未指定，默认是0列
    cout << "二维数组的列数（默认值）为：";
    for (int i = 0; i < v4.size(); i++){
	    cout << v4[i].size() << ", ";//0列
    }
    cout << endl;
    //手动指定二维数组的列数：
    cout << "二维数组的列数（指定值-resize）为：";
    for (int i = 0; i < v4.size(); i++){
	    v4[i].resize(20);//定义二维数组的列数为20，这个resize函数是重新设置列数，原来默认是0列，所以resize之后的列数为20列
        cout << v4[i].size() << ", ";//20列
    }
    cout << endl;
    //测试resize函数的用法：
    cout << "二维数组的列数（指定值-resize）为：";
    for (int i = 0; i < v4.size(); i++){
	    v4[i].resize(10);//resize函数是重新设置列数，原来是20列，resize之后的列数为10列
        cout << v4[i].size() << ", ";//10列
    }
    cout << endl;

    int row = 3;//行数
    int col = 5;//列数
    //vector< vector<int> > v5(row);//只指定行数
    vector< vector<int> > v5(row, vector<int>(col));//指定行数和列数
    cout << "二维数组的列数（指定值-初始化）为：";
    for (int i = 0; i < v5.size(); i++){
	    cout << v5[i].size() << ", ";//5列
    }
    cout << endl;
    cout << "二维数组的元素值（默认值）为：" << endl;
    for(int i = 0; i < v5.size(); i++){
        for(int j = 0; j < v5[0].size(); j++){
            cout << v5[i][j] << ", ";//0
        }
        cout << endl;
    }
    cout << endl;
    vector< vector<int> > v6(row, vector<int>(col,3));//指定行数和列数，并初始化元素值
    cout << "二维数组的元素值（指定值-初始化）为：" << endl;
    for(int i = 0; i < v6.size(); i++){
        for(int j = 0; j < v6[0].size(); j++){
            cout << v6[i][j] << ", ";//3
        }
        cout << endl;
    }
    cout << endl;

    //用迭代器输出二维数组的元素：
    cout << "用迭代器输出二维数组的列数（一层for循环） 和 元素值（两层for循环）：" << endl;
    cout << "二维数组的元素值（指定值-初始化）为：" << endl;
    for(vector< vector<int> >::iterator it = v6.begin(); it != v6.end(); it++){
        cout << (*it).size() << ", ";//cout << v5[i].size() << ", ";//5列
    }
    cout << endl;
    cout << "二维数组的元素值（指定值-初始化）为：" << endl;
    for(vector< vector<int> >::iterator it_i = v6.begin(); it_i != v6.end(); it_i++){
        for(vector<int>::iterator it_j = v6[0].begin(); it_j != v6[0].end(); it_j++){//(*it_i).begin(); it_j != (*it_i).end(); it_j++也可以
            cout << *it_j << ", ";//v6[it_i][it_j]不可以，要重载[]运算符
        }
        cout << endl;
    }
    cout << endl;

//测试容器容量capacity和元素个数size，以及重置大小resize：
    vector<int> v7(10,3);//初始化
    for(vector<int>::iterator it = v7.begin(); it != v7.end(); it++){
        cout << (*it) << ", ";
    }
    cout << endl;
    cout << "容器的容器capacity = " << v7.capacity() << "；元素个数size = " << v7.size() << endl;//10 10 
    v7.resize(16);//新位置默认是补0
    for(vector<int>::iterator it = v7.begin(); it != v7.end(); it++){
        cout << (*it) << ", ";
    }
    cout << endl;
    cout << "容器的容器capacity = " << v7.capacity() << "；元素个数size = " << v7.size() << endl;//20 16
    v7.resize(5);
    for(vector<int>::iterator it = v7.begin(); it != v7.end(); it++){
        cout << (*it) << ", ";
    }
    cout << endl;
    cout << "容器的容器capacity = " << v7.capacity() << "；元素个数size = " << v7.size() << endl;//20 5
    v7.resize(8,6);//也可以指定新位置的内容
    for(vector<int>::iterator it = v7.begin(); it != v7.end(); it++){
        cout << (*it) << ", ";
    }
    cout << endl;
    cout << "容器的容器capacity = " << v7.capacity() << "；元素个数size = " << v7.size() << endl;//20 8

    return 0;
}