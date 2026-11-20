//Assignnment24_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastChar
// Description   : Accept string and character from user and return index of last occurance of that character.
// Input         : Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int MyStrLen(char *str)
{
    int iCount = 0;

    while(*str != '\0')
        {
            iCount++;
            str++;
        }
    return iCount;
}

int LastChar(char *str, char ch)
{
    int i = 0, Strlength = 0;

    Strlength = MyStrLen(str) - 1;

    str = str + Strlength;

    for(i = Strlength; i >= 0; i--, str--)
        {
            if(*str == ch)
            {
                return i;
            }
        }
    return -1;
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

    iRet = LastChar(arr,cValue);

    printf("Character location is : %d\n",iRet);

    return EXIT_SUCCESS;
}