#include <stdio.h>
int main(void)
{
		int data;
		int i;
		int cont = 0;
		while(1)
		{
			printf("������һ������");
			scanf("%d",&data);
			for(i = 0 ;i <= data;i++)
			{
				if(data % i == 0)
				{
					cont++;
				}
			}
			
			if(cont == 2)
			{
				printf("�����������������");
			}
			else
			{
				printf("������������Ǻ���");
			}
			cont = 0;
			
		}
		
		return 0;

}
