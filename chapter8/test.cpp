#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string; using std::ostream; 
using std::ofstream; using std::ios_base;using std::ios;


//程序清单8.8:
void printOrWrite(ostream& os, const string& name,const int arr[]);


int main(){
//程序清单8.8:
    string name = "my name is Reus.";
    int arr[5] = {1,2,3,4,5};
    // cout << name << endl;
    // int i;
    // for(i = 0;i < 4;i++)
    //     cout << arr[i] << ", ";
    // cout << arr[i] << endl;

    //写到文件中：
    string fileName = "test.txt";
    ofstream ofs;
    ofs.open(fileName);
    if(!ofs.is_open()){
        cout << "文件打开错误！" << endl;
        return -1;
    }
    printOrWrite(ofs,name,arr);

    //打印：
    printOrWrite(cout,name,arr);
    
    return 0;
}

void printOrWrite(ostream& os, const string& name,const int arr[]){

    os << name << endl;
    int i;
    for(i = 0;i < 4;i++)
        os << arr[i] << ", ";
    os << arr[i] << endl;

}