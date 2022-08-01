// function to check Next prime number of a given number(TSRS)
#include<stdio.h>
int nxtprime(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    nxtprime(n);
    return 0;
}

int nxtprime(int n)
    {
        int nx,i;

        for(nx=n;;nx++)
        {
            for(i=2;i<=nx;i++)

              {
                if(nx%i==0)
                break;
              }

        if(i==nx)
        break;
        }
        printf("Next prime number  is %d",nx);
        return 0;
    }
