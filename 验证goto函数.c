#include<stdio.h>
int main(void)
{
	int sys_password = 123456;
	int user_password;

	printf("����������:");
STAR:
	scanf("%d",&user_password);

	if(user_password == sys_password)
	{
		printf("������ȷ�����ڽ���ϵͳ.\n");
	}
	else
	{
		printf("\n");
		printf("�����������������:");
		
		goto STAR;
	}
	return 0;
}

