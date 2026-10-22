#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Number
// Description   : This program checks whether a number is positive, negative, or zero.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void checkNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("It is Positive number\n");
    }
    else if(iValue < 0)
    {
        printf("It is negative number\n");
    }
    else
    {
        printf("It is Zero");
    }
}

int main() {
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    checkNumber(iValue);
    
    return EXIT_SUCCESS;
}