#include <stdio.h>
int main(void)
{
	int score;
	int wages = 6000;
	printf("请输入员工成绩：");
	scanf_s("%d",&score);
	if(score >= 0 && score <= 59)
	{
		printf("此员工成绩不及格\t");
		printf("工资为：%d\n",wages - 300);
	}
	else if(score >= 60 && score <= 80)
	{
		printf("此员工成绩良好\t");
		printf("工资为：%d\n",wages + 500);
	}
	else if(score >= 81 && score < 100)
	{
			printf("此员工成绩优秀\t");
			printf("工资为：%d\n",wages + 800);
	}
	else if(score == 100)
	{
		printf("此员工成绩优秀\t");
		printf("工资为：%d\n",wages + 1000);
	}
	else
	{
		printf("成绩输入有误，请重新输入\n");
	}
	return 0;
}