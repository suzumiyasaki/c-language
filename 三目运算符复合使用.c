#include <stdio.h>
int main ()
{
	int max;
	int a,b,c;
	printf("��������������");
	scanf("%d%d%d",&a,&b,&c);

	max = (a > b) ? (max = a) : (max = b);
	max = (max > c) ? (max) : (max = c);


	printf("���ֵΪ%d\n",max);
	return 0;
}