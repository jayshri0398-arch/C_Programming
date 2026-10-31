#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Description   : This function accepts a number from the user and calculate its factorial.
// Input         : Integer
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 0, iAns = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo, iFact = 1; iCnt >= 1 ; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d \n",iRet);
    
    return EXIT_SUCCESS;
}