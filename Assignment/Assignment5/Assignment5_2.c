#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Leap Year
// Description   : This program checks whether a given year is a leap year.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 20/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(((iYear % 400)==0) && ((iYear % 4)==0) || ((iYear % 100)!=0))
    {
        printf("%d Leap Year\n",iYear);
    }
    else
    {
        printf("%d Not Leap Year\n",iYear);   
    }
}

int main()
{
    int iYear = 0;

    printf("Enter Year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}