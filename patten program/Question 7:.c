/******************************************************************************

1 
2 3 
3 4 5
5 6 7 8

*******************************************************************************/
#include<stdio.h>

int main()
{
    int r,c,i,j,sum=0;
    printf("enter a row :");
    scanf("%d",&r);
    printf("enter a column :");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
         for(j=0;j<i;j++)
         {
            if(j<i+1)
            {
                sum=i+1;
                printf("%d",sum);
            }
            else
            {
              printf("%d",i);
            }
         }
         sum=0;
    }
        
           
           
}
    
   
