#include <stdio.h>

int compare(int a,int b,int c);

int main(void)
{
	int sum;
	int i,j = 10;
	int a,b,c;
	
	while(1)
	{
		printf("请输入三个数：\n");
		scanf_s("%d%d%d",&a,&b,&c);
	
	
		i = compare(a,b,c);
		sum = i + j;

		printf("max = %d\t sum = %d\n",i,sum);
	}

	return 0;
}

int compare(int a,int b,int c)
{
	int max;
	if(a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if(max < c)
	{
		max = c;
	}
	
	return max;
}