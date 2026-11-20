//Assignment24_2
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Description   : Accept string and character from user and return frequency of that character.
// Input         : Character, Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != 0)
        {
            if(*str == ch)
            {
                iCount++;
            }
            str++;
        }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is : %d",iRet);

    return EXIT_SUCCESS;
}