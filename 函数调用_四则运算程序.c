#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void show(void);
void key_scan(char k);
int random_user(void);
int sys_calculate(int a,int b,char cmd);


int main(void)
{
	unsigned char key;
	int random_num1,random_num2;
	int user_data;
	int sys_data;
	char cmd;
	
	while(1)
	{
	
		//������ʾ
		show();

		//���ɵ�һ�������
		random_num1	= random_user();

		//�û�����ѡ��
	STAR:
		key = getch();
	
	
		if(key != '+' && key != '-' && key != '*' && key != '/' )
		{
			printf("��������ַ��������������룺\n");
			goto STAR;
		}

		//�ж��û��������Ч��
		key_scan(key);

		//�����ʾ
		//���ɵڶ��������
		random_num2	= random_user();
		printf("�����%d %c %d��ֵ:",random_num1,key,random_num2);
		scanf("%d",&user_data);

		//ϵͳ�Լ��������
		sys_data = sys_calculate(random_num1,random_num2,key);

		//�ж��û��������ȷ��
		if(sys_data == user_data)
		{
			printf("������ȷ��\n");
		}
		else
		{
			printf("�������\n");
		
		}

		printf("�밴y������,���������\n");
			cmd = getch();
			
			if(cmd != 'y'&& cmd != 'Y')
			{
				break;
			}
			system("cls");



	}
	return 0;
}


/********************************************************************************
*������		��show
*��������	����ʾ����
*��������ֵ ��void
*��������	��void
*��������	��printf
********************************************************************************/
void show(void)
{
	printf( "������������������������������������������������\n" );
	printf( "|                ��������С����                |\n" );
	printf( "������������������������������������������������\n" );
	printf( "|       ��+��                     ��-��        |\n" );
	printf( "|       ��*��                     ��/��        |\n" );		
	printf( "������������������������������������������������\n" );
	printf( "��ѡ��:\n");
}


/********************************************************************************
*������		��key_scan
*��������	��ʶ���û�����������
*��������ֵ ��void
*��������	��char 
*��������	��ʶ���û�������������ʲô����ӡһ�仰
********************************************************************************/
void key_scan(char k)
{
	switch(k)
	{
	case '+':printf("��ִ�е��Ǽӷ����㡣\n");break;
	case '-':printf("��ִ�е��Ǽ������㡣\n");break;
	case '*':printf("��ִ�е��ǳ˷����㡣\n");break;
	case '/':printf("��ִ�е��ǳ������㡣\n");break;
	}
}


/********************************************************************************
*������		��random_user
*��������	:����һ��һ�����ڵ������
*��������ֵ ��int
*��������	��void 
*��������	��
********************************************************************************/
int random_user(void)
{
	int i,num;
	srand((unsigned) time(NULL));//��ʱ�����֣�ÿ�β����������ͬ
	for(i = 0;i < 65536;i++)
	{
		num = rand() % 101;  //����һ��0-100�������
	}
	return num;

}


/********************************************************************************
*������		��sys_calculate
*��������	:ϵͳ������ȷ��
*��������ֵ ��int
*��������	��int a int b char cmd
*��������	��
********************************************************************************/
int sys_calculate(int a,int b,char cmd)
{
	int val;
	switch (cmd)
	{
	case '+':val = a + b;break;
	case '-':val = a - b;break;
	case '*':val = a * b;break;
	case '/':val = a / b;break;
	}

	return val;
}