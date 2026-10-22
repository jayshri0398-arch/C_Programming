#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display Convert
// Description   : A program to convert uppercase letters to lowercase and lowercase letters to uppercase.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        CValue = CValue - 32;
        printf("%c\n",CValue);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        CValue = CValue + 32;
        printf("%c\n",CValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return EXIT_SUCCESS;
}