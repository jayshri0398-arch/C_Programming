#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display 
// Description   : This program checks whether a number is less than a given value.
//                 If the condition is true, it prints "Hello"; otherwise, it prints "Demo".
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}