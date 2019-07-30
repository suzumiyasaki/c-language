#include <stdio.h>
int main(void)
{
	int *p,*p1,*p2;
	int a,b;
	scanf("%d%d",&a,&b);
	p1 = &a;
	p2 = &b;
	if(a<b)
	{
		p=p1;p1=p2;p2=p;
	}
	printf("a=%d\tb=%d\n",a,b);
	printf("max=%d\tmin=%d\n",*p1,*p2);
	return 0;


	
}