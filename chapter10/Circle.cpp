#include<iostream>
#include<cmath>
#include "Circle.h"
using std::cout; using std::endl;

void Circle::setR(int r){
    this->radius = r;
}
double Circle::getR(){
    return this->radius;
}
void Circle::setCenter(int x, int y){
    center.setX(x);
    center.setY(y);
}
Point Circle::getCenter(){
    return this->center;
}

void Circle::result(Point p){
    cout << "p点的坐标为(" << p.getX() << "," << p.getY() << ") ";
    double distance = sqrt((p.getX() - center.getX()) * (p.getX() - center.getX()) + (p.getY() - center.getY()) * (p.getY() - center.getY()));
    cout << "p点到圆心的距离为：" << distance << "  结果：";
	if (distance > radius)
		cout << "点在圆外" << endl;
	else if (distance == radius)
		cout << "点在圆上" << endl;
	else
		cout << "点在圆内" << endl;
}
Circle::Circle(){
    cout << "无参构造函数" << endl;
}
Circle::Circle(double x, double y, double radium){
    this->radius = radium;
    this->center.setX(x);
    this->center.setY(y);
    cout << "有参构造函数" << endl;
}
Circle::~Circle(){
    cout << "析构函数" << endl;
}