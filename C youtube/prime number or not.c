/******************************************************************************

    Question:
            prime number or not:
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,i,flag=0;
    printf("enter a number:");
    scanf("%d",&a);
    
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
       printf("not prime number") ;
    }
    else
    {
        printf("prime number");
    }

    return 0;
}

