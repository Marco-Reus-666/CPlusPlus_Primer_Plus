#include<iostream>
//#include "Circle.h"
#include "Person.h"

using std::cout; using std::endl;

int main(){
    // {//点和圆的类测试：  
    //     Circle c1;
    //     c1.setCenter(2,2);//圆心
    //     c1.setR(2);//半径
    //     Point p1;
    //     p1.setX(4);
    //     p1.setY(4);
    //     c1.result(p1);
    //     Point p2;
    //     p2.setPoint(2,2);
    //     c1.result(p2);
    //     Circle c2(2,2,2);
    //     Point p3(2,4);
    //     c2.result(p3);
    // }
    {//Person类测试：
        Person1 p1(26,175);
        p1.showPerson();
        Person1 p2(p1);
        p2.showPerson();
    }
    
    
    
    return 0;
}