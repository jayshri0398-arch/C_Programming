#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : This function converts the amount in US Dollars (USD) into Indian Rupees (INR).
// Input         : Integer
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    int iDoller = 70, iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
        
        printf("Invalid Number\n");
        
        return EXIT_FAILURE;
    }

    iAns = iDoller *iNo;
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d \n",iRet);

    return EXIT_SUCCESS;
}