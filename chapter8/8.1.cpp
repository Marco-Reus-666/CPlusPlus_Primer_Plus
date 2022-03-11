#include<iostream>

using std::cout; using std::cin; using std::endl;

inline double square(double x) { return x * x;}
int main(){

    double a,b;
    cout << "a = " << square(5.0) << endl;
    cout << "b = " << square(4.5 + 7.5) << endl;

    return 0;
}