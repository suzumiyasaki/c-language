#include <stdio.h>

void fun(char a,int b);

int main(void)
{
	char q = 'A';
	int p = 20;

	//������һ��ָ��
	void (*pf)(char a,int b);	//ָ���������

	//��ȷָ��
	pf = fun;					//���������Ǻ�����ַ
	
	//ͨ��ָ����ú���
	(*pf)(q,p);					//���ø�ʽ��ȫ���Ϻ�������

	return 0;
}

void fun(char a,int b)
{
	printf("%c\n",a);
	printf("%d\n",b);
}