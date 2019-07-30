#include <stdio.h>

void control(int *i,int *j);

int main(void)
{
	int x,y;
	
	x = 10;
	y = 20;
	
	printf("x = %d,y = %d\n",x,y);
	control(&x,&y);
	printf("x = %d,y = %d\n",x,y);
	
	return 0;
	
}

void control(int *i,int *j)
{
	*i = 50;
	*j = 60;
}