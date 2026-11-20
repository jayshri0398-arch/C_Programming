//Assignment26_5
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept character from user and display value in decimal, hexadecimal, and octal.
// Input         : None
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : %X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}