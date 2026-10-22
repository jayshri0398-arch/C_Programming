#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display Star
// Description   : This program accepts one number from the user and prints a star (*).
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 17/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo1)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
        {
            printf("*\t");
        }
}

int main()
{
    int iValue = 0;
        
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Accept(iValue);
    
    return EXIT_SUCCESS;
}