#include<stdio.h>
int main(void)
{
	unsigned char a = 0x12;
	unsigned char b = 0x34;
	unsigned char c = 0x56;
	unsigned char d = 0x78;
	unsigned char e ;
		
	e = (a << 24) | (b << 16) | (c << 8) | d;
	printf("e = %x\n",e);
	return 0;
}