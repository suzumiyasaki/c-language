#include <stdio.h>
int main(void)
{
	int a = 5;
	int b = 5;
	int c,d;
	//c = a++;
	//d = ++b;
	//printf("c = %d\n",c);  //c = 5 
	//printf("d = %d\n",d);  //d = 6
	//a = a ++;
	//b = ++ b;
	//printf("a = %d\n",a);
	//printf("b = %d\n",b);
	//int a = 5;
	//int b = 4;
	b = a + ++ a;
	printf("a = %d\tb = %d\n",a,b);

	
	return 0;
}