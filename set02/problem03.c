#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
  int n=2;
  printf("Enter the number:\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i=0;
  if(i%n ==0)
  {
    printf("It is composite number");
  }
  else
  {
    printf("It's not a composite number");
    }
}
void output(int n, int result)
{
  printf("%d is a is_composite",n,is_composite);
}
int main()
{
  int n,result=0;
  n=input_number();
  int is_composite(int n);
  output(n,result);
}