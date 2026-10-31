#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Tabel
// Description   : This function accepts a number from the user and print tabel taht number.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Tabel (int iNo)
{
    int iCnt = 0, iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <=10; iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d \t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Tabel(iValue);
    
    return EXIT_SUCCESS;
}