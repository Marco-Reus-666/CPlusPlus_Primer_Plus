#include<iostream>
#include<string>
#include "类模板分文件编写.hpp"

using std::cout; using std::endl;  using std::string;


int main(){

    Animals<int, string> animal(3,"狗子");
    animal.showAnimals();

    return 0;
}