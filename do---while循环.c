#include <stdio.h>
int main(void)
{
	int a = 5;
	do
	{
		
		a += 2 ;
		printf("循环体内a = %d\n",a);

	}while(a < 10);
		printf("循环体外a = %d\n",a);

	return 0;
}