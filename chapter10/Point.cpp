//#include<iostream>
#include "Point.h"

void Point::setX(double x){
    this->x = x;
}
void Point::setY(double y){
    this->y = y;
}
double Point::getX(){
    return this->x;
}
double Point::getY(){
    return this->y;
}

void Point::setPoint(double x, double y){
    this->x = x;
    this->y = y;
}
Point::Point(){

}

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}
Point::~Point(){
    
}