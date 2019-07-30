#include<stdio.h>
int main(void)
{
	int sys_password = 123456;
	int user_password;

	printf("请输入密码:");
STAR:
	scanf("%d",&user_password);

	if(user_password == sys_password)
	{
		printf("密码正确，正在进入系统.\n");
	}
	else
	{
		printf("\n");
		printf("密码错误，请重新输入:");
		
		goto STAR;
	}
	return 0;
}

