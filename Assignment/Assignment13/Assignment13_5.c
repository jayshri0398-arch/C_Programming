//Assignment13_5
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : This function accepts number from the user and return difference between summation of 
//                 odd digits and summation of even digits.
// Input         : Integer 
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            iNo = iNo/10;
        }

        return(iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}