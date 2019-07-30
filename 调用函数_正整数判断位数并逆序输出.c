#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int judgement_digit(int number);
int reverse(int number,int digit);

int main(void)
{
	int num,num1;			//用户输入变量
	int digit;				//位数计数变量
	int data;
	
	while(1)
	{

		printf("请输入一个不超过五位的正整数：");
	
	WRONG:
		scanf("%d",&num);

		num1 = num;

		if(num1 > 99999 || num1 < 0)
		{
			printf("输入的数据范围有误，请重新输入：");
			goto WRONG;
		}
	
		digit = judgement_digit(num1);

		data  = reverse(num,digit);


		if(digit != 0)
		{
			printf("这是一个%d位数，其逆序为%d。\n",digit,data);
		}
		else
		{
			printf("这是一个1位数，其逆序为0。\n");
		}
		printf("请按任意键继续...");
		getch();
		system("cls");
	
	}

	

	return 0;
}

int judgement_digit(int number)
{
	int digit = 0;
	while(number != 0)
	{
		number = number / 10;
		digit++;
	}
	return digit;
}

int reverse(int number,int digit)
{
	
	int cont;
	int reverse_number = 0;
	
	for(cont = 0;cont < digit;cont ++)
	{
		reverse_number = reverse_number * 10;
		reverse_number = reverse_number + (int)(number / pow(10.0,cont) ) % 10;
	}

	return reverse_number;

}

