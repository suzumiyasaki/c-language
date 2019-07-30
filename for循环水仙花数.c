#include<stdio.h>
#include<math.h>
int main(void)
{	
	int num;
	int ge,shi,bai;
	for(num = 100;num < 1000;num++)
	{
		ge = num % 10;
		shi= num / 10 % 10;
		bai= num / 100 % 10;
		if(num == pow(ge,3)+pow(shi,3)+pow(bai,3))
		{
			printf("%d是水仙花数\n",num);
		}
	}
	return 0;
}