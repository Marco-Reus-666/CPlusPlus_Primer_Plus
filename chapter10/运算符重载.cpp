#include<iostream>
#include<string>

using std::cout; using std::endl; using std::string; using std::ostream;
using std::operator+; using std::operator<<; using std::operator==;


class Students{

    //重载左移运算符---全局函数在类内实现：加个友元
    friend ostream& operator<<(ostream& cout, const Students& stu){
        cout << "姓名：" << stu.name << "；年龄：" << stu.age << "；身高：" << stu.height << endl;
        return cout;
    }
    //重载加号运算符---全局函数在类内实现：加个友元
    friend Students operator+(const Students& stu1, const Students& stu2){
        Students tmp;
        tmp.name = stu1.name + " and " + stu2.name;
        tmp.age = stu1.age + stu2.age;
        tmp.height = stu1.height + stu2.height;
        return tmp;
    }
    //重载等号运算符---全局函数在类内实现：加个友元
    friend bool operator==(const Students& stu1, const Students& stu2){
        if(!stu1.name.compare(stu2.name) && stu1.age == stu2.age && stu1.height == stu2.height)
            return 1;
        else 
            return 0;
    }
    //重载前置++：---全局函数在类内实现：加个友元
    friend Students& operator++(Students& stu){
        stu.age++;
        stu.height++;
        return stu;//返回对象本身this
    }
    //重载后置++：---全局函数在类内实现：加个友元
    friend Students operator++(Students& stu,int){//这个int是为了和前置++形成重载，以通过编译，int本身没啥用
        Students tmp = stu;
        stu.age++;
        stu.height++;
        return tmp;
    }


    string name;
    int age;
    double height;

public:
    //无参构造函数：
    Students(){}
    //有参构造函数：
    Students(string name, int age, double height){
        this->name = name;
        this->age = age;
        this->height = height;
    }
    //重载加号运算符---成员函数实现
    // Students operator+(string str, int age, double height){//因为加法运算符是双目运算符，加数是this指针，被加数只能写一个，我写了三个当然不行
    //     Students tmp;
    //     tmp.name = this->name + " and " + str
    //     tmp.age = this->age + age;
    //     tmp.height = this->height + height;
    //     return tmp;
    // }
    Students operator+(const Students& stu){//因为加法运算符是双目运算符，加数是this指针，被加数只能写一个，我写了三个当然不行
        Students tmp;
        tmp.name = this->name + " and " + stu.name;
        tmp.age = this->age + stu.age;
        tmp.height = this->height + stu.height;
        return tmp;
    }
    //重载等号运算符---成员函数实现
    bool operator==(Students& stu) {
		if (stu.age == this->age && stu.height == this->height)// && stu.name == this->name   !stu.name.compare(this->name)
			return 1;
		else
			return 0;
	}
    //重载前置++：---成员函数实现
    Students& operator++(){
        this->age++;
        this->height++;
        return *this;//返回对象本身this
    }
    //重载后置++：---成员函数实现
    Students operator++(int){//这个int是为了和前置++形成重载，以通过编译，int本身没啥用
        Students tmp = *this;
        this->age++;
        this->height++;
        return tmp;
    }





};
//全局函数：挪到类内去实现，因为成员属性一般是私有private类型
// ostream& operator<<(ostream& cout, const Students& p){
//     cout << p.a << "" << p.b << endl;
//     return cout;
// }
int main(){
    Students stu1("Marco Reus",26,180);
    cout << stu1 << endl;//直接用cout输出一个类对象，通过重载左移运算符---全局函数实现
    Students stu2("Cristiano",30,183);
    cout << stu2 << endl;//直接用cout输出一个类对象，通过重载左移运算符---全局函数实现
    Students stu3,stu4;
    stu3 = operator+(stu1, stu2);//全局函数
    //也可以写成stu3 = stu1 + stu2;
    cout << stu3 << endl;//姓名：Marco Reus and Cristiano；年龄：56；身高：363
    stu4 = stu1.operator+(stu3);//成员函数
    //也可以写成stu4 = stu1 + stu2;
    cout << stu4 << endl;//姓名：Marco Reus and Marco Reus and Cristiano；年龄：82；身高：543

    bool res1,res2;
    res1 = operator==(stu2, stu3);//全局函数
    if(res1){//也可以写成stu2 == stu3 res1
        cout << "stu2 和 stu3 相等" << endl;
    }
    else{
        cout << "stu2 和 stu3 不等" << endl;//√
    }

    res2 = stu3.operator==(stu4);//成员函数
    if(res2){//也可以写成stu3 == stu4 res2
        cout << "stu3 和 stu4 相等" << endl;
    }
    else{
        cout << "stu3 和 stu4 不等" << endl;//√
    }

    cout << stu1 << endl;//
    //后置++
    operator++(stu1);//全局函数
    //也可以写成stu1++;
    cout << stu1 << endl;//
    stu1.operator++();//成员函数
    cout << stu1 << endl;//
    cout << stu2 << endl;//
    //前置++
    operator++(stu2,0);//全局函数 这个0就是后置++形参中的那个int，是为了和前置++构成重载
    //也可以写成++stu2;
    cout << stu2 << endl;//
    stu2.operator++(0);//成员函数 这个0就是后置++形参中的那个int，是为了和前置++构成重载
    cout << stu2 << endl;//

    return 0;
}