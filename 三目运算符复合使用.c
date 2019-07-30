#include <stdio.h>
int main ()
{
	int max;
	int a,b,c;
	printf("请输入三个数：");
	scanf("%d%d%d",&a,&b,&c);

	max = (a > b) ? (max = a) : (max = b);
	max = (max > c) ? (max) : (max = c);


	printf("最大值为%d\n",max);
	return 0;
}