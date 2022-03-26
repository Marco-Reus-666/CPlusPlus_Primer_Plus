#include<iostream>
#include<string>
using std::cout; using std::endl; using std::string;

int main(){
//string的构造与赋值操作:
    string str1 = "abcdefghijklmn";
    string str2 = str1;
    string str3, str4, str5, str6(6, 'n');
    str3.assign("12345678", 5);
    str4.assign(str2);
    str5.assign(5, 'm');//

    cout << "str1 = " << str1 << endl;//abcdefghijklmn
    cout << "str2 = " << str2 << endl;//abcdefghijklmn
    cout << "str3 = " << str3 << endl;//12345
    cout << "str4 = " << str4 << endl;//abcdefghijklmn
    cout << "str5 = " << str5 << endl;//mmmmm
    cout << "str6 = " << str6 << endl;//nnnnnn

//string查找和替换：
    string str7="123459789";
    int pos;
    //正着查;
    pos = str7.find("5");
    cout << "查找结果：pos = " << pos << endl;//4 正着查，返回字符'5'出现的正向位置
    //倒着查：
    pos = str7.rfind("5");
    cout << "查找结果：pos = " << pos << endl;//4 倒着查，返回字符'5'出现的正向位置

    //正着查;
    pos = str7.find("9");
    cout << "查找结果：pos = " << pos << endl;//5 正着查，返回字符'9'出现的正向位置
    //倒着查：
    pos = str7.rfind("9");
    cout << "查找结果：pos = " << pos << endl;//8 倒着查，先找到后面那个9，因此返回后面那个9的正向位置

    str7.replace(3,5,"66");//从下标3开始一共5个字符替换成字符串"66"
    cout << "str7 = " << str7 << endl;//123669
    
    cout << str7[3] << endl;//6
    cout << str7.at(5) << endl;//9
    str7.at(5) = 'a';
    cout << str7.at(5) << endl;//a

    //比较：
    if(str1.compare(str3)){
        cout << "两个字符串不同" << endl;
    }
    else
        cout << "两个字符串相同" << endl;

    






    return 0;
}