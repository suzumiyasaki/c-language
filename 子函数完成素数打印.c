#include <stdio.h>

void prime_number(int prime_number);

int main(void)
{	
	int data;
	while(1)
	{
		
		printf("请输入一个正整数:");
		scanf_s("%d",&data);
		prime_number(data);
	}
	return 0;
}

void prime_number(int prime_number)
{
	int i,j;
	int tab = 0;

	for(i = 1;i <= prime_number;i ++)
	{
		for(j = 2;j < i;j++)
		{
			if(i % j == 0)
			
				break;
		}
		if(i == j)
		{
			tab++;
			if(tab % 7 == 0)
			printf("\n");
			printf("%d\t",i);
			


		}
	}
	
	printf("\n");
}