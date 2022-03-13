//#test1:
// #include<iostream>
// #include<fstream>
// #include<cstdlib>
// #include<string>

// using std::cout; using std::cin; using std::endl; using std::string; using std::ostream; 
// using std::ofstream; using std::ios_base;using std::ios;


// //程序清单8.8:
// void printOrWrite(ostream& os, const string& name,const int arr[]);


// int main(){
// //程序清单8.8:
//     string name = "my name is Reus.";
//     int arr[5] = {1,2,3,4,5};
//     // cout << name << endl;
//     // int i;
//     // for(i = 0;i < 4;i++)
//     //     cout << arr[i] << ", ";
//     // cout << arr[i] << endl;

//     //写到文件中：
//     string fileName = "test.txt";
//     ofstream ofs;
//     ofs.open(fileName);
//     if(!ofs.is_open()){
//         cout << "文件打开错误！" << endl;
//         return -1;
//     }
//     printOrWrite(ofs,name,arr);

//     //打印：
//     printOrWrite(cout,name,arr);
    
//     return 0;
// }

// void printOrWrite(ostream& os, const string& name,const int arr[]){

//     os << name << endl;
//     int i;
//     for(i = 0;i < 4;i++)
//         os << arr[i] << ", ";
//     os << arr[i] << endl;

// }

//#test2:第八章编程练习题第2题
#include<iostream>
#include<string>
#include<string.h>

using std::cout; using std::cin; using std::endl; using std::string;

//第2题：
struct CandyBar
{
    char brandName[30];//
    double weight;
    int calorie;
};

void setCandyBar(CandyBar& c,const char* name = "Munch Box",const double weight = 2.85,const int calorie = 350);//const char*
void showStrc(const CandyBar& c);//


int main(){

//第2题：
    CandyBar c1;
    CandyBar c2;
    setCandyBar(c1);
    showStrc(c1);
    setCandyBar(c2,"wangzai",3.6,270);
    showStrc(c2);

    char str1[50] = "Be the best that you can be.";
    const char* str2 = "beast";
    cout << "str1 = " << str1 << endl;//str1 = Be the best that you can be.
    cout << "str2 = " << str2 << endl;//str2 = beast
    char* ps = str1 + 3;
    cout << "ps = " << ps << endl;//ps = the best that you can be.
    cout << endl;
    ps = strcpy(str1 + 7,str2);//返回值是str1 + 7的位置
    cout << "str1 = " << str1 << endl;//str1 = Be the beast
    cout << "str2 = " << str2 << endl;//str2 = beast
    cout << "ps = " << ps << endl;//ps = beast 因为ps指向的不是str1，而是str1 + 7



    return 0;
}

void setCandyBar(CandyBar& c,const char* name,const double weight,const int calorie){//void setCandyBar(CandyBar& c, char* name = "Munch Box", double weight = 2.85, int calorie = 350){
    strcpy(c.brandName,name);//c.brandName = name;//
    c.weight = weight;
    c.calorie = calorie;
}
void showStrc(const CandyBar& c){
    cout << "品牌名：" << c.brandName << "； 重量：" << c.weight << "； 热量：" << c.calorie << endl;
}