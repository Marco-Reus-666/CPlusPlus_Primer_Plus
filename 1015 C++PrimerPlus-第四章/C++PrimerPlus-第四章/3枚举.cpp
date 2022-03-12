#include<iostream>
#include<string>
using namespace std;

/*创建枚举：
enum MyEnum0 //枚举名为MyEnum0
{
	red, orange, yellow, green, blue, purple  //默认第一个枚举量为0，后面没被初始化的枚举量比前面的大1:
											  //red = 0, orange = 1, yellow = 2, green = 3, blue = 4, purple = 5 
};
enum MyEnum1 //枚举名为MyEnum1
{
	one = 1, two = 2, four = 4, eight = 8  //最后没有分号，也不能有pi=3.14，这里面只能是整数，不能是浮点型
};
enum MyEnum2 //枚举名为MyEnum2
{
	first, second = 100, third  //默认第一个枚举量为0，后面没被初始化的枚举量比前面的大1：first = 0, second = 100, third = 101
};
enum        //可以省略枚举类型的名称
{
	zero, null = 0, one, four = 4  //可以创建多个值相同的枚举量：zero = null = one = 0, four = 4
};
*/
/*
int main() {

//用枚举名来创建这种类型的变量：
	MyEnum0 band;//band是枚举变量名

//对于枚举，①只定义了赋值运算符，所以②枚举不能进行算术运算！！！
	
	//①给枚举变量band赋值时，只能赋MyEnum0取值范围(0~7)以内的值
	band = blue;//blue是枚举MyEnum0类型
	//band = 6;//报错：不能将int类型的值分配到"MyEnum0"类型的实体
	band = (MyEnum0)6;//所以用强制类型转换，将6从int类型转换到"MyEnum0"类型
	//band = (MyEnum0)20;//20已经超出了范围，虽然没报错，但不合规，带来的后果是不确定的
	
	//②枚举不能进行算术运算：
	//++band;//算术运算会报错：枚举类型上的此操作需要适用于用户定义的运算符函数
	//band = orange + red;//报错：不能将int类型的值分配到"MyEnum0"类型的实体
	band = (MyEnum0)(orange + red);//把枚举量orange和red提升到int类型，进行算术运算，然后再转换到"MyEnum0"类型赋给band
	int num = blue;
	num = orange + red;//把枚举量orange和red提升到int类型，进行算术运算





	system("pause");
	return 0;
}*/