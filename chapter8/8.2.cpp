#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>


using std::cout; using std::cin; using std::endl; using std::string; using std::ostream; 
using std::ofstream; using std::ios_base;using std::ios;//showpoint

//程序清单8.4：
void swapr(int& a,int& b);
void swapp(int* a,int* b);
void swap(int a,int b);

//程序清单8.5：
int cube(int a);
int cube1(int a);
int recube( int& ra);
int recube1(int& ra);

//程序清单8.6:
struct Students{
    string name;
    int num;
};
void showStu(const Students& stu);
Students& accumulate(Students& sum_stu,const Students& one_stu);

//程序清单8.8:
void printOrWrite(ostream& os, string& name,const int arr[]);


int main(){
//程序清单8.2和8.3： 
    // int rats = 10;
    // int& rodents = rats;
    // cout << "rats = " << rats << "; &rats = " << &rats << endl;//10 addr1
    // cout << "rodents = " << rodents << "; &rodents = " << &rodents << endl;//10 addr1
    // rodents++;
    // cout << "rats = " << rats << "; &rats = " << &rats << endl;//11 addr1
    // cout << "rodents = " << rodents << "; &rodents = " << &rodents << endl;//11 addr1

    // int bunnies = 50;
    // rodents = bunnies;
    // cout << "rats = " << rats << "; &rats = " << &rats << endl;//50 addr1
    // cout << "rodents = " << rodents << "; &rodents = " << &rodents << endl;//50 addr1
    // cout << "bunnies = " << bunnies << "; &bunnies = " << &bunnies << endl;//50 addr2

//程序清单8.4：
    // int m = 20;
    // int n = 30;
    // cout << "初始值：m = " << m << "; n = " << n << endl;//20 30

    // int& a = m;
    // int& b = n;
    // cout << "使用引用进行交换：";
    // swapr(a,b);
    // cout << "m = " << m << "; n = " << n << endl;//30 20

    // int* pm = &m;
    // int* pn = &n;
    // cout << "使用指针进行交换：";
    // swapp(pm,pn);
    // cout << "m = " << m << "; n = " << n << endl;//20 30

    // cout << "使用值传递进行交换：";
    // swap(m,n);
    // cout << "m = " << m << "; n = " << n << endl;//20 30

//程序清单8.5:
    // int m = 3;
    // int n = 5;
    // cout << "m = " << m << "; n = " << n << endl;
    // cout << "cube(m) = " << cube(m) << "; m = " << m << endl;
    // cout << "recube(n) = " << recube(n) << "; n = " << n << endl;
    // m = 3; n = 5;
    // cout << "cube1(m) = " << cube1(m) << "; m = " << m << endl;
    // cout << "recube1(n) = " << recube1(n) << "; n = " << n << endl;
    // //short l = 2;
    // //recube(l);
    // //recube(m + 5);
    // //recube(3);

//程序清单8.6:
//     Students stu0 = {"sum"};
//     Students stu1 = {"reus",26};
//     Students stu2 = {"messi",50};
//     Students stu3 = {"ronaldo",60};
//     Students stu4 = {"marcelo",20};
//     Students stu5 = {"benzema",10};
//     Students stu6;
// //①
//     showStu(stu0);//0
// //②
//     accumulate(stu0,stu1);//stu0 + stu1
//     showStu(stu0);//26
// //③
//     showStu(accumulate(stu0,stu2));//76 stu0 + stu2
// //④
//     accumulate(accumulate(stu0,stu3),stu4);//(stu0 + stu3) + stu4
//     showStu(stu0);//156
// //⑤
//     accumulate(stu0,stu5) = stu4;//stu4给到stu0
//     showStu(stu0);//marcelo 20
// //⑥
//     stu6 = accumulate(stu0,stu5);//stu0 + stu5
//     showStu(stu6);//30


//程序清单8.8:
    string name = "my name is Reus.";
    int arr[5] = {1,2,3,4,5};
    // cout << name << endl;
    // int i;
    // for(i = 0;i < 4;i++)
    //     cout << arr[i] << ", ";
    // cout << arr[i] << endl;

    //打印：
    printOrWrite(cout,name,arr);

    //写到文件中：
    string fileName = "test.txt";
    ofstream ofs;
    ofs.open(fileName);
    if(!ofs.is_open()){
        cout << "文件打开错误！" << endl;
        return -1;
    }
    printOrWrite(ofs,name,arr);

    return 0;
}

void swapr(int& a,int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int* a,int* b){
    int temp;
    temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int cube(int a){
    return a * a * a;
}
int cube1(int a){
    a = a * a * a;
    return a;
}
int recube( int& ra){
    return ra * ra * ra;
}
int recube1(int& ra){
    ra = ra * ra * ra;
    return ra;
}
void showStu(const Students& stu){
    cout << "姓名：" << stu.name << "；数量：" << stu.num << endl;
}
Students& accumulate(Students& sum_stu,const Students& one_stu){
    sum_stu.num += one_stu.num;
    return sum_stu;
}
void printOrWrite(ostream& os, const string& name,const int arr[]){

    //ios_base::fmtflags initial;
    //initial = os.setf(ios_base::fixed);
    //os.precision(0);
    //os.setf(ios::showpoint);
    os << name << endl;
    int i;
    for(i = 0;i < 4;i++)
        os << arr[i] << ", ";
    os << arr[i] << endl;

    //os.setf(initial);
}













