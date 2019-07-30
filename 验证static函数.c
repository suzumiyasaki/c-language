#include <stdio.h>

void mm(void);

int main(void)
{
	mm();
	mm();
	mm();

	return 0;
}

void mm(void)
{
	int  a = 0;
	static int  b = 0;
	a++;
	b++;
	printf("a = %d\t",a);
	printf("b = %d\n",b); 

}