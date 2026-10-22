#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Calculate Shopping Discount
// Description   : This program calculates the shopping discount based on the purchase amount.
// Input         : float
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount >= 5000)
    {
        fDiscount = (fAmount * 0.20);
        printf("Discount : %f \n",fDiscount);
        fFinalAmount = (fAmount - fDiscount);
        printf("Payable Amount : %f \n",fFinalAmount);
        
    }
    else if((fAmount > 1000) && (fAmount < 5000))
    {
        fDiscount = (fAmount * 0.10);
        printf("Discount : %f \n",fDiscount);
        fFinalAmount = (fAmount - fDiscount);
        printf("Payable Amount : %f \n",fFinalAmount);
    }
    else if((fAmount > 0) && (fAmount < 1000))
    {
        printf("Payable Amount = %f \n",fAmount);
    }
    else
    {
        printf("Invalid Input \n");
    }
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}