#include <stdio.h>


void welcome();


int main(void)
{
	char key;

	welcome();
	scanf_s("%c",&key);
	switch(key)
	{
		case '1':printf("���ڼ���......\n");break;
		case '2':printf("���ڻ���......\n");break;
		case '3':printf("���ڲ�ѯ......\n");break;
		case '4':printf("�������......\n");break;
		case '5':printf("���ڲ�ѯ......\n");break;
		case '0':printf("�����˳�......\n");break;
		default :printf("�������������������������\n");break;

	}

	return 0;
}


void welcome ()
{

	printf( "\t\t\t������������������������������������������������������������\n" );
	printf( "\t\t\t|                   ��ӭ����ͼ�����ϵͳ                   |\n" );
	printf( "\t\t\t������������������������������������������������������������\n" );
	printf( "\t\t\t|       ��1������                    ��2������             |\n" );
	printf( "\t\t\t|       ��3���ȶ����а�              ��4���������         |\n" );	
	printf( "\t\t\t|       ��5�������޸�                ��6���˳�����         |\n" );	
	printf( "\t\t\t������������������������������������������������������������\n" );
	printf( "\t\t\t��ѡ��:\n");

}