#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string;

//第4题：
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
};
void showStruct(const box& b);
void setStruct(box& stu);

//第6题：
double mass(const double& density,double volume = 1);//默认参数
//void repeat(int n = 5 ,const char* str = "123");
int average(int a,int b);
double average(double a,double b);

//第8题：显式具体化要在原有模板函数的基础上，具体化特定类型的实现。
template<class T>
T& bigger(T& b1, T& b2);
template<> box& bigger<box>(box& b1,box& b2);


int main(){
//第4题：
    // box stu = {"china", 20.2, 30.3, 1};
    // showStruct(stu);
    // setStruct(stu);
    // showStruct(stu);
//第6题：
    // repeat();
    // repeat(3,"abc");
    // //repeat("messi");//错误！

//第8题：
    box b1 = {"china", 20.2, 30.3, 1.1};
    box b2 = {"indian", 2.2, 3.3, 0.1};
    showStruct(b1);
    showStruct(b2);
    cout << "比较大的box的信息为: " << endl;;
    box temp = bigger(b1,b2);
    showStruct(temp);

    return 0;
}
void showStruct(const box& b){
    cout << "maker:" << b.maker << "; height = " << b.height << "; width = " << b.width << ";length = " << b.length << endl;
}
void setStruct(box& stu){
    stu.length = stu.height * stu.width;
}
// void repeat(int n = 5 ,const char* str = "123"){
//     cout << "n = " << n << "; str = " << str << endl;
// }
template<class T>
T& bigger(T& b1, T& b2){
    return b1 > b2 ? b1 : b2;
}
template<> box& bigger<box>(box& b1,box& b2){
    if(b1.length > b2.length)
        return b1;
    else    
        return b2;
}