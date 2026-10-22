#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Triangle Validity
// Description   : This program checks whether a triangle is valid based on its three sides.
// Input         : Integer, Integer, Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 < 0) || (iSide2 < 0) || (iSide3 < 0))
    {
        printf("Invalid input\n0");

        return;
    }

    if(((iSide1 + iSide2) > iSide3) && ((iSide2 + iSide3) > iSide1) && ((iSide1 + iSide3) > iSide2))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);
    
    return EXIT_SUCCESS;
}