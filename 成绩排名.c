#include <stdio.h>
int main(void)
{
	int score;
	int wages = 6000;
	printf("������Ա���ɼ���");
	scanf_s("%d",&score);
	if(score >= 0 && score <= 59)
	{
		printf("��Ա���ɼ�������\t");
		printf("����Ϊ��%d\n",wages - 300);
	}
	else if(score >= 60 && score <= 80)
	{
		printf("��Ա���ɼ�����\t");
		printf("����Ϊ��%d\n",wages + 500);
	}
	else if(score >= 81 && score < 100)
	{
			printf("��Ա���ɼ�����\t");
			printf("����Ϊ��%d\n",wages + 800);
	}
	else if(score == 100)
	{
		printf("��Ա���ɼ�����\t");
		printf("����Ϊ��%d\n",wages + 1000);
	}
	else
	{
		printf("�ɼ�������������������\n");
	}
	return 0;
}