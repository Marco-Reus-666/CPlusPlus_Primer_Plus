class Animals{
    int num1;//占类的内存 4个内存
    //void showInfo();//不占类的内存
    virtual void showInfo(){}//占类的内存 8个字节
    int num2;//占类的内存 4个内存
};
class dogs : public Animals{//继承
    virtual void showInfo(){//重写父类虚函数

    }
};

#include<iostream>
using std::cout; using std::endl;

int main(){

    Animals stu;
    //cout << "类所占的内存大小：" << sizeof(stu) << endl;//4 (打开第2、3行；屏蔽第4、5行)成员变量num1占4字节，成员函数不占类的内存 
    //cout << "类所占的内存大小：" << sizeof(stu) << endl;//1 (打开第3行；屏蔽第2、4、5行)这是个空类，占1个字节内存，成员函数不占类的内存
    //cout << "类所占的内存大小：" << sizeof(stu) << endl;//8 (打开第4行；屏蔽第2、3、5行)这不是个空类，因为有虚函数，虚表指针占8个字节内存
    //cout << "类所占的内存大小：" << sizeof(stu) << endl;//16 (打开第4、5行；屏蔽第2、3行)这不是个空类，因为有虚函数，虚表指针占8个字节内存，num2占4字节,为什么是16呢？
                                                       //为什么是16呢？好像是字节对齐的缘故，因为有个指针占8个字节，所以就是8的倍数
    cout << "类所占的内存大小：" << sizeof(stu) << endl;//16 (打开第4、5、2行；屏蔽第3行)这不是个空类，因为有虚函数，虚表指针占8个字节内存,num1 num2各占4字节

    return 0;
}