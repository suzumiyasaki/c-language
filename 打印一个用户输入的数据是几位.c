#include <stdio.h>
#include <stdlib.h>	 //清屏函数
#include <conio.h>   //getchar函数
int main(void)
{
	int num;
	int i = 0;


	while(1)
	{
		i = 0;
		printf("请输入一个整数：");
		scanf("%d",&num);
		if(num == 0)
		{
			num = 1;
		}

		while(num != 0)
		{
			num = num / 10;
			i++;
		}
		printf("这个数据为%d位\n",i);
		
		printf("按任意键继续\n");
		getch();
	
		system("cls");

	}
	return 0;
}