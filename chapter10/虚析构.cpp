#include<iostream>
#include<string>
using std::cout; using std::endl; using std::string;

class Animals{
public:
    //构造函数：
    Animals(){
        cout << "基类构造函数" << endl;
    }
    //析构函数：
    virtual ~Animals() //= 0;//纯虚析构
    {//设置成虚析构
        cout << "基类虚析构函数" << endl;
    }
    //成员函数：
    virtual void speak() = 0;//纯虚函数{}

};
// Animals::~Animals(){//虚析构和纯虚析构都要用具体的代码实现
//     cout << "基类纯虚析构函数" << endl;
// }
class Cats : public Animals{
    string* name;
public:
    //构造函数：
    Cats(){
        cout << "派生类无参构造函数" << endl;
        name = nullptr;
    }
    Cats(string name){
        cout << "派生类有参构造函数" << endl;
        this->name = new string(name);//
    }
    //析构函数：
    ~Cats(){
        cout << "派生类析构函数" << endl;
        if(this->name != nullptr)
            delete this->name;
        name = nullptr;
    }
    //成员函数：
    virtual void speak(){
        cout << "小猫在说话" << endl;//调用的是无参构造
        //cout << *(this->name) << "小猫在说话" << endl;//调用的是有参构造
    }
};

void doSpeak(Animals &animal){//父类引用指向子类对象，发生多态
    animal.speak();
}
void doSpeak(Animals *animal){//父类指针指向子类对象，发生多态
    animal->speak();
    delete animal;//释放在main函数中new的Cats
}

int main(){

//父类指针指向子类对象，发生多态:因为是指针，所以涉及到delete，就有可能遇到 父类指针在释放时无法调用到子类的析构代码 的问题
    //Animals *animal = new Cats;
    Animals *animal = new Cats("咪咪");
    animal->speak();
    delete animal;//这里要记得delete 由于子类中的name属性是开辟到堆区，所以父类指针在释放时无法调用到子类的析构代码.
    //doSpeak(new Cats);

//父类引用指向子类对象，发生多态:引用的话不涉及delete，即使需要一个全局函数来辅助完成父类引用指向子类对象
    //Cats cat;//无参构造 
    //doSpeak(cat);
    //Cats cat("乐乐");//有参参构造 
    //doSpeak(cat);

    return 0;
}