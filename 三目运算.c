#include <stdio.h>
int main(void)
{
	int max;
	int a,b;
	printf("����������ֵ��");
	scanf("%d%d",&a,&b);
	max=  (a > b) ? (max = a) : (max = b);
	printf("�����ֵ�����ֵΪ:%d\n",max);
	return 0;
}