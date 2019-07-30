#include<stdio.h>
int main(void)
{
	int i,j;
	for(i = 0;i < 10;i++ )
	{
		printf("i = %d\t",i);
		for(j = 0;j < 10;j++)
		{
			printf("j = %d\t",j);
		}
		printf("\n");
	}
	return 0;
}