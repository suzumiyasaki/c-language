#include <stdio.h>
int main(void)
{
	int i,j;
	int *i_street,*j_street;
	i=213;
	j=10000;
	i_street=&i;
	j_street=&j;
	printf("%d\t%d\n",i,j);
	printf("%d\t%d\n",*i_street,*j_street);
	printf("%d\t%d\n",&i,&j);
	printf("%d\t%d\n",i_street,j_street);
	printf("%d\t%d\n",*&i,*&j);
	return 0;
}