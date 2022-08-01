//functio to check number is prime or not.(TSRS)
#include<stdio.h>
int prime(int);
int main()
  { int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    prime(n);
    return 0;
   }

int prime(int n)
    {
        int i;

        for(i=2;i<=n-1;i++)
        {
             if(n%i==0)
                break;
        }

        if(i==n)
          printf("%d is a prime number",n);
        else
          printf("%d is not a prime number",n);

    }
