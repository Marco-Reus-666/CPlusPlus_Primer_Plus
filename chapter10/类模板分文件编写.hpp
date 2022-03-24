//类模板的声明和定义写在一个文件中
#include<iostream>
#include<string>

using std::cout; using std::endl;  using std::string;

template<class ageType, class nameType>
class Animals{
public:
    ageType age;
    nameType name;
public:
    //构造函数：
    Animals();
    Animals(ageType age, nameType name);//声明
    //成员函数：
    void showAnimals();//声明
};
//类外实现构造函数：
template<class ageType, class nameType>//①类模板声明
Animals<ageType, nameType>::Animals(){//②加上模板参数列表

}
//类外实现构造函数：
template<class ageType, class nameType>//①类模板声明
Animals<ageType, nameType>::Animals(ageType age, nameType name){//②加上模板参数列表
    this->age = age;
    this->name = name;
}
//类外实现成员函数：
template<class ageType, class nameType>//①类模板声明
void Animals<ageType, nameType>::showAnimals(){//②加上模板参数列表
    cout << "年龄：" << this->age << "； 姓名：" << this->name << endl;
}




