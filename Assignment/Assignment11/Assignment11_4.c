//Assignment11_4
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description   : This function accepts two values from the user and display returns the sum of
//                 all even numbers in between that range
// Input         : Integer, Integer 
// Output        : Integer 
// Author        : Jayashri Ramchandra Thorat
// Date          : 03/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0, iCnt = 0;

    if((iStart < 0) || (iEnd < 0))
    {
         printf("Invalid range \n");
        
        return EXIT_FAILURE;   
    }
    
    if(iStart > iEnd)
    {
        printf("Invalid range \n");
        
        return EXIT_FAILURE;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is : %d \n",iRet);

    return EXIT_SUCCESS;
}