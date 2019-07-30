#include <stdio.h>
int main(void)
{
	int a,b,c;
	printf("请输入第一个数字:");					//提示用户输入第一个数字
	scanf_s("%d",&a);								//从键盘上输入第一个数字
	printf("请输入第二个数字:");					//提示用户输入第二个数字
	scanf_s("%d",&b);								//从键盘上输入第二个数字
	c = a % b;										//用第一个变量的结果取余第二个变量的结果
	//判断取余的结果是否为零
	if(c==0)										//如果是
	{
		printf("%d可以被%d整除\n",a,b);				//打印ok
	}
	else						//否则
	{
		printf("%d不可以被%d整除\n",a,b);			//打印no
	}
	return 0;
}

