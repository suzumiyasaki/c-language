#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int judgement_digit(int number);
int reverse(int number,int digit);

int main(void)
{
	int num,num1;			//�û��������
	int digit;				//λ����������
	int data;
	
	while(1)
	{

		printf("������һ����������λ����������");
	
	WRONG:
		scanf("%d",&num);

		num1 = num;

		if(num1 > 99999 || num1 < 0)
		{
			printf("��������ݷ�Χ�������������룺");
			goto WRONG;
		}
	
		digit = judgement_digit(num1);

		data  = reverse(num,digit);


		if(digit != 0)
		{
			printf("����һ��%dλ����������Ϊ%d��\n",digit,data);
		}
		else
		{
			printf("����һ��1λ����������Ϊ0��\n");
		}
		printf("�밴���������...");
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

