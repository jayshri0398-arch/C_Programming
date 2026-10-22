//Assignment6_1.c
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Calculate Electricity Bill
// Description   : This program calculates the electricity bill based on units consumed.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = (iUnits * 5);
        printf("Bill = %f",fBill);
    }
    else if((iUnits >=101) && (iUnits <= 200))
    {
        fBill = (((iUnits - 100) *7) + (100 * 5));
        printf("Bill = %f",fBill);
    }
    else if((iUnits >=201))
    {
        fBill = (((iUnits - 200) * 10) + (100*5) +(100 *7));
        printf("Bill = %f",fBill);
    }
    
}
int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}