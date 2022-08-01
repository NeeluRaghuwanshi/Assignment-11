//function to print n prime numbers(TSRN)
#include<stdio.h>
void nprime(int);
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    nprime(x);
    return 0;

}
void nprime(int nt)
    {
        int n,i;
        for(n=1;n<=nt;n++)
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
