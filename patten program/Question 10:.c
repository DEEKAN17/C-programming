/******************************************************************************

 Question 10:
                            
                                j=   1 2 3 4 5 6 7 8 9   
  * * * * * * * * *             i=5   * * * * * * * * * 
    * * * * * * *               i=4   _ * * * * * * * _ 
       * * * * *                i=3   _ _ * * * * * _ _
         * * *                  i=2   _ _ _ * * * _ _ _
           *                    i=1   _ _ _ _ * _ _ _ _
                 
 
    first loop for print row
    second loop for print space (space -row)
    third loop for print *
            condition: :((2*i)-1)   

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r,i,space,j;
    printf("enter a row :");
    scanf("%d",&r);
    
    for(i=5;i>=0;i--)//row
    {
        for(space=1;space<=r-i;space++)//space
        {
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
