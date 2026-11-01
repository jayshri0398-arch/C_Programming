#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FahrenheitToCelsius
// Description   : This function converts the given temperature from Fahrenheit to Celsius.
// Input         : Float 
// Output        : Double
// Author        : Jayashri Ramchandra Thorat
// Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0;

    fCelsius = ((fTemp - 32) * ((float )5/9));

    return fCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to celsius : %0.4lf",dRet);

    return EXIT_SUCCESS;
}