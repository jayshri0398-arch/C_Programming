//Assignment27_2.c
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Description   : Accept string from user and count number of small characters.
// Input         : Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
        {
            if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}