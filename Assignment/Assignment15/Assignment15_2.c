//Assignment15_2
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater 
// Description   : Accept number from user and check that number greater than 100 or not.
// Input         : Integer
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid value\n");
        return EXIT_FAILURE;
    }

    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    
    return EXIT_SUCCESS;    
}