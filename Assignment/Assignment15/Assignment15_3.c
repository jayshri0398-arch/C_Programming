//Assignment15_3
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEqual
// Description   : Accept two number from user and check that numbers equal or not.
// Input         : Integer, Integer
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat                           
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
    
int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
            printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    
    return EXIT_SUCCESS;    
}