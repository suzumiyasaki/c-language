#include <stdio.h>


void welcome();


int main(void)
{
	char key;

	welcome();
	scanf_s("%c",&key);
	switch(key)
	{
		case '1':printf("正在检索......\n");break;
		case '2':printf("正在还书......\n");break;
		case '3':printf("正在查询......\n");break;
		case '4':printf("正在添加......\n");break;
		case '5':printf("正在查询......\n");break;
		case '0':printf("正在退出......\n");break;
		default :printf("您输入的命令有误，请重新输入\n");break;

	}

	return 0;
}


void welcome ()
{

	printf( "\t\t\t——————————————————————————————\n" );
	printf( "\t\t\t|                   欢迎来到图书管理系统                   |\n" );
	printf( "\t\t\t——————————————————————————————\n" );
	printf( "\t\t\t|       【1】检索                    【2】还书             |\n" );
	printf( "\t\t\t|       【3】热度排行榜              【4】添加新书         |\n" );	
	printf( "\t\t\t|       【5】密码修改                【6】退出程序         |\n" );	
	printf( "\t\t\t——————————————————————————————\n" );
	printf( "\t\t\t请选择:\n");

}