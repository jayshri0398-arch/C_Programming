#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display First Number
// Description   : This program displays the first number as many times as the second number.
// Input         : Integers, Integers
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int Frequency)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= Frequency; iCnt++)
        {
            printf("%d\t",iNo);
        }
    
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter Frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}