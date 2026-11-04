//Assignment14_2
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : This function accepts number from the user and display its factor in reverse order .
// Input         : Integer 
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
        {
            if((iNo % iCnt) == 0)
            {
                printf("%d\t",iCnt);
            }
        }

        printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}