#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divide 
// Description   : This program divides two numbers.
// Input         : Integers, Integers
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 17/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    
    if(iNo2 == 0)
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2;
    
    return iAns;
}

int main()
{
    int iValue1 = 20, iValue2 = 5;
    int iRet = 0;
    
    iRet = Divide(iValue1,iValue2);
    
    printf("Division is %d\n",iRet);
    
    return 0;
}