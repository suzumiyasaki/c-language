#include <stdio.h>
int main(void)
{
	int a = 20;
	
	while(a > 10)
	{
		printf("循环体内a = %d\t",a);
		a-=2;

	}
		printf("循环体外a = %d\n",a);
	
	return 0;
}