#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : This function calculates the area of rectangle using its width and height .
// Input         : Float, Folat
// Output        : Double 
// Author        : Jayashri Ramchandra Thorat
// Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }

    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is : %0.3lf",dRet);

    return EXIT_SUCCESS;
}