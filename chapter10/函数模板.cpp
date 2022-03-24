//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a, T b)  
{
	return a + b;
}

#include<iostream>
using std::cout;   using std::endl;

int main() {

	int a = 10;
	int b = 20;
	char c = 'c';
	
	cout << myAdd01(a, c) << endl; //正确，将char类型的'c'隐式转换为int类型  'c' 对应 ASCII码 99

	//myAdd02(a, c); // 报错，使用自动类型推导时，不会发生隐式类型转换 模板的参数是a和b是同类型，都是T，但实参给的参数中a是int，c是char，所以就跟模板不匹配了

	myAdd02<int>(a, c); //正确，如果用显示指定类型，可以发生隐式类型转换

	system("pause");
	return 0;
}
