#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	int num;
	int sum = 1;
	
	while(1)
	{
		
		printf("请输入一个十以内的数:");
STAR:
		scanf_s("%d",&num);

		if(num > 10)
		{
			printf("数据输入有误，请重新输入\n");
			goto STAR;
		}
		else
		{
			for(;num >= 1;num--)
			{
				sum = sum * num;
			}
			printf("这个数的阶乘为：%d\n",sum);
			sum = 1;
			//system("cls");
		}
		
	}
	
	return 0;
}