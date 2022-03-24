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
    Animals(){

    }
    Animals(ageType age, nameType name){
        this->age = age;
        this->name = name;
    }
    //成员函数：
    void showAnimals(){
        cout << "年龄：" << this->age << "； 姓名：" << this->name << endl;
    }
};
//普通子类继承模板父类：
class Cats : public Animals<int, string>{//子类在声明的时候（也即继承的时候），就要指定出父类中`T`的类型
    char gender;
public:
    //构造函数：
    Cats(){

    }
    Cats(string name, int age, char gender){
        this->gender = gender;
        this->age = age;
        this->name = name;
        //Animals(age, name);
    }
    //成员函数：
    void showCats(){
        //showAnimals();
        cout << "性别：" << this->gender << "; 年龄：" << this->age << "； 姓名：" << this->name << endl;
    }
};

//模板子类继承模板父类：
template<class genderType, class ageType, class nameType>
class dogs : public Animals<ageType, nameType>{
    genderType gender;
public:
    //构造函数
    dogs(){

    }
    dogs(nameType name, ageType age, genderType gender){
        this->gender = gender;
        this->age = age;
        this->name = name;
    }
    //成员函数：
    void showdogs(){
        cout << "性别：" << this->gender << "; 年龄：" << this->age << "； 姓名：" << this->name << endl;
    }

};


int main(){

    //普通子类继承模板父类：
    Cats cat1("咪咪", 2, 'F');
    cat1.showAnimals();
    cat1.showCats();



    //模板子类继承模板父类：
    dogs<char, int, string> d1("狗子", 3, 'M');
    d1.showAnimals();
    d1.showdogs();




    return 0;
}