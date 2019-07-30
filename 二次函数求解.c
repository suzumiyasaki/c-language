#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c,delta,x1,x2,realparp,imagpart;

	printf("plearse input three parameter:");
	scanf("%f%f%f",&a,&b,&c);
	printf("The equation");
	if(abs(a) <= 1e-6)
	{
		printf("is not a quadratic");
	}
	else
	{
		delta = pow(a,2) - 4 * a * c; 
	}
	return 0;
}