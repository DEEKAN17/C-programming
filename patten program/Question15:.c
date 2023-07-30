/******************************************************************************
Question 15:
            A
            BB
            CCC
            DDDD
            EEEEE


*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,i,j;
    printf("enter row:");
    scanf("%d",&r);
    
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }

    return 0;
}

