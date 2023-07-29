/******************************************************************************

    Question 11:
          *                     i=1   _ _ _ _ * _ _ _ _
        * * *                   i=2   _ _ _ * * * _ _ _
      * * * * *                 i=3   _ _ * * * * * _ _
    * * * * * * *               i=4   _ * * * * * * * _                 
  * * * * * * * * *             i=5   * * * * * * * * * 
    * * * * * * *               i=6   _ * * * * * * * _ 
       * * * * *                i=7   _ _ * * * * * _ _
         * * *                  i=8   _ _ _ * * * _ _ _
           *                    i=9   _ _ _ _ * _ _ _ _
    

i=1 to i=4
    first loop for print row
    second loop for print space (space -row)
    third loop for print * 
            condition :((2*i)-1)
            
i=5 to i=9:
     first loop for print row
    second loop for print space (space -row)
    third loop for print *
            condition: :((2*i)-1)   


*******************************************************************************/

#include <stdio.h>

int main()
{
    int row,space,i,j;
     printf("enter a row :");
     scanf("%d",&row);
     
     
     for(i=1;i<row;i++)//row 
     {
         for(space=1;space<=(row-i);space++)//this for space 
         {
            printf(" ");
         }
         for(j=1;j<=(2*i)-1;j++)
         {
             printf("*");
         }
         printf("\n");
        
     }
     for(i=row;i>=0;i--)//row
    {
        for(space=1;space<=row-i;space++)//space
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

