#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : This function calculates the difference between the even factorial and odd factorial.
// Input         : Integer
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0, iFact1 = 0, iFact2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo, iFact1 = 1, iFact2 = 1; iCnt >=1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return (iFact1 - iFact2);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
     
    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d",iRet);

    return EXIT_SUCCESS;   
}