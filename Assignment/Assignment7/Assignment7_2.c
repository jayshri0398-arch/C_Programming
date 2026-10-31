#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This function accepts a number from the user and prints numbers from 1 up to that
//                 number.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;

        printf("Invalid number\n");
        
        return;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}