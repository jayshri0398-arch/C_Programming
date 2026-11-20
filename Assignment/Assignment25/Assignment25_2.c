//Assignment25_2
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkCapital
// Description   : Accept character from user and check it is capital or not.
// Input         : Character
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0
    
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charactor : ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return EXIT_SUCCESS;
}