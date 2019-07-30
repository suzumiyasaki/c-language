#include <stdio.h>

void fun(char a,int b);

int main(void)
{
	char q = 'A';
	int p = 20;

	//定义了一个指针
	void (*pf)(char a,int b);	//指针变量声明

	//明确指向
	pf = fun;					//函数名就是函数地址
	
	//通过指针调用函数
	(*pf)(q,p);					//调用格式完全符合函数调用

	return 0;
}

void fun(char a,int b)
{
	printf("%c\n",a);
	printf("%d\n",b);
}