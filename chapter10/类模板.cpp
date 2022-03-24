#include<iostream>
#include<string>
using std::string; using std::cout; using std::endl;

//类模板：

//1.类的成员属性模板化
template<class ageType, class nameTye>//类的成员属性模板化
class Person{
    ageType age;
    nameTye name;
public:
    //无参构造函数：
    Person(){
        cout << "无参构造函数" << endl;
        age = 0.1;
        name = "abcde";
    }
    //有参构造函数：
    Person(ageType age, nameTye name){
        cout << "有参构造函数" << endl;
        this->age = age;
        this->name = name;
    }
    //析构函数：
    ~Person(){
        cout << "析构函数" << endl;
    }
    //成员函数：
    void showInfo(){
        cout << "姓名：" << this->name << "；年龄：" << this->age  << endl;
    }
};
int main() {
	Person<int, string> p1;
    p1.showInfo();
    Person<double, string> p2;
    p2.showInfo();
    Person<int, string> p3(20,"marco reus");
    p3.showInfo();
	//system("pause");
	return 0;
}


//2.让整个类模板化：
class Person1{
public:
    void showPerson1(){
        cout << "函数func1()的调用 " << endl;
    }
};
class Person2{
public:
    void showPerson2(){
        cout << "函数func2()的调用 " << endl;
    }
};

template<class T>
class MyClass{
    
    T obj;

public:
    void fun1(){
        obj.showPerson1();
    }    
    void fun2(){
        obj.showPerson2();
    } 
    
};

int main(){

    MyClass<Person1> c1;
    c1.fun1();
    //c1.fun2();//‘class Person1’ has no member named ‘showPerson2’; did you mean ‘showPerson1’
	
    MyClass<Person2> c2;
    //c2.fun1();//‘class Person2’ has no member named ‘showPerson1’; did you mean ‘showPerson2’
    c2.fun2();

    return 0;
}

