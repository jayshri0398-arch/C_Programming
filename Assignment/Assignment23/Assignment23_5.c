//Assignment23_5
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Description   : Accept string from user and count number of white spaces.
// Input         : Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
        {
            if(*str == ' ')
            {
                iCount++;
            }
            str++;
        }
    return iCount;
}

int main()
{
    char arr[200];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}