#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	int num;
	int sum = 1;
	
	while(1)
	{
		
		printf("������һ��ʮ���ڵ���:");
STAR:
		scanf_s("%d",&num);

		if(num > 10)
		{
			printf("����������������������\n");
			goto STAR;
		}
		else
		{
			for(;num >= 1;num--)
			{
				sum = sum * num;
			}
			printf("������Ľ׳�Ϊ��%d\n",sum);
			sum = 1;
			//system("cls");
		}
		
	}
	
	return 0;
}