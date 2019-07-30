#include <stdio.h>

int main(void)
{
	int a = 10, b = 20,c = 60, d =70,m;

	m = (a = a > b) && (c = 60 > d);

	printf("a = %d\nb = %d\nc = %d\nd = %d\nm = %d\n",a,b,c,d,m);

	return 0;

}