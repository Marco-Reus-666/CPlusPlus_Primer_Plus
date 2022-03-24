#include<iostream>
#include "Person.h"

using std::cout;  using std::endl;

// Person1::Person1() {
//     cout << "无参构造" << endl;
//     this->age = 0;
//     *this->height = 0;
// }
// Person1::Person1(int age, int height) {
//     this->age = age;
//     //在堆区开辟空间，存放this->height
//     this->height = new int(height);//this->height是个地址
//     cout << "this->height地址：" << (int)this->height << endl;//17681832
//     cout << "有参构造" << endl;
// }
// Person1::Person1(const Person1& p) {
//     this->age = p.age;
//     //this->height = p.height;
//     //开始拷贝之前，在堆区为形参p开辟新的空间，用来存放p.height
//     this->height = new int(*p.height);//括号里的*p.height是一个值，不是地址
//     cout << "形参p地址：" << (int)p.height << endl;//17681832
//     cout << "拷贝构造" << endl;
// }
// Person1::~Person1() {//析构是将堆区开辟的数据进行释放操作
//     if (this->height != NULL){
//         delete this->height;
//         this->height = NULL;
//     }    
//     cout << "析构" << endl;
// }

Person1::Person1(){
    this->age = 0;
    this->height = nullptr;//初始化
}
Person1::Person1(int age, int height) {
    this->age = age;
    this->height = new int(height);//this->height必须指向一个new的空间（确切的空间），这样才算是真正的构造，不能让int* 指向一个不确定的内存空间
    //*(this->height) = height;//这个不行Segmentation fault (core dumped)
}
Person1::Person1(const Person1& p) {
    this->age = p.age;
    this->height = new int(*(p.height));//拷贝值，不能拷贝地址，否则会出现浅拷贝的问题  注意：括号里的*(p.height)是一个值，不是地址
    //this->height = p.height;//浅拷贝，拷贝的是地址
    //拷贝构造可以照着有参构造的内容写：this->height必须指向一个new的空间，这样才算是真正的构造，独立的构造，否则让两个对象指向一块内存，这是很不合理的
}
Person1::~Person1() {
    if(this->height != nullptr)
        delete this->height;
    this->height = nullptr;//重新初始化
}
void Person1::showPerson(){
    cout << "年龄：" << this->age  << " ；身高：" << *(this->height) << endl;
}