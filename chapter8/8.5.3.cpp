#include<iostream>
#include<string>
#include<cstring>

using std::cout; using std::cin; using std::endl; using std::string;

//程序清单8.13：
template <typename T>
void swap(T& a,T& b);

struct jober
{
    string name;
    int age;
    double salary;
};
template<> void swap<jober>(jober& a,jober& b);
void showStruct1(const jober& j);

int main(){

    int a,b;
    a = 20; b = 30;
    cout << "交换前：a = " << a << ";b = " << b << endl;
    swap(a,b);
    cout << "交换后：a = " << a << ";b = " << b << endl;

    jober j1 = {"reus",26,50.5};
    jober j2 = {"messi",28,30.6};
    cout << "交换前：" << endl;
    showStruct1(j1);
    showStruct1(j2);
    swap(j1,j2);
    cout << "交换后：" << endl;
    showStruct1(j1);
    showStruct1(j2);

    return 0;
}
template <typename T>
void swap(T& a,T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
// template<> void swap<jober>(jober& a,jober& b){
//     string tempName;
//     int tempAge;
//     double tempSalary;
//     tempName = a.name;
//     a.name = b.name;
//     b.name = tempName;
//     tempAge = a.age;
//     a.age = b.age;
//     b.age = tempAge;
//     tempSalary = a.salary;
//     a.salary = b.salary;
//     b.salary = tempSalary;
// }
void showStruct1(const jober& j){
    cout << "姓名：" << j.name << "； 年龄：" << j.age << "；薪资：" << j.salary << endl;
}