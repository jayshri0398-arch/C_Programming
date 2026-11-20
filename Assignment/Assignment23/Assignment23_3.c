//Assignment23_3
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Strtoggle
// Description   : Accept string from user and toggle the case.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Strtoggle(char *str)
{
    while(*str != '\0')
        {
            if(*str >= 'a' && *str <= 'z')
            {
                *str = *str - 32;
            }
            else if(*str >= 'A' && *str <= 'Z')
            {
                *str = *str + 32;
            }
            str++;
        }
}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Strtoggle(arr);

    printf("Modified string is : %s",arr );

    return EXIT_SUCCESS;
}