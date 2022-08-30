#include<stdio.h>
int main()
{
    int i,j,k=1,t;
    for(i=1;i<=7;i++)
    {
        if(i<=4)
        {
          printf("%d",k);
          k++;
        }
        else
        {  
            t=k-2;
         for(i=1;i<=7;i++)
           {
             if(i>4)
              {
               printf("%d",t);
                t--;
              }
            }
        }
    }
    printf("\n");
    
    for(i=1;i<=3;i++)
    {
        t=1;
        for(j=1;j<=7;j++)
        {
         if((j>=1)&&(j<=(4-i)))
         {
            printf("%d",t);
            t++;
         }
        }
         for(j=1;j<=7;j++)
        {
            if((j>=(5-i))&&(j<=(i+3)))
            printf(" ");
        }
        int x;
        x=t-1;
         for(j=1;j<=7;j++)
        {
            if((j>=(4+i))&&(j<=7))
            {
                printf("%d",x);
                x--;
            }
        }
        printf("\n");

    }
    return 0;
}