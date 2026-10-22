#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Divisibility
// Description   : This program checks whether a given number is divisible by 5 or not.
// Input         : Integer
// Output        : Bool
// Author        : Jayashri Ramchandra Thorat
// Date          : 17/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo1)
{
 if((iNo1 % 5) == 0)
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
    return EXIT_SUCCESS;
}