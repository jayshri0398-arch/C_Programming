//Assignment12_2
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description   : This function accepts value from the user and check weather it contain 0 or not.
// Input         : Integer 
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit == 0)
            {
                return TRUE;
            }
            
            iNo = iNo/10;
        }
    
        return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return EXIT_SUCCESS;
}