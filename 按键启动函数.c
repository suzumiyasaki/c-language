#include <stdio.h>
#include <conio.h>


void open(void (*fq)(void));
void fun1(void);
void fun2(void);
void fun3(void);
void fun4(void);
void fun5(void);

int main(void)
{
	char key;

	while(1)
	{
		key = _getch();
		switch (key)
		{
			case'1':open(fun1);break;
			case'2':open(fun2);break;
			case'3':open(fun3);break;
			case'4':open(fun4);break;
			case'5':open(fun5);break;

		}
	}


	return 0;
}

void open(void (*fq)(void))
{
	(*fq)();
}

void fun1(void)
{
	printf("功能1启动：\n");
}

void fun2(void)
{
	printf("功能2启动：\n");
}

void fun3(void)
{
	printf("功能3启动：\n");
}

void fun4(void)
{
	printf("功能4启动：\n");
}

void fun5(void)
{
	printf("功能5启动：\n");
}


