#include <stdio.h>

int quan;
int main(void)
{
	int a;
	float b;
	double c;
	char d;
	
	scanf("%d%f%lf %c",&a,&b,&c,&d);
	printf("%d\t%f\t%lf\t%c\n",a,b,c,d);

	return 0;
}

