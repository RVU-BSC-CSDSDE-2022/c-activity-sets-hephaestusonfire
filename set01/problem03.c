 gcc #include <stdio.h>

int input()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  return x;
}
int add(int a, int b)
{
  int sum;
  // a = input();
  // b = input();
  sum = a + b;
  return sum;
}
void output(int sum)
{
  printf("the sum of the numbers is %d",sum);
    
}

int main(void){
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  // printf("%d",sum);
  output(sum);
  return 0;
  
}