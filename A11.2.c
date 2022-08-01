// functio of HCF of two numbers(TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
  {

      int x,y;
      printf("Enter two numbers\n");
      scanf("%d %d",&x,&y);
      hcf(x,y);
      return 0;
  }

int hcf(int x,int y)
   {  int h;
      for(h=x<y?x:y; h>=1;h--)
         if(x%h==0 && y%h==0)
            break;

            printf("HCF is %d",h);

   }
