#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string;

//第1题：
void print(const char* str,int n = 0);



int main(){
//第1题：
    print("123");
    print("456",10);//n != 0，此时print函数被调用了2次
    print("789");
    print("abc",1);//n != 0，此时print函数被调用了4次
    print("xyz");
    print("zyx",3);//n != 0，此时print函数被调用了6次

    return 0;
}
void print(const char* str,int n){
    static int count = 0;
    count++;
    if(n == 0){
        cout << "n == 0,打印 1 次：\n" << str << endl;
    }
    else{
        cout << "n != 0,打印 " << count << " 次：" << endl;
        for(int i = 0;i < count;i++){
            cout << str << " / ";
        }
        cout << endl;
    }
}