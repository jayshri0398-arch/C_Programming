//Assignment14_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : This function accepts number from the user and display its summation of non factors.
// Input         : Integer 
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}