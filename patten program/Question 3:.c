/******************************************************************************

Question 3:
            *****
            ****
            ***
            **
            *

*******************************************************************************/
/*
#include <stdio.h>

int main()
{
    int n,m,i,j;
    printf("Enter a row");
    scanf("%d",&n);
    printf("Enter a column");
    scanf("%d",&m);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("*");
        }
        m=m-1;
        printf("\n");
    }

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter a row");
    scanf("%d",&n);
    printf("Enter a column");
    scanf("%d",&m);
    
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        //m=m-1;
        printf("\n");
    }

    return 0;
}

