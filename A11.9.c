//function to find square of a number
#include<stdio.h>
int sqr(int);
int main()
    {
      int x;
      printf("Enter a number\n");
      scanf("%d",&x);
      sqr(x);
      return 0;
    }
int sqr(int n)
    {
      int t;
      t=n*n;
      return printf("square is %d",t);
    }
