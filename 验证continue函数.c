#include <stdio.h>
int main(void)
{
	int i;
	
	for(i = 0;i < 10;i ++)
	{
		if(i == 4)
		{
			printf("\n");
			continue;
		}
		printf("%d\n",i);
	}
	printf("我出来了\n");
	return 0;
}