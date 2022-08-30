 #include<stdio.h>
 int main()
 {
    int i,j;
    int k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j>=1)&&(j<=(5-i)))
            printf(" ");
        }
        k='A';
         for(j=1;j<=9;j++)
        {
          if(j>=(6-i)&&(j<=5))
          {
            printf("%c",k);
            k++;
          }
        }
        int t;
        t=k-2;
         for(j=1;j<=9;j++)
         {
             if((j>=6)&&(j<=(4+i)))
             {
                printf("%c",t);
                t--;
             }
         }
         printf("\n");
    }
    return 0;
 }