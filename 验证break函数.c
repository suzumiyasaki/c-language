#include <stdio.h>
int main(void)
{
	int i = 0;
	while(1)
	{
		i++;
		if(i == 5)
		{
			break;
		}
		printf("%d\n",i);
	}
	printf("我出来了");
	return 0;
}