#include <stdio.h>

int show_up(int number);

int main(void)
{
	int num;
	int frequency;

	while(1)
	{
		printf("请输入一个整数：");
		scanf_s("%d",&num);

		frequency = show_up(num);

		printf("从1-%d中,2出现了%d次。\n",num,frequency);
	}

	return 0;
}



int show_up(int number)
{
	int i,j;
	int cont = 0;

	for(i = 1;i <= number;i ++)
	{
		j = i;
		while(j != 0)
		{
			if(j % 10 == 2)
			{
				cont ++;
			}
			j = j / 10;
			
		}
		
	}

	return cont;

}