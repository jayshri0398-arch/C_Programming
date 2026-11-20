//Assignment26_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Description   : Accept character from user and check it is special symbol or not.
// Input         : Character
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
        if(ch >= 'A' && ch <= 'Z' || 
           ch >= 'a' && ch <= 'z' || 
           ch >= '0' && ch <= '9')
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character\n");
    }
    else
    {
        printf("It is not Special Character\n");
    }
    
    return EXIT_SUCCESS;
}