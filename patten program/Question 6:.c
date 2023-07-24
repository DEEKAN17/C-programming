/******************************************************************************

 1 
 22
 333
 4444

*******************************************************************************/
#include<stdio.h>
int main()
{
    int r,c,i,j,sum;
    printf("enter a row :");
    scanf("%d",&r);
    printf("enter a column :");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
         for(j=0;j<i;j++)
         {
            printf("%d",i); 
         }
         printf("\n");
    }
        
           
           
}
