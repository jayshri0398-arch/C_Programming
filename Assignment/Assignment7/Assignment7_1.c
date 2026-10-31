#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : This function accepts an integer and displays the specified number of '$' and '*'.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}