#include <stdio.h>
#include <stdlib.h>	 //��������
#include <conio.h>   //getchar����
int main(void)
{
	int num;
	int i = 0;


	while(1)
	{
		i = 0;
		printf("������һ��������");
		scanf("%d",&num);
		if(num == 0)
		{
			num = 1;
		}

		while(num != 0)
		{
			num = num / 10;
			i++;
		}
		printf("�������Ϊ%dλ\n",i);
		
		printf("�����������\n");
		getch();
	
		system("cls");

	}
	return 0;
}