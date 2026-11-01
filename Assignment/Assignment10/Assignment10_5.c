#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SquareFeetToSquareMeter
// Description   : This function converts the given area from square feet into square meters.
// Input         : Float 
// Output        : Double
// Author        : Jayashri Ramchandra Thorat
// Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    float fFeet = 0.0;
    double dRet = 0.0;
    
    fFeet = 0.0929;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    dRet = fFeet * (float)iValue;

    return dRet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square Mater is : %lf",dRet);
    
    return EXIT_SUCCESS;
}