//to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int);
int seriesum(int);
int main()
  {
    seriesum(5);
    return 0;

  }
int fact(int n)
   {
      int fa=1,i;
      for(i=1;i<=n;i++)
      fa=fa*i;
      return fa;
   }
int seriesum(int n)
  {
    int i,sum=0;
    for(i=1;i<=n;i++)
       {
         sum=sum+fact(i)/i;
       }
       printf(" Sum of series 1! /1+2!/2+3!/3+4!/4+5!/5 is %d",sum);

  }
