//Assignment16_1

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accept number of rows and columns from user and display the pattern
// Input         : Integer, Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 15/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
int i = 0, j = 0;
char ch = '\0';

    for(i = 1; i <= iRow ; i++)
    {       
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                printf("%c \t",ch);              
            }
            printf("\n");
    }      
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}