//Assignment25_1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Description   : Accept character from user and check it is alphabet or not.
// Input         : Character
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0



BOOL ChkAlpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return EXIT_SUCCESS;
}