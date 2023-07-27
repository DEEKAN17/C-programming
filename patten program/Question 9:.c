/******************************************************************************
Question 9:
                         hint: j
    *                          1 2 3 4 5 6 7 8 9
   * *                   i=1   _ _ _ _ * _ _ _ _   
  * * *                  i=2   _ _ _ * * * _ _ _
 * * * *                 i=3   _ _ * * * * * _ _
* * * * *                i=4   _ * * * * * * * _  
                         i=5   * * * * * * * * * 
                         
    first loop for print row
    second loop for print space (space -row)
    third loop for print *_(_ means space)
*******************************************************************************/
#include <stdio.h>

int main()
{
    int row,space,i,j;
     printf("enter a row :");
     scanf("%d",&row);
     
     
     for(i=1;i<=row;i++)//row 
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
     

    return 0;
}
