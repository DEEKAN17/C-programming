/******************************************************************************

palinome program

*******************************************************************************/
#include<stdio.h>

int main()
{
    int a,rev=0;
    printf("enter a number:");
    scanf("%d",&a);
    int  temp=a;
    while(a>0)
    {
        rev=rev*10;//change the unit digit into the hundered digit
        rev=rev+(a%10);
        a=a/10;
    }
    printf("%d",rev);
    
    if(temp==rev)
    {
        printf("\npalinorme");
    }
    else
    {
        printf("\nnot a palinorme");
    }
    
}
