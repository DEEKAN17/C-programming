/******************************************************************************
 1 
 1 2 
 1 2 3 
 1 2 3 4 
 1 2 3 4 5 

*******************************************************************************/
#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("enter a row :");
    scanf("%d",&r);
    //printf("enter a column :");
    //scanf("%d",&c);
    
    for(i=0;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
