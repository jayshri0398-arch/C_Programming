//Assignment13_3
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : This function accepts number from the user and count of digits in between 3 and 7.
// Input         : Integer 
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if((iDigit > 3) && (iDigit < 7))
            {
                iCount++;
            }

            iNo = iNo/10;
        }

        return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}