//Assignment24_5.c
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrRevX
// Description   : Accept string from user and reverse that string in place.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int StrLength(char *str)
{
    int iCount = 0;

    while(*str != '\0')
        {
            iCount++;
            str++;
        }
    return iCount;
}

void StrRevX(char *str)
{
    int length = 0;
    int i = 0;
    
    length = StrLength(str) - 1;

    str = str + length;

    for(i = length; *str != 0; i--, str--)
        {
            printf("%c",*str);
        }   
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    return EXIT_SUCCESS;
}