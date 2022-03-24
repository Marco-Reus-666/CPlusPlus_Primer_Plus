class Person1 {

	int age;//年龄
	int* height;//height存储的是高度值的地址

public:
	Person1();//无参构造
	Person1(int age, int height) ;//有参构造
	Person1(const Person1& p) ;//拷贝构造
	~Person1() ;//析构函数

    void showPerson();
};