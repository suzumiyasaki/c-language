#include <stdio.h>
int main(void)
{
	int num1,num2,num3;
	while(1)
	{
		printf("������������������");
		scanf_s("%d%d",&num1,&num2);
		num3 = num2;
	

		//	num1 = num1 * 10;

		while(num2 !=0)
		{

			num2 = num2 / 10;
			num1 = num1 * 10;
			

		}
		
			num1 = num1 + num3;
		
			printf("���������ĺϲ���Ϊ%d\n",num1);
			printf("\n");
			
	}
	return 0;
}
