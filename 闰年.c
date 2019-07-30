#include <stdio.h>
int main(void)
{
	int year;
	int i = 0;

	//printf("请输入一个年份：");
	//scanf_s("%d",&year);
	for(year = 1000;year < 10001;year++)
	{
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 !=0))
		{
			i++;
			printf("%d年是闰年\t",year);
			if(i % 7 ==0)
			{
				printf("\n");
				printf("\n");
			}

		}
/*		else
		{
			printf("%d年是平年\n",year);
		}*/
	}
	return 0;
}