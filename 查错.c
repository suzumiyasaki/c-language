#include <stdio.h>
#include <math.h>

int add(int x);

int main(void)
{
 int a;
 int fanhui;
 printf("输入一个数据：");
 scanf("%d",&a);

 fanhui=add(a);
 printf("返回值为%d\n",fanhui);
 return 0;
}
int add(int x)
{
 int data1;
 
 int sum=0;
 int i;
 int cont=0;
 int p=0;
 data1=x;
  for(i=0;i<cont;i++)   
 {
  sum = sum * 10 + ((int)(data1 / pow(10,i)) % 10);
 }
  if(sum==data1)
  {
   p=p+1;
  }
  return p;
}