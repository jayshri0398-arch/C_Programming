//Assignment14_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description   : This function accepts number from the user and return difference between summation 
//                 of all it factors and non factors.
// Input         : Integer 
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iFactSum = 0, iNonFactSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFactSum = iFactSum + iCnt;
            }
            else
            {
                iNonFactSum = iNonFactSum + iCnt;
            }
        }

        return (iNonFactSum - iFactSum);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}