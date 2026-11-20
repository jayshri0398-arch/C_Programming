//Assignment23_1
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Strlwrx
// Description   : Accept string from user and  convert it into lowercase.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Strlwrx(char *str)
{
    while(*str != '\0')
        {
            if(*str >= 'A' && *str <= 'Z') 
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

    Strlwrx(arr);

    printf("Modified string is : %s",arr );

    return EXIT_SUCCESS;
}