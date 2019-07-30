#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void show(void);
void key_scan(char k);
int random_user(void);
int sys_calculate(int a,int b,char cmd);


int main(void)
{
	unsigned char key;
	int random_num1,random_num2;
	int user_data;
	int sys_data;
	char cmd;
	
	while(1)
	{
	
		//界面显示
		show();

		//生成第一个随机数
		random_num1	= random_user();

		//用户输入选择
	STAR:
		key = getch();
	
	
		if(key != '+' && key != '-' && key != '*' && key != '/' )
		{
			printf("您输入的字符有误，请重新输入：\n");
			goto STAR;
		}

		//判断用户输入的有效性
		key_scan(key);

		//随机显示
		//生成第二个随机数
		random_num2	= random_user();
		printf("请计算%d %c %d的值:",random_num1,key,random_num2);
		scanf("%d",&user_data);

		//系统自己计算出答案
		sys_data = sys_calculate(random_num1,random_num2,key);

		//判断用户输入的正确性
		if(sys_data == user_data)
		{
			printf("计算正确！\n");
		}
		else
		{
			printf("计算错误！\n");
		
		}

		printf("请按y键继续,按任意结束\n");
			cmd = getch();
			
			if(cmd != 'y'&& cmd != 'Y')
			{
				break;
			}
			system("cls");



	}
	return 0;
}


/********************************************************************************
*函数名		：show
*函数功能	：显示界面
*函数返回值 ：void
*函数参数	：void
*函数描述	：printf
********************************************************************************/
void show(void)
{
	printf( "————————————————————————\n" );
	printf( "|                四则运算小程序                |\n" );
	printf( "————————————————————————\n" );
	printf( "|       【+】                     【-】        |\n" );
	printf( "|       【*】                     【/】        |\n" );		
	printf( "————————————————————————\n" );
	printf( "请选择:\n");
}


/********************************************************************************
*函数名		：key_scan
*函数功能	：识别用户输入的运算符
*函数返回值 ：void
*函数参数	：char 
*函数描述	：识别用户输入的运算符是什么并打印一句话
********************************************************************************/
void key_scan(char k)
{
	switch(k)
	{
	case '+':printf("您执行的是加法运算。\n");break;
	case '-':printf("您执行的是减法运算。\n");break;
	case '*':printf("您执行的是乘法运算。\n");break;
	case '/':printf("您执行的是除法运算。\n");break;
	}
}


/********************************************************************************
*函数名		：random_user
*函数功能	:产生一个一百以内的随机数
*函数返回值 ：int
*函数参数	：void 
*函数描述	：
********************************************************************************/
int random_user(void)
{
	int i,num;
	srand((unsigned) time(NULL));//用时钟做种，每次产生随机数不同
	for(i = 0;i < 65536;i++)
	{
		num = rand() % 101;  //产生一个0-100的随机数
	}
	return num;

}


/********************************************************************************
*函数名		：sys_calculate
*函数功能	:系统计算正确答案
*函数返回值 ：int
*函数参数	：int a int b char cmd
*函数描述	：
********************************************************************************/
int sys_calculate(int a,int b,char cmd)
{
	int val;
	switch (cmd)
	{
	case '+':val = a + b;break;
	case '-':val = a - b;break;
	case '*':val = a * b;break;
	case '/':val = a / b;break;
	}

	return val;
}