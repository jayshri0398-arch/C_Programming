//Assignment11_5
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : This function accepts two values from the user and displays all numbers in reverse order 
//                  between the given range.
// Input         : Integer, Integer 
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range \n");
        
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}