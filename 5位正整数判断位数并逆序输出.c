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
		printf("请输入一个不多于五位的正整数：");
WRONG:
		scanf_s("%d",&num);

		data = num;

		if(num > 99999)
		{
			printf("输入格式错误，请重新输入：");
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
		
		printf("这个数为%d位，其逆序输出为%d\n",i,sum);
		
		i = 0;
		sum = 0;

	}
	
	
	return 0;
}


