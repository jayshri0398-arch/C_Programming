#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : This program prints numbers from 5 to 1 on the screen.
// Input         : None
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 17/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    iCnt = 5;

    while(iCnt >= 1)
        {
            printf("%d\n",iCnt);
            iCnt--;
        }
}

int main()
{
    Display();
    
    return 0;
}