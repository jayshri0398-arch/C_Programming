//Assignnment24_3
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Description   : Accept string and character from user and return first occurance of that character.
// Input         : Character, Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int i = 0;

    for(i = 0; *str != '\0'; i++, str++)
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is : %d\n",iRet);

    return EXIT_SUCCESS;
}