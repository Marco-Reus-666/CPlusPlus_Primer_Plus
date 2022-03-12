#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string;

//程序清单8.9：
void func1(string name,int m = 1);//函数原型：设置了默认值

int main(){

//程序清单8.9：
    func1("reus");
    func1("messi",3);



    return 0;
}
void func1(string name,int m){//函数定义中不需要再次指定默认值
    cout << "name = " << name << "; m = " << m << endl;
}