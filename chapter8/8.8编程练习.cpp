#include<iostream>
#include<string>
#include<string.h>

using std::cout; using std::cin; using std::endl; using std::string;

//第1题：
void print(const char* str,int n = 0);
int func1();//返回函数被调用的次数

//第2题：
struct CandyBar
{
    char brandName[50];//string
    double weight;
    int calorie;
};
void setCandyBar(CandyBar& c,const char* name = "Munch Box",const double weight = 2.85,const int calorie = 350);//const char*
void showStrc(const CandyBar& c);

//第3题：
void toUpper(string& str);

//第4题：
struct stringy
{
    char* pStr;//指向一个字符串
    int ct;//计算字符串的长度，不计算结束符'\0'
};
void set(stringy& str,const char* test);
void show(const stringy& str,int n = 1);
void show(const char* test,int n = 1);

//第5题：第6题
template <class T>
T maxn(T arr[],int n);
template<> char* maxn<char*>(char* pArr[],int n);//具体类型是char* 即char指针

//第7题：
template<typename T>
T sumArr(T arr[],int n);
template<typename T>
T sumArr(T* arr[],int n);
struct debts
{
    char name[50];
    double count;
};





int main(){
//第1题：
    // print("123");
    // print("456",10);//n != 0，此时print函数被调用了2次
    // print("789");
    // print("abc",1);//n != 0，此时print函数被调用了4次
    // print("xyz");
    // print("zyx",3);//n != 0，此时print函数被调用了6次

    // func1();
    // func1();
    // func1();
    // func1();
    // func1();
    // func1();
    // func1();
    // cout << "函数func1被调用的次数为：" << func1() << endl;

//第2题：
    // CandyBar c1;
    // CandyBar c2;
    // setCandyBar(c1);
    // showStrc(c1);
    // setCandyBar(c2,"wangzai",3.6,270);
    // showStrc(c2);

//第3题：
    // string str;
    // cout << "请输入一个字符串（按'q'键结束)：";
    // getline(cin,str);
    // while(!(str == "q")){
    //     toUpper(str);
    //     cout << "转换后的结果：" << str << endl;
    //     cout << "请输入一个字符串（按'q'键结束)：";
    //     getline(cin,str);
    // };
    // if(str == "q")
    //     cout << "Bye." << endl;

//第4题：
    // stringy beany;
    // char testing[] = "Reality isn't what it used to be.";
    // set(beany,testing);//beany.pStr指向new的空间
    // show(beany);cout << "--------" << endl; //这里还会用到beany.pStr
    // show(beany,2);cout << "--------" << endl;//这里还会用到beany.pStr
    // delete[] beany.pStr;//用完beany.pStr之后记得释放掉它指向的内存块
    
    // testing[0] = 'D';
    // testing[1] = 'u';
    // show(testing);cout << "--------" << endl;
    // show(testing,3);cout << "--------" << endl;
    // show("Done!");

//第5题：第6题：
    // int arr1[6] = {20,15,-10,0,65,63};
    // int max1 = maxn(arr1,5);
    // cout << "max1 = " << max1 << endl;
    // double arr2[4] = {-1.1,9.6,3.4,-26.1};
    // double max2 = maxn(arr2,5);
    // cout << "max2 = " << max2 << endl;

    // const char* pArr[5] = {"123","abcked","12","abcd","12345"};
    // const char* maxStr = maxn(pArr,5);
    // cout << "最长的字符串为：" << maxStr << endl;

//第7题：
    int things[6] = {13,31,103,301,310,130};
    debts mr_E[3]= {{"abc",24.00},{"lmn",36.00},{"xyz",12.00}};
    double *pd[3];

    for(int i = 0;i < 3;i++){
        pd[i] = &mr_E[i].count;
    }

    int sumInt = 0;
    sumInt = sumArr(things,6);
    cout << "sumInt = " << sumInt << endl;
    double sumDouble = 0.0;
    sumDouble = sumArr(pd,3);
    cout << "sumDouble = " << sumDouble << endl;


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
int func1(){
    static int count = 0;
    count++;
    return count;
}
void setCandyBar(CandyBar& c, const char* name,const double weight,const int calorie){//void setCandyBar(CandyBar& c, char* name = "Munch Box", double weight = 2.85, int calorie = 350){
    strcpy(c.brandName,name);//c.brandName = name;//
    c.weight = weight;
    c.calorie = calorie;
}
void showStrc(const CandyBar& c){
    cout << "品牌名：" << c.brandName << "； 重量：" << c.weight << "； 热量：" << c.calorie << endl;
}
void toUpper(string& str){
    for(int i = 0;i < str.length();i++){
        str[i] = toupper(str[i]);
    }
}
void set(stringy& str,const char* test){
    str.pStr = new char[strlen(test) + 1];//多new一个字节空间放结束符
    strcpy(str.pStr,test);
    str.ct = strlen(test);//字符个数，不算结束符  
}
void show(const stringy& str,int n){
    for(int i = 0;i < n;i++)
        cout << str.pStr << endl;//
    cout << "字符串中字符的个数为：" << str.ct << endl;
}
void show(const char* test,int n){
    for(int i = 0;i < n;i++){
        cout << test << endl;
    }
    cout << "字符串中字符的个数为：" << strlen(test) << endl;
}
template <class T>
T maxn(T arr[],int n){
    T max = arr[0];
    for(int i = 1;i < n;i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
template<> char* maxn<char*>(char* pArr[],int n){
    int max = 0;
    char* maxStr;
    for(int i = 0;i < n;i++){
        if(strlen(pArr[i]) > max)
            max = strlen(pArr[i]);        
    }
    cout << "最长的字符串长度为" << max << endl;
    for(int i = 0;i < n;i++){
        if(strlen(pArr[i]) == max){
            maxStr = pArr[i];
            break;
        }  
    }
    return maxStr;
}
template<typename T>
T sumArr(T arr[],int n){
    T sum = 0;
    for(int i = 0;i < n;i++){
        sum += arr[i];
    }
    return sum;
}
template<typename T>
T sumArr(T* arr[],int n){
    T sum = 0;
    for(int i = 0;i < n;i++){
        sum += *arr[i];
    }
    return sum;
}




