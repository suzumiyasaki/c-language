#include<stdio.h>
int main(void)
{
	int i,j;

	//for(i = 100;i > 0;i--)
	//{
	//	if(i % 17 == 0)
	//	{
	//		printf("1-100 中能被 17 整除的最大数为 %d\n",i);
	//		break;
	//	}
	//	
	//}
	for(i = 1;i < 100;i++)
	{
		if(i % 17 == 0)
		{
			j = i;
		}
	}
	printf("1-100 中能被 17 整除的最大数为 %d\n",j);
	return 0;
}