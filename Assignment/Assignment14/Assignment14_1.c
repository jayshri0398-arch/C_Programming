//Assignment14_1
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MulFact
// Description   : This function accepts number from the user and display its multiplication of factors.
// Input         : Integer 
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 0;

    iMult = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iMult = iMult * iCnt;
            }
        }

        return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}