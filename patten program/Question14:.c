/******************************************************************************

Question 14:
            A B C D E 
            A B C D 
            A B C 
            A B 
            A

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r,i,j;
    printf("enter a row:");//r=5
    scanf("%d",&r);
    
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%c",64+j);
        }
        printf("\n");
    }

    return 0;
}

