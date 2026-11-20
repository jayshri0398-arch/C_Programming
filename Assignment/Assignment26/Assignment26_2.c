//Assignment26_2
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept character from user and display corresponding character.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);
    
    return EXIT_SUCCESS;
}