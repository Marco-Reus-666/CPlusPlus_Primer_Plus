#include<iostream>
#include<string>

using std::cout; using std::endl;  using std::string;

//类模板：
template<class ageType, class nameType>
class Person{

    ageType age;
    nameType name;
public:
    Person(){

    }
    Person(ageType age, nameType name){
        this->age = age;
        this->name = name;
    }
    void showPerson(){
        cout << "年龄：" << this->age << "； 姓名：" << this->name << endl;
    }
};

//直接指定传入的类型：
void printMyClass1(Person<int, string> &p){
    p.showPerson();
}
//参数模板化：
template<class ageType, class nameType>
void printMyClass2(Person<ageType,nameType> & p){
    p.showPerson();
    //cout << "T1的类型为： " << typeid(ageType).name() << endl;
	//cout << "T2的类型为： " << typeid(nameType).name() << endl;
}
//整个类模板化：
template<class T>
void printMyClass3(T & p){
    //cout << "T的类型为： " << typeid(T).name() << endl;
    p.showPerson();//cout << "年龄：" << p.age << "； 姓名：" << p.name << endl;
}

int main(){
    Person<int, string> p1(26,"Marco Reus");
    printMyClass1(p1);
    Person<double, string> p2(28.6,"Cristiano Ronaldo");
    printMyClass2(p2);
    Person<int, string> p3(30,"Thiago Silva");
    printMyClass3(p3);


    return 0;
}