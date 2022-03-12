#include<iostream>
#include<string>
#include<cstring>

using std::cout; using std::cin; using std::endl; using std::string;

//程序清单8.10：
unsigned long func1(const long& num,int n);//返回数字num的前n位数字
char* func1(const char* str,int n);//返回字符串str的前n个字符

int main(){

//程序清单8.10：
    cout << "程序清单8.10的结果：" << endl;
    unsigned long num = 12345;
    const char* str = "asdfg";
    char* res;
    for(int i = 0;i < 7;i++){
        cout << func1(num,i) << endl;
        res = func1(str,i);
        cout << res << endl;
        delete[] res;
    }
    cout << "Done!" << endl;
    return 0;
}
unsigned long func1(const long& num,int n){
    int weishu = 0;
    unsigned long subNum = 0;
    unsigned long temp = num;
    while(temp > 0){
        weishu++;
        temp /= 10;
    }
    //cout << num << "的位数是：" << weishu << endl;
    if(num == 0 || n == 0){
        return 0;
    }
    if(weishu < n)
        return num;//返回原数字
    
    subNum = num;
    for(int i = 0;i < (weishu - n);i++){//要显示前n为，那就进行(weishu - n)次/10操作
        subNum = subNum / 10;
    }
    //cout << num << "的前" << n << "位数是：" ;
    return subNum;
}
char* func1(const char* str,int n){
    
    char* res = new char[n + 1];
    int i;
    for(i = 0;i < n && str[i] != '\0';i++){
        res[i] = str[i];
    }
    while(i <= n)
        res[i++] = '\0';
    return res;
}