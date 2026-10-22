#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Find Greater number
// Description   : This program finds the greatest among two numbers.
// Input         : Integer, Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst == iSecond)
    {
        printf("Both numbers are equal\n");
    }
    else if(iFirst > iSecond)
    {
        printf("%d is Greater\n",iFirst);
    }
    else 
    {
        printf("%d is Greater\n",iSecond);
    }
}

int main() {
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}