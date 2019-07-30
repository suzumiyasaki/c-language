#include <stdio.h>
int main(void)
{
		int data;
		int i;
		int cont = 0;
		while(1)
		{
			printf("请输入一个数：");
			scanf("%d",&data);
			for(i = 0 ;i <= data;i++)
			{
				if(data % i == 0)
				{
					cont++;
				}
			}
			
			if(cont == 2)
			{
				printf("您输入的数据是素数");
			}
			else
			{
				printf("您输入的数据是合数");
			}
			cont = 0;
			
		}
		
		return 0;

}
