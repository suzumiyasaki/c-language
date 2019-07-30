#include <stdio.h>
int main(void)
{
	int m,n,i,j;
	
	m = (5 == 2 && 4 == 3);  //0
	n = (5 > 2  && 4 > 3);   //1
	i = (5 > 2  && 5 == 4);  //0
	j = (4      && 5 > 2);   //1

	printf("m = %d\n",m);
	printf("n = %d\n",n);
	printf("i = %d\n",i);
	printf("j = %d\n",j);
	
	return 0;
}
