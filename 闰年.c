#include <stdio.h>
int main(void)
{
	int year;
	int i = 0;

	//printf("������һ����ݣ�");
	//scanf_s("%d",&year);
	for(year = 1000;year < 10001;year++)
	{
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 !=0))
		{
			i++;
			printf("%d��������\t",year);
			if(i % 7 ==0)
			{
				printf("\n");
				printf("\n");
			}

		}
/*		else
		{
			printf("%d����ƽ��\n",year);
		}*/
	}
	return 0;
}