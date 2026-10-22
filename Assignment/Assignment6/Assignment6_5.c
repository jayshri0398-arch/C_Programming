#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Calculate Employee Bonus
// Description   : Calculate employee bonuses based on years of service and monthly salary. 
// Input         : float, integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if((fSalary < 0) || (iYears < 0))
    {
        printf("Invalid Input \n");
    }
    else if(iYears > 10)
    {
        fBonus = (fSalary * 0.15);
        printf("Bonus = %f \n",fBonus);
    }
    else if((iYears >= 5) && (iYears <= 10))
    {
        fBonus = (fSalary * 0.10);
        printf("Bonus = %f \n",fBonus);
    }
    else 
    {
        fBonus = (fSalary * 0.05);
        printf("Bonus = %f \n",fBonus);
    }
}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);
    
    return EXIT_SUCCESS;
}