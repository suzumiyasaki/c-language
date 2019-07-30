#include <stdio.h>

void check(void);

int main(void)
{

	check();
	
	return 0;
}


void check(void)
{
	int user_password;
	int system_password;
	system_password = 123456;
	printf("请输入密码：");
	scanf("%d",&user_password);

	
	if(user_password == system_password)
	{
		printf("正在进入系统\n");

	}
	else
	{
		printf("密码错误，请重新输入\n");
	}
}
int change_password(void)
{
	return 0;
}