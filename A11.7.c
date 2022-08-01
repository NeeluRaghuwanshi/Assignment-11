// function to print N  terms of fibonacci series(TSRN)
#include<stdio.h>
void nfib(int);
int main()
   {
     int n;
     printf("Enter a number\n");
     scanf("%d",&n);
     nfib(n);
     return 0;

   }
void nfib(int n)
   {
      int i,x=-1,y=1,f;
       for(i=1;i<=n;i++)
          {
            f=x+y;
            printf("%d ",f);
            x=y;
            y=f;

          }

   }
