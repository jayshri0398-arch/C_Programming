#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : TabelRev
// Description   : This function accepts a number from the user and print reverse tabel taht number.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void TabelRev(int iNo)
{
    int iCnt = 0, iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TabelRev(iValue);
    
    return EXIT_SUCCESS;
}