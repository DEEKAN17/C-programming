/***************************************************************************
                             patten program:
 Question:
            *****
            *****
            *****
            *****
            *****

*******************************************************************************/
#include<stdio.h>

int main()
{
    int n,m,i,j;
    printf("Enter a row:");
    scanf("%d",&n);
    printf("Enter a column:");
    scanf("%d",&m);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
