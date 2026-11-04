//Assignment15_5
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Percentage 
// Description   : Accept total marks and obtained marks from user and calculate percentage.
// Input         : Integer, Integer
// Output        : Float
// Author        : Jayashri Ramchandra Thorat                           
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0;

    fAns = ((float)iNo2/iNo1 * 100);

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%0.2f\n",fRet);

    return EXIT_SUCCESS;       
}