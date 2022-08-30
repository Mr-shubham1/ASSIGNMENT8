#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {  
        for(j=1;j<=7;j++)
        {
            if((j>=1)&&(j<=(i-1)))
            printf(" ");
        }
        k=1;
        for(j=1;j<=7;j++)
        {
          if((j>=i)&&(j<=4))
          {
          printf("%d",k);
          k++;
          }
        }
        int t;
        t=k-2;
         for(j=1;j<=7;j++)
         {
        if((j>=5)&&(j<=(8-i)))
        {
        printf("%d",t);
        t--;
        }
         }
         printf("\n");
    }
    return 0;
}