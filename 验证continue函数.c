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
	printf("�ҳ�����\n");
	return 0;
}