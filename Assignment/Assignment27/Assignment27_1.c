//Assignment27_1.c
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Description   : Accept string from user and count number of capital characters.
// Input         : Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
        {
            if(*str >= 'A' && *str <= 'Z')
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}