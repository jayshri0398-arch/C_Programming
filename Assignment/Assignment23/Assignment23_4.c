//Assignment23_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : Accept string from user and display only digits from that string.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
        {
            if(*str >= '1' && *str <= '9')
            {
                printf("%c",*str);
            }
            str++;
        }
}

int main()
{
    char arr[20];

    printf("Enter string  : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);
    
    return EXIT_SUCCESS;
}