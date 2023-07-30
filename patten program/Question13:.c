/******************************************************************************

Question 13:
A 
A B 
A B C 
A B C D 
A B C D E


*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,i,j;
    printf("ENTER ROW:");
    scanf("%d",&r);
    
    for(i=0;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }

    return 0;
}

