#include <stdio.h>
#include <math.h>
int main(void)
{
	int num,data;
	int i=0;
	int sum = 0;
	int cont;
	
	while(1)
	{
		printf("������һ����������λ����������");
WRONG:
		scanf_s("%d",&num);

		data = num;

		if(num > 99999)
		{
			printf("�����ʽ�������������룺");
			goto WRONG;
		}
		
		while(num!=0)
		{
			num = num / 10;
			i++;
		}

		for(cont = 0;cont < i;cont++)
		{

			sum = sum * 10 ;
			sum = sum + ( (int)( data / pow (10.0,cont) ) % 10 );

		}
		
		printf("�����Ϊ%dλ�����������Ϊ%d\n",i,sum);
		
		i = 0;
		sum = 0;

	}
	
	
	return 0;
}


