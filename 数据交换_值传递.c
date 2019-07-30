#include <stdio.h>

void exchange(int *a,int *b);

int main(void)
{
	int x,y;
	printf("请输入两个值：");
	scanf_s("%d%d",&x,&y);
	exchange(&x,&y);
	
	printf("交换后的值为：%d %d\n",x,y);
	
	
	
	return 0;
}

void exchange(int *a,int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;

}


