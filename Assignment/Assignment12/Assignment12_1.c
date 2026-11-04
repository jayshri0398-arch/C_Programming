//Assignment12_1
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : This function accepts value from the user and displays its digit in reverse order
// Input         : Integer 
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d\n",iDigit);
            iNo = iNo/10;
        }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}