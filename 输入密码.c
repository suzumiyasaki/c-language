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
	printf("���������룺");
	scanf("%d",&user_password);

	
	if(user_password == system_password)
	{
		printf("���ڽ���ϵͳ\n");

	}
	else
	{
		printf("�����������������\n");
	}
}
int change_password(void)
{
	return 0;
}