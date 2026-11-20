//Assignment27_3.c
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description   : Accept string from user and return difference inbetween capital or small characters.
// Input         : Character
// Output        : Integer
// Author        : Jayashri Ramchandra Thorat
// Date          : 20/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCapitalCount = 0, iSmallCount = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
        {
            if(*str >= 'A' && *str <= 'Z')
            {
                iCapitalCount++;
            }
            else
            {
                iSmallCount++;
            }
            str++;
        }
    
    return (iSmallCount - iCapitalCount);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}