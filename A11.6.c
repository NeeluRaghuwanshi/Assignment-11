// function to print All prime numbers between two  numbers(TSRN)
#include<stdio.h>
void primebtw(int,int);
int main()
   {
    int n1 ,n2;
    primebtw(n1 ,n2);
    return 0;
   }

void primebtw(int n1,int n2)
    {
        int n,i;
        printf("Enter two numbers:\n");
        scanf("%d %d",&n1,&n2);
        printf("All prime numbers between %d and %d are:\n",n1,n2);
        for(n=n1;n<n2;n++)
        {
             for(i=2;i<=n-1;i++)
        {
             if(n%i==0)
                break;
        }

        if(i==n)
          printf("%d ",n);

        }

    }
