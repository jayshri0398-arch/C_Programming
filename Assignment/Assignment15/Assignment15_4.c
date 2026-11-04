//Assignment15_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiply 
// Description   : Accept three numbers from user and returns its multiplication(handle condition of zero).
// Input         : Integer, Integer, Integer
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat                           
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }

    if(iNo2 == 0)
    {
        iNo2 = 1;
    }

    if(iNo3 == 0)
    {
        iNo3 = 1;
    }
    
    iAns = iNo1 * iNo2 * iNo3;
    
    return iAns;
}
    
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers : ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of all three numbers is : %d\n",iRet);

    return EXIT_SUCCESS;    
}