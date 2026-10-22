#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Multiple Divisibility
// Description   : This program checks whether a number is divisible by 3 or 5 and both. 
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 20/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by both \n");
    }
    else if((iValue % 3) == 0)
    {
        printf("Divisible by 3 Only \n");
    } 
    else if((iValue % 5) == 0)
    {
        printf("Divisible by 5 Only \n");
    }
    else
    {
        printf("Not Divisible by Either \n");
    }    
}

int main()
{    
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);
    
    return EXIT_SUCCESS;
}