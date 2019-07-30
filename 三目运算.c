#include <stdio.h>
int main(void)
{
	int max;
	int a,b;
	printf("请输入两个值：");
	scanf("%d%d",&a,&b);
	max=  (a > b) ? (max = a) : (max = b);
	printf("输入的值中最大值为:%d\n",max);
	return 0;
}