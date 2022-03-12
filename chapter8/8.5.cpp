#include<iostream>
#include<string>
#include<cstring>

using std::cout; using std::cin; using std::endl; using std::string;

//交换两个数的模板：
template <typename T>
//template <class T>
void swap(T& a, T& b);//原型

//交换两个数组的模板：
template <typename T>
void swap(T a[], T b[],int n);//原型
//void swap(T* a, T* b,int n);

template <typename T>
void showArr(T arr[],int n);

int main(){
//程序清单8.11： 
    // int a,b;
    // a = 30; b = 50;
    // cout << "交换前，a = " << a << ";b = " << b << endl;
    // swap(a,b);
    // cout << "交换后，a = " << a << ";b = " << b << endl;

    // double x,y;
    // x = 30.6; y = 50.9;
    // cout << "交换前，x = " << x << ";y = " << y << endl;
    // swap(x,y);
    // cout << "交换后，x = " << x << ";y = " << y << endl;

//程序清单8.12：
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,0};
    cout << "修改前：" << endl;
    showArr(arr1,5);
    showArr(arr2,5);
    swap(arr1,arr2,5);
    cout << "修改后：" << endl;
    showArr(arr1,5);
    showArr(arr2,5);

    double arr3[5] = {1.1,2.2,3.3,4.4,5.5};
    double arr4[5] = {6.6,7.7,8.8,9.9,0.0};
    cout << "修改前：" << endl;
    showArr(arr3,5);
    showArr(arr4,5);
    swap(arr3,arr4,5);
    cout << "修改后：" << endl;
    showArr(arr3,5);
    showArr(arr4,5);

    return 0;
}
//模板函数的定义：
//template <typename T>
template <class T>
void swap(T& a, T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void swap(T a[], T b[],int n){
    T temp[n];
    for(int i = 0;i < n;i++){
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];
    }
}

template <typename T>
void showArr(T arr[],int n){
    int i;
    for(i = 0;i < n-1;i++){
        cout << arr[i] << ",";
    }
    cout << arr[i] << "." << endl;
}