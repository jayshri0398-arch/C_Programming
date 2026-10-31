#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : This function accepts a number from the user and displays "Small" if the number
//                 is less than 50, "Medium" if the number is between 50 and 100, and "Large" if
//                 the number is greater than 100.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
        printf("Invalid Number\n");
        return;
    }

    if(iNo > 100)
    {
        printf("Large\n");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Small\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}