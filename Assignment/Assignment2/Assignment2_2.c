#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display Star
// Description   : This program displays a star (*) using the given integer.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;

    //input updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo >= iCnt)
        {
            printf(" * ");
            iNo--;
        }
    
    
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}