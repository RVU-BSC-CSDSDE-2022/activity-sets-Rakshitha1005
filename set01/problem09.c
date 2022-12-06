# include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);
 
float input()
{
  float n;
  printf("enter the number:/n");
  scanf("%e",&n);
  return n;
}
float square_root(float n)
{
  float sqrt;
  {
    sqrrot=sqrt(n);
  }
  return sqrrot;
}
void output(float n,float sqrroot)
{
  printf("the square root of %f is %f",n,sqrrot);
}
int main()
{
 float n,sqrrot;
  n=input();
  sqrrot=square_root(n);
  output(n,sqrrot);
}