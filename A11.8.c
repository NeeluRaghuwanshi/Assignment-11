//function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int);
int comb(int ,int );
void pascal(int);
int main()
   { int n ;
     printf("enter a number\n");
     scanf("%d",&n);
     pascal(n);
     return 0;

   }

 int fact(int n)
   {
      int fa=1,i;
      for(i=1;i<=n;i++)
      fa=fa*i;
      return fa;
   }
int comb(int n,int r)
   {
       return fact(n)/(fact(r)*fact(n-r));
   }

void pascal(int n)
{
    int i,j,k,r;
    for(i=1;i<=n;i++)
    {    k=1;
         r=0;
        for(j=1;j<=2*n-1;j++)
           {   if(j>=n+1-i && j<=n-1+i && k)
                {
                  printf(" %d ",comb(i-1,r));
                  k=0;
                  r++;
                }

                else
                {
                  printf("  ");
                  k=1;
                }
           }
           printf("\n");

}
}


