#include <stdio.h>
#include <iostream>
using namespace std;
//函数传入指针参数
void fun(int *a, int *b)//指针指向的地址不变，所以地址上的数字交换
{
	int c = 0;
	c = *a;
    cout<<*a<<endl;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 1;
	int b = 2;
	cout << &a << "," << &b << endl;
	fun(&a, &b);//a,b交换
	cout << &a << "," << &b << endl;

	return 0;
}
