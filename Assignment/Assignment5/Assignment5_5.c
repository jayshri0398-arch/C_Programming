#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Charactor Type
// Description   : This program checks whether a character is an alphabet, digit, or special character.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 20/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet \n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet \n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit \n");
    }
    else
    {
        printf("Special Character \n");
    }
}

int main()
{    
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);
    
    return EXIT_SUCCESS;
}