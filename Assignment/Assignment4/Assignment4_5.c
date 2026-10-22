#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Divisibility
// Description   : This program checks a number is divisible by 5. 
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


void checkDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("It is Divisible by 5 \n");
    }
    else
    {
        printf("It is Not Divisible by 5 \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);

    checkDivisibility(iValue);

    return EXIT_SUCCESS;
}