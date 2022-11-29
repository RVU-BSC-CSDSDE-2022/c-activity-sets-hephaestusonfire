#include <stdio.h>


int main()
{
  int a, b, sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
  }

int input()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  return x;
}

void add(int a, int b, int *asum)
{
  *asum=a+b;
}

void output(int a, int b, int sum)
{
 // sum=10;
  printf("the sum is %d",sum ); 
}

