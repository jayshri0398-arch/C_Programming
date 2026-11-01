#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : This function converts the given distance in kilometers (KM) into meters (M).
// Input         : Integer 
// Output        : Integer 
// Author        : Jayashri Ramchandra Thorat
// Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iKm)
{
    int iMeter = 1000, iAns = 0;

    if(iKm < 0)
    {
        iKm = -iKm;
    }

    iAns = iMeter * iKm;
    
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Kilometer to Meter Conversion : %d",iRet);

    return EXIT_SUCCESS;
}