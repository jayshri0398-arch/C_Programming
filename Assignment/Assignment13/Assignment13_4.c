//Assignment13_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Description   : This function accepts number from the user and return multiplication of all digits.
// Input         : Integer 
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0, iAns = 0;

    iAns = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit != 0)
            {
                iAns = iAns * iDigit;
            }

            iNo = iNo/10;
        }

        return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}