//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	int i = 1;
//	int j;
//	int sqrt_i;
//	int sum = 0;
//
//	
//	
//	for(i=2;i<=1000;i++)
//	{
//		sqrt_i = (int)sqrt((double)i);
//		for(j = 2;j <= sqrt_i;j++)
//		{
//				if(i % j == 0 )
//				break;
//
//		}
//		if(j>sqrt_i)
//		{
//				sum ++;
//
//				
//				printf("%d��������\t",i);
//
//				if(sum % 7 == 0)
//				printf("\n");
//				
//			
//
//		}
//		
//	}
//	printf("�ܹ�%d����\n",sum);
//	return 0;
//}
#include <stdio.h>
#include <math.h>
int  main(void)
{
    int m;  // ��������� 
    int i;  // ѭ������
    int k;  // m ��ƽ���� 
    while(1)
	{
	printf("����һ��������");
    scanf("%d",&m);
    // ��ƽ������ע��sqrt()�Ĳ���Ϊ double ���ͣ�����Ҫǿ��ת��m������ 
    k=(int)sqrt( (double)m );
	if(m == 1)
	{
		printf("%d����������\n",m);
	}
	else
	{
		for(i=2;i<=k;i++)
			if(m%i==0)
				break;
		// ����������ѭ������ômΪ����
		// ע�����һ��ѭ������ִ��i++����ʱ i=k+1��������i>k 
		if(i>k)
			printf("%d��������\n",m);
		else
			printf("%d����������\n",m);
		}
	}
    return 0;
}

