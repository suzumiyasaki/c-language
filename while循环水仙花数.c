#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 0;
	int num = 100;
	int unit,ten,hun;
	
	
	while(num <= 999)
	{
		unit = num % 10;
		ten  = num / 10 % 10;
		hun  = num / 100 % 10;
		if(num == pow(unit,3)+pow(ten,3)+pow(hun,3))
		{
		
				printf("%d是水仙花数\n",num);
				i++;
	
		}
		num ++;
	}
	printf("总共有%d个水仙花数\n",i);
	
	return 0;
}