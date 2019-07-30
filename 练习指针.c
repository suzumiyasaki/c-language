#include <stdio.h>

int main(void)
{
	int *p;
	int a = 10;

	p = &a;

	printf("a = %d\n",a);
	printf("&a = %p\n",&a);
	printf("p = %p\n",p);
	printf("*p = %d\n",*p);
	printf("&p = %p\n",&p);

	return 0;

}