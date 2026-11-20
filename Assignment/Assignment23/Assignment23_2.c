//Assignment23_2
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Struprx
// Description   : Accept string from user and  convert it into uppercase.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Struprx(char *str)
{
    while(*str != '\0')
        {
            if(*str >= 'a' && *str <= 'z')
            {
                *str = *str - 32;
            }
            str++;
        }
}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Struprx(arr);

    printf("Modified string is : %s",arr );

    return EXIT_SUCCESS;
}