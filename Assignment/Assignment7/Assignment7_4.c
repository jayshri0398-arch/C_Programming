#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : This function accepts a number from the user and prints odd numbers in a sequence.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return EXIT_SUCCESS;
}