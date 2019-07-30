#include <stdio.h>
int main(void)
{

	int a;
	for(a = 0;a < 5;a ++)
	{
		printf("循环体内执行%d次\n",a);
	}
		printf("循环体外执行%d次\n",a);
	return 0;
}