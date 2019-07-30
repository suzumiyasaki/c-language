#include <stdio.h>
int main(void)
{
	int compare(int x,int y);
	int a,b,c;
	scanf_s("%d%d",&a,&b);
	c=compare(a,b);
	printf("max=%d\t",c);

	return 0;
}


int compare(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x;
	}
	
	else
	{
		z=y;
	}
	return z;
}


