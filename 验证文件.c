#include <stdio.h>
int main()
{
	int i,j;
	int m,n;
	
	scanf("%d %d",&m,&n);
	i = m;
	j = n;
	for(;i<=10;i++)
	{
		for(;j<=10;j++)
		{
			printf("%d\t",i*j);
		}
			printf("\n");
	}

	return 0;
}