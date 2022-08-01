// function for LCM of two numbers(TSRS)
int lcm(int,int);
#include<stdio.h>
int main()
    {
     int x,y;
     printf("Enter two numbers\n");
     scanf("%d %d",&x,&y);
     lcm(x,y);
     return 0;

    }

 int lcm(int x,int y)
  {
    int L;
     for(L=1;L<=x*y;L++)
          {
            if(L%x==0 && L%y==0)
            break;
          }
         printf("LCM is %d",L);

  }
