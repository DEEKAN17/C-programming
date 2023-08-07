/******************************************************************************

    Question :
                reverse a number.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a number :");
    scanf("%d",&a);
    
    while(a>0)
    {
        b=a%10;
        
        a=a/10;
        printf("%d",b);
    }
    
    
    return 0;
}

/*#include<stdio.h>

int main()
{
    int a,rev=0;
    printf("enter a number:");
    scanf("%d",&a);
    
    while(a>0)
    {
        rev=rev*10;//change the unit digit into the hundered digit
        rev=rev+(a%10);
        a=a/10;
    }
    printf("%d",rev);
    
}


*/
















