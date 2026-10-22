#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Even Odd
// Description   : This program checks whether a number is Even or Odd.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void checkEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("It is Even no\n");
    }
    else
    {
        printf("It is Odd no\n");
    }
}

int main() {
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    checkEvenOdd(iValue);
    
    return EXIT_SUCCESS;
}