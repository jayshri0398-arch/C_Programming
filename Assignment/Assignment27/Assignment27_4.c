//Assignment27_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Accept string from user and check vowels in it or not.
// Input         : Character
// Output        : Boolean
// Author        : Jayashri Ramchandra Thorat
// Date          : 20/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
        {
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || 
                *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
                {
                    return TRUE;
                }

                str++;

        }

        return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return EXIT_SUCCESS;
}