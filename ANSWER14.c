#include<stdio.h>
int main()
{
    int i,j,t;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if((j==1)||(j==i))
            {
                printf("*");
            }
            else
            printf(" ");
        }
          printf("\n");
    }
    for(t=1;t<=i;t++)
    {
        printf("*");
    }
    return 0;
}