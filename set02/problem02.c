#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
   output( a,b,c, isscalene);
}
int input_side()
{
  int a,b,c;
  printf("Enter the values:\n");
  scanf("%d%d%d",&a,&b,&c);
}
int check_scalene(int a,int b,int c)
{
  int isscalene=0,result=0;
  if((a!=b) || (b!=c))
  {
    result=isscalene;
    return 0;
    }
    else if((a==b) || (b==c))
    {
      result=equilateral;
      return 1;
     }
  else
    {
      result=scalene;
      return 2;
    }
  return 0;
  }
void output(int a, int b, int c, int isscalene);

 if(return==0)
 {
    printf(" The triangle with the sides is %d",isscalene);
   }
  else if(return ==1)
  {
     printf("The triangle are equilateral %d",result);
  }
  else (return == 2)
    {
   printf("The triangle are scalene %d",result);
    }

