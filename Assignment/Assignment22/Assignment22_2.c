//Assignment22_2
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accept number from user and display the pattern
// Input         : Integer, Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 17/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            printf("%d\t#\t",iCnt);
        }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return EXIT_SUCCESS;
}